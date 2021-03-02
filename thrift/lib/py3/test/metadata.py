#!/usr/bin/env python3
# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import unittest

import testing.metadata
from apache.thrift.metadata.types import ThriftPrimitiveType
from testing.clients import TestingService
from testing.services import TestingServiceInterface
from testing.types import hard, HardError, Perm, mixed
from thrift.py3.metadata import gen_metadata, ThriftKind


class MetadataTests(unittest.TestCase):
    def test_metadata_enums(self) -> None:
        meta = gen_metadata(testing.metadata)
        enumName = "testing.Perm"
        self.assertIsNotNone(meta)
        permEnum = meta.enums[enumName]
        self.assertEqual(permEnum.name, enumName)
        self.assertEqual(permEnum.elements[1], "execute")
        self.assertEqual(permEnum.elements[4], "read")
        self.assertEqual(len(permEnum.elements), 3)
        self.assertEqual(permEnum, gen_metadata(Perm))
        self.assertEqual(permEnum, gen_metadata(Perm(1)))

    def test_metadata_structs(self) -> None:
        meta = gen_metadata(testing.metadata)
        structName = "testing.hard"
        self.assertIsNotNone(meta)
        hardStruct = meta.structs[structName]
        hardStructClass = gen_metadata(hard)
        hardStructInstance = gen_metadata(hard(val=1, val_list=[1, 2], name="name"))

        self.assertFalse(hardStruct.is_union)
        self.assertEqual(hardStruct.name, structName)
        self.assertEqual(len(hardStruct.fields), 5)
        self.assertEqual(len(list(hardStructClass.fields)), 5)
        self.assertEqual(len(list(hardStructInstance.fields)), 5)

        field = hardStruct.fields[2]
        _, _, fieldClass, *rest = hardStructClass.fields
        _, _, fieldInstance, *rest = hardStructClass.fields
        self.assertEqual(field.name, "name")
        self.assertEqual(field.is_optional, False)
        self.assertEqual(fieldClass.is_optional, False)
        self.assertEqual(fieldInstance.is_optional, False)
        self.assertEqual(field.type.value, ThriftPrimitiveType.THRIFT_STRING_TYPE)
        self.assertEqual(
            fieldClass.type.as_primitive(), ThriftPrimitiveType.THRIFT_STRING_TYPE
        )
        self.assertEqual(
            fieldInstance.type.as_primitive(),
            ThriftPrimitiveType.THRIFT_STRING_TYPE,
        )

        self.assertEqual(meta.structs["testing.EmptyUnion"].is_union, True)

    def test_metadata_struct_recursive(self) -> None:
        hard_struct = gen_metadata(hard)

        # The struct (at the time of writing this test) has 5 fields
        # grabbing fields 2 and 4 to check
        _, val_list, _, an_int, _, *rest = hard_struct.fields
        self.assertEqual(an_int.name, "an_int")
        self.assertEqual(val_list.type.kind, ThriftKind.TYPEDEF)

        # Test a few fields on the struct
        integers = an_int.type.as_union()
        self.assertEqual(integers.name, "testing.Integers")
        self.assertEqual(integers.is_union, True)

        # Grab type on field, treat as struct (for type checking), grab fields
        _, _, _, _, _, name, digits, *rest = integers.fields
        self.assertEqual(digits.name, "digits")
        self.assertEqual(
            name.type.as_primitive(), ThriftPrimitiveType.THRIFT_STRING_TYPE
        )

        # metadata api returns a typedef from the former, this seems to be a known bug
        # self.assertEqual(
        #    list(digits.type.as_struct().fields)[0].type.as_list().valueType.type, an_int.type.as_struct()
        # )

        # Grab another struct of type Integers
        mixed_struct = gen_metadata(mixed)
        _, _, _, easy_struct, *rest = mixed_struct.fields
        _, _, _, other_integers, *rest = easy_struct.type.as_struct().fields
        other_integers = other_integers.type.as_union()

        # Check an_int (type Integers) vs other_integers (type Integers)
        # checking the same fields that were checked before to confirm that
        # the two structs have the same values despite being fetched via
        # different means
        self.assertEqual(other_integers.name, integers.name)
        self.assertEqual(other_integers.is_union, integers.is_union)

    def test_metadata_exceptions(self) -> None:
        meta = gen_metadata(testing.metadata)
        errorName = "testing.HardError"
        self.assertIsNotNone(meta)
        hardError = meta.exceptions[errorName]
        hardErrorClass = gen_metadata(HardError)
        hardErrorClassInstance = gen_metadata(HardError(code=1))

        self.assertEqual(hardError.name, errorName)
        self.assertEqual(hardErrorClass.name, errorName)
        self.assertEqual(hardErrorClassInstance.name, errorName)
        self.assertEqual(len(hardError.fields), 2)

        field = hardError.fields[1]
        _, fieldClass, *rest = hardErrorClass.fields
        _, fieldInstance, *rest = hardErrorClassInstance.fields
        self.assertEqual(field.name, "code")
        self.assertEqual(fieldClass.name, "code")
        self.assertEqual(fieldInstance.name, "code")
        self.assertEqual(field.is_optional, False)
        self.assertEqual(field.type.value, ThriftPrimitiveType.THRIFT_I32_TYPE)

    def test_metadata_services(self) -> None:
        meta = gen_metadata(testing.metadata)
        serviceName = "testing.TestingService"
        self.assertIsNotNone(meta)
        testingService = meta.services[serviceName]
        testingServiceClass = gen_metadata(TestingService)
        testingServiceInstance = gen_metadata(TestingServiceInterface)

        self.assertEqual(testingService.name, serviceName)
        self.assertEqual(testingServiceClass.name, serviceName)
        self.assertEqual(testingServiceInstance.name, serviceName)
        self.assertEqual(testingService.parent, None)
        self.assertEqual(testingServiceClass.parent, None)
        self.assertEqual(testingServiceInstance.parent, None)
        self.assertEqual(len(testingService.functions), 11)

        func = testingService.functions[4]
        _, _, _, _, funcClass, *rest = testingServiceClass.functions
        _, _, _, _, funcInstance, *rest = testingServiceClass.functions
        self.assertEqual(func.name, "complex_action")
        self.assertEqual(funcClass.name, "complex_action")
        self.assertEqual(funcInstance.name, "complex_action")
        self.assertEqual(func.return_type.value, ThriftPrimitiveType.THRIFT_I32_TYPE)
        self.assertEqual(
            funcClass.return_type.as_primitive(),
            ThriftPrimitiveType.THRIFT_I32_TYPE,
        )
        self.assertEqual(
            funcInstance.return_type.as_primitive(),
            ThriftPrimitiveType.THRIFT_I32_TYPE,
        )
        self.assertEqual(len(func.exceptions), 0)
        self.assertEqual(len(list(funcClass.exceptions)), 0)
        self.assertEqual(len(list(funcInstance.exceptions)), 0)
        self.assertFalse(func.is_oneway)
        self.assertEqual(len(func.arguments), 4)
        self.assertEqual(len(list(funcClass.arguments)), 4)
        self.assertEqual(len(list(funcInstance.arguments)), 4)

        arg = func.arguments[2]
        _, _, argClass, *rest = funcClass.arguments
        _, _, argInstance, *rest = funcInstance.arguments
        self.assertEqual(arg.name, "third")
        self.assertEqual(argClass.name, "third")
        self.assertEqual(argInstance.name, "third")
        self.assertFalse(arg.is_optional)
        self.assertEqual(arg.type.value, ThriftPrimitiveType.THRIFT_I64_TYPE)
        self.assertEqual(
            argClass.type.as_primitive(), ThriftPrimitiveType.THRIFT_I64_TYPE
        )
        self.assertEqual(
            argInstance.type.as_primitive(), ThriftPrimitiveType.THRIFT_I64_TYPE
        )
