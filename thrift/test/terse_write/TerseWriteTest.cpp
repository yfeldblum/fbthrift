/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <map>
#include <set>
#include <vector>

#include <folly/portability/GTest.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/JSONProtocol.h>
#include <thrift/lib/cpp2/protocol/Serializer.h>
#include <thrift/lib/cpp2/protocol/SimpleJSONProtocol.h>
#include <thrift/test/terse_write/gen-cpp2/deprecated_terse_write_types.h>
#include <thrift/test/terse_write/gen-cpp2/deprecated_terse_write_types_custom_protocol.h>
#include <thrift/test/terse_write/gen-cpp2/terse_write_types.h>
#include <thrift/test/terse_write/gen-cpp2/terse_write_types_custom_protocol.h>

namespace apache::thrift::test {

template <class T>
struct TerseWriteTests : ::testing::Test {};

TYPED_TEST_CASE_P(TerseWriteTests);
TYPED_TEST_P(TerseWriteTests, assign) {
  TypeParam obj;
  terse_write::MyStruct s;
  s.field1() = 1;

  obj.bool_field() = true;
  obj.byte_field() = 1;
  obj.short_field() = 2;
  obj.int_field() = 3;
  obj.long_field() = 4;
  obj.float_field() = 5;
  obj.double_field() = 6;
  obj.string_field() = "7";
  obj.binary_field() = "8";
  obj.enum_field() = terse_write::MyEnum::ME1;
  obj.list_field() = {1};
  obj.set_field() = {1};
  obj.map_field() = std::map<int32_t, int32_t>{{1, 1}};
  obj.struct_field() = s;

  EXPECT_EQ(obj.bool_field(), true);
  EXPECT_EQ(obj.byte_field(), 1);
  EXPECT_EQ(obj.short_field(), 2);
  EXPECT_EQ(obj.int_field(), 3);
  EXPECT_EQ(obj.long_field(), 4);
  EXPECT_EQ(obj.float_field(), 5);
  EXPECT_EQ(obj.double_field(), 6);
  EXPECT_EQ(obj.string_field(), "7");
  EXPECT_EQ(obj.binary_field(), "8");
  EXPECT_EQ(obj.enum_field(), terse_write::MyEnum::ME1);
  EXPECT_FALSE(obj.list_field()->empty());
  EXPECT_FALSE(obj.set_field()->empty());
  EXPECT_FALSE(obj.map_field()->empty());
  EXPECT_EQ(obj.struct_field(), s);

  apache::thrift::clear(obj);

  EXPECT_EQ(obj.bool_field(), false);
  EXPECT_EQ(obj.byte_field(), 0);
  EXPECT_EQ(obj.short_field(), 0);
  EXPECT_EQ(obj.int_field(), 0);
  EXPECT_EQ(obj.long_field(), 0);
  EXPECT_EQ(obj.float_field(), 0);
  EXPECT_EQ(obj.double_field(), 0);
  EXPECT_EQ(obj.string_field(), "");
  EXPECT_EQ(obj.binary_field(), "");
  EXPECT_EQ(obj.enum_field(), terse_write::MyEnum::ME0);
  EXPECT_TRUE(obj.list_field()->empty());
  EXPECT_TRUE(obj.set_field()->empty());
  EXPECT_TRUE(obj.map_field()->empty());
  EXPECT_EQ(obj.struct_field(), terse_write::MyStruct());
}

template <typename ThriftStruct, typename Serializer>
void create_serialize_and_deserialize_test() {
  ThriftStruct obj;
  terse_write::MyStruct s;
  s.field1() = 1;

  obj.bool_field() = true;
  obj.byte_field() = 1;
  obj.short_field() = 2;
  obj.int_field() = 3;
  obj.long_field() = 4;
  obj.float_field() = 5;
  obj.double_field() = 6;
  obj.string_field() = "7";
  obj.binary_field() = "8";
  obj.enum_field() = terse_write::MyEnum::ME1;
  obj.list_field() = {1};
  obj.set_field() = {1};
  obj.map_field() = std::map<int32_t, int32_t>{{1, 1}};
  obj.struct_field() = s;

  EXPECT_EQ(obj.bool_field(), true);
  EXPECT_EQ(obj.byte_field(), 1);
  EXPECT_EQ(obj.short_field(), 2);
  EXPECT_EQ(obj.int_field(), 3);
  EXPECT_EQ(obj.long_field(), 4);
  EXPECT_EQ(obj.float_field(), 5);
  EXPECT_EQ(obj.double_field(), 6);
  EXPECT_EQ(obj.string_field(), "7");
  EXPECT_EQ(obj.binary_field(), "8");
  EXPECT_EQ(obj.enum_field(), terse_write::MyEnum::ME1);
  EXPECT_FALSE(obj.list_field()->empty());
  EXPECT_FALSE(obj.set_field()->empty());
  EXPECT_FALSE(obj.map_field()->empty());
  EXPECT_EQ(obj.struct_field(), s);

  auto objs = Serializer::template serialize<std::string>(obj);
  ThriftStruct objd;
  Serializer::deserialize(objs, objd);

  EXPECT_EQ(objd.bool_field(), true);
  EXPECT_EQ(objd.byte_field(), 1);
  EXPECT_EQ(objd.short_field(), 2);
  EXPECT_EQ(objd.int_field(), 3);
  EXPECT_EQ(objd.long_field(), 4);
  EXPECT_EQ(objd.float_field(), 5);
  EXPECT_EQ(objd.double_field(), 6);
  EXPECT_EQ(objd.string_field(), "7");
  EXPECT_EQ(objd.binary_field(), "8");
  EXPECT_EQ(objd.enum_field(), terse_write::MyEnum::ME1);
  EXPECT_FALSE(objd.list_field()->empty());
  EXPECT_FALSE(objd.set_field()->empty());
  EXPECT_FALSE(objd.map_field()->empty());
  EXPECT_EQ(objd.struct_field(), s);
}

TYPED_TEST_P(TerseWriteTests, serialize_and_deserialize) {
  create_serialize_and_deserialize_test<TypeParam, BinarySerializer>();
  create_serialize_and_deserialize_test<TypeParam, CompactSerializer>();
  create_serialize_and_deserialize_test<TypeParam, JSONSerializer>();
  create_serialize_and_deserialize_test<TypeParam, SimpleJSONSerializer>();
}

template <typename ThriftStruct, typename Serializer>
void create_serialize_empty_test() {
  ThriftStruct obj;
  terse_write::EmptyStruct empty;
  terse_write::MyStruct s;
  s.field1() = 1;

  obj.bool_field() = 1;
  obj.byte_field() = 2;
  obj.short_field() = 3;
  obj.int_field() = 3;
  obj.long_field() = 4;
  obj.float_field() = 5;
  obj.double_field() = 6;
  obj.string_field() = "7";
  obj.binary_field() = "8";
  obj.enum_field() = terse_write::MyEnum::ME1;
  obj.list_field() = {1};
  obj.set_field() = {1};
  obj.map_field() = std::map<int32_t, int32_t>{{1, 1}};
  obj.struct_field() = s;

  auto emptys = Serializer::template serialize<std::string>(empty);
  auto objs = Serializer::template serialize<std::string>(obj);

  EXPECT_NE(emptys, objs);

  // Manually assign to intrinsic default.
  obj.bool_field() = false;
  obj.byte_field() = 0;
  obj.short_field() = 0;
  obj.int_field() = 0;
  obj.long_field() = 0;
  obj.float_field() = 0.0;
  obj.double_field() = 0.0;
  obj.string_field() = "";
  obj.binary_field() = "";
  obj.enum_field() = terse_write::MyEnum::ME0;
  obj.list_field()->clear();
  obj.set_field()->clear();
  obj.map_field()->clear();
  obj.struct_field()->field1() = 0;

  objs = Serializer::template serialize<std::string>(obj);

  // A terse-write field will skip serialization that if it is equal to the
  // intrinsic default, so since all fields in obj are set to the intrinsic
  // default the serialization should equal to the empty.
  EXPECT_EQ(emptys, objs);
}

TYPED_TEST_P(TerseWriteTests, serialize_empty) {
  create_serialize_empty_test<TypeParam, BinarySerializer>();
  create_serialize_empty_test<TypeParam, CompactSerializer>();
  create_serialize_empty_test<TypeParam, JSONSerializer>();
  create_serialize_empty_test<TypeParam, SimpleJSONSerializer>();
}

TYPED_TEST_P(TerseWriteTests, empty) {
  TypeParam obj;

  EXPECT_TRUE(apache::thrift::empty(obj));

  terse_write::MyStruct s;
  s.field1() = 1;
  obj.bool_field() = 1;
  obj.byte_field() = 2;
  obj.short_field() = 3;
  obj.int_field() = 3;
  obj.long_field() = 4;
  obj.float_field() = 5;
  obj.double_field() = 6;
  obj.string_field() = "7";
  obj.binary_field() = "8";
  obj.enum_field() = terse_write::MyEnum::ME1;
  obj.list_field() = {1};
  obj.set_field() = {1};
  obj.map_field() = std::map<int32_t, int32_t>{{1, 1}};
  obj.struct_field() = s;

  EXPECT_FALSE(apache::thrift::empty(obj));

  // Manually assign to intrinsic default.
  obj.bool_field() = false;
  obj.byte_field() = 0;
  obj.short_field() = 0;
  obj.int_field() = 0;
  obj.long_field() = 0;
  obj.float_field() = 0.0;
  obj.double_field() = 0.0;
  obj.string_field() = "";
  obj.binary_field() = "";
  obj.enum_field() = terse_write::MyEnum::ME0;
  obj.list_field()->clear();
  obj.set_field()->clear();
  obj.map_field()->clear();
  obj.struct_field()->field1() = 0;

  EXPECT_TRUE(apache::thrift::empty(obj));
}

REGISTER_TYPED_TEST_CASE_P(
    TerseWriteTests, assign, serialize_and_deserialize, serialize_empty, empty);

using TerseWriteStructs = ::testing::Types<
    terse_write::FieldLevelTerseStruct,
    terse_write::StructLevelTerseStruct,
    deprecated_terse_write::FieldLevelTerseStruct,
    deprecated_terse_write::StructLevelTerseStruct>;
INSTANTIATE_TYPED_TEST_CASE_P(
    TerseWriteTest, TerseWriteTests, TerseWriteStructs);

template <class T>
struct TerseWriteSerializerTests : ::testing::Test {};
TYPED_TEST_CASE_P(TerseWriteSerializerTests);

TYPED_TEST_P(TerseWriteSerializerTests, MixedFieldsStruct) {
  terse_write::MixedFieldsStruct obj;

  obj.terse_int_field() = 1;
  obj.def_int_field() = 2;
  obj.opt_int_field() = 3;

  auto objs = TypeParam::template serialize<std::string>(obj);
  terse_write::MixedFieldsStruct objd;
  TypeParam::template deserialize(objs, objd);

  EXPECT_EQ(obj, objd);
}

TYPED_TEST_P(TerseWriteSerializerTests, CppRefTerseStruct) {
  terse_write::CppRefTerseStruct obj;

  EXPECT_TRUE(apache::thrift::empty(obj));

  obj.unique_int_field_ref() = std::make_unique<int32_t>(1);
  obj.shared_int_field_ref() = std::make_unique<int32_t>(2);
  obj.shared_const_int_field_ref() = std::make_unique<int32_t>(3);

  auto objs = TypeParam::template serialize<std::string>(obj);
  terse_write::CppRefTerseStruct objd;
  TypeParam::template deserialize(objs, objd);

  EXPECT_EQ(obj, objd);
}

TYPED_TEST_P(TerseWriteSerializerTests, CppRefTerseStruct_Empty) {
  terse_write::CppRefTerseStruct obj;
  terse_write::EmptyStruct empty;

  EXPECT_TRUE(apache::thrift::empty(obj));

  obj.unique_int_field_ref() = std::make_unique<int32_t>(1);
  obj.shared_int_field_ref() = std::make_unique<int32_t>(2);
  obj.shared_const_int_field_ref() = std::make_unique<int32_t>(3);

  EXPECT_FALSE(apache::thrift::empty(obj));

  obj.unique_int_field_ref() = std::make_unique<int32_t>(0);
  obj.shared_int_field_ref() = std::make_unique<int32_t>(0);
  obj.shared_const_int_field_ref() = std::make_unique<int32_t>(0);

  EXPECT_TRUE(apache::thrift::empty(obj));

  auto objs = TypeParam::template serialize<std::string>(obj);
  auto emptys = TypeParam::template serialize<std::string>(empty);

  EXPECT_EQ(objs, emptys);
}

REGISTER_TYPED_TEST_CASE_P(
    TerseWriteSerializerTests,
    MixedFieldsStruct,
    CppRefTerseStruct,
    CppRefTerseStruct_Empty);

using Serializers = ::testing::Types<
    BinarySerializer,
    CompactSerializer,
    JSONSerializer,
    SimpleJSONSerializer>;
INSTANTIATE_TYPED_TEST_CASE_P(
    TerseWriteTest, TerseWriteSerializerTests, Serializers);

} // namespace apache::thrift::test