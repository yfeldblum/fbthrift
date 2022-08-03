#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport test.fixtures.enums.module.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/module/types.h":
  pass


cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types.h" namespace "::test::fixtures::enums":
    cdef cppclass cMetasyntactic "::test::fixtures::enums::Metasyntactic":
        pass

    cdef cppclass cMyEnum1 "::test::fixtures::enums::MyEnum1":
        pass

    cdef cppclass cMyEnum2 "::test::fixtures::enums::MyEnum2":
        pass

    cdef cppclass cMyEnum3 "::test::fixtures::enums::MyEnum3":
        pass

    cdef cppclass cMyEnum4 "::test::fixtures::enums::MyEnum4":
        pass





cdef class Metasyntactic(thrift.py3.types.CompiledEnum):
    pass


cdef class MyEnum1(thrift.py3.types.CompiledEnum):
    pass


cdef class MyEnum2(thrift.py3.types.CompiledEnum):
    pass


cdef class MyEnum3(thrift.py3.types.CompiledEnum):
    pass


cdef class MyEnum4(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::test::fixtures::enums":

    cdef cppclass cSomeStruct "::test::fixtures::enums::SomeStruct":
        cSomeStruct() except +
        cSomeStruct(const cSomeStruct&) except +
        bint operator==(cSomeStruct&)
        bint operator!=(cSomeStruct&)
        bint operator<(cSomeStruct&)
        bint operator>(cSomeStruct&)
        bint operator<=(cSomeStruct&)
        bint operator>=(cSomeStruct&)
        __field_ref[cMetasyntactic] reasonable_ref "reasonable_ref" ()
        __field_ref[cMetasyntactic] fine_ref "fine_ref" ()
        __field_ref[cMetasyntactic] questionable_ref "questionable_ref" ()
        __field_ref[cset[cint32_t]] tags_ref "tags_ref" ()


    cdef cppclass cMyStruct "::test::fixtures::enums::MyStruct":
        cMyStruct() except +
        cMyStruct(const cMyStruct&) except +
        bint operator==(cMyStruct&)
        bint operator!=(cMyStruct&)
        bint operator<(cMyStruct&)
        bint operator>(cMyStruct&)
        bint operator<=(cMyStruct&)
        bint operator>=(cMyStruct&)
        __field_ref[cMyEnum2] me2_3_ref "me2_3_ref" ()
        __field_ref[cMyEnum3] me3_n3_ref "me3_n3_ref" ()
        __field_ref[cMyEnum1] me1_t1_ref "me1_t1_ref" ()
        __field_ref[cMyEnum1] me1_t2_ref "me1_t2_ref" ()




cdef class SomeStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cSomeStruct] _cpp_obj
    cdef _fbthrift_types_fields.__SomeStruct_FieldsSetter _fields_setter
    cdef inline object reasonable_impl(self)
    cdef inline object fine_impl(self)
    cdef inline object questionable_impl(self)
    cdef inline object tags_impl(self)
    cdef object __fbthrift_cached_reasonable
    cdef object __fbthrift_cached_fine
    cdef object __fbthrift_cached_questionable
    cdef Set__i32 __fbthrift_cached_tags

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cSomeStruct])



cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cMyStruct] _cpp_obj
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object me2_3_impl(self)
    cdef inline object me3_n3_impl(self)
    cdef inline object me1_t1_impl(self)
    cdef inline object me1_t2_impl(self)
    cdef object __fbthrift_cached_me2_3
    cdef object __fbthrift_cached_me3_n3
    cdef object __fbthrift_cached_me1_t1
    cdef object __fbthrift_cached_me1_t2

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct])


cdef class Set__i32(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint32_t]])
    @staticmethod
    cdef shared_ptr[cset[cint32_t]] _make_instance(object items) except *


