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
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.unordered_map cimport unordered_map as cumap
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.std_libcpp cimport string_view as __cstring_view
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    StructFieldsSetter as __StructFieldsSetter
)
from folly.optional cimport cOptional as __cOptional

cimport facebook.thrift.annotation.thrift.thrift.types as _facebook_thrift_annotation_thrift_thrift_types

cimport patch.types as _patch_types



ctypedef void (*__BoolPatch_FieldsSetterFunc)(__BoolPatch_FieldsSetter, object) except *

cdef class __BoolPatch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cBoolPatch* _struct_cpp_obj
    cdef cumap[__cstring_view, __BoolPatch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __BoolPatch_FieldsSetter _fbthrift_create(_patch_types.cBoolPatch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__BytePatch_FieldsSetterFunc)(__BytePatch_FieldsSetter, object) except *

cdef class __BytePatch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cBytePatch* _struct_cpp_obj
    cdef cumap[__cstring_view, __BytePatch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __BytePatch_FieldsSetter _fbthrift_create(_patch_types.cBytePatch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__I16Patch_FieldsSetterFunc)(__I16Patch_FieldsSetter, object) except *

cdef class __I16Patch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cI16Patch* _struct_cpp_obj
    cdef cumap[__cstring_view, __I16Patch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __I16Patch_FieldsSetter _fbthrift_create(_patch_types.cI16Patch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__I32Patch_FieldsSetterFunc)(__I32Patch_FieldsSetter, object) except *

cdef class __I32Patch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cI32Patch* _struct_cpp_obj
    cdef cumap[__cstring_view, __I32Patch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __I32Patch_FieldsSetter _fbthrift_create(_patch_types.cI32Patch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__I64Patch_FieldsSetterFunc)(__I64Patch_FieldsSetter, object) except *

cdef class __I64Patch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cI64Patch* _struct_cpp_obj
    cdef cumap[__cstring_view, __I64Patch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __I64Patch_FieldsSetter _fbthrift_create(_patch_types.cI64Patch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__FloatPatch_FieldsSetterFunc)(__FloatPatch_FieldsSetter, object) except *

cdef class __FloatPatch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cFloatPatch* _struct_cpp_obj
    cdef cumap[__cstring_view, __FloatPatch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __FloatPatch_FieldsSetter _fbthrift_create(_patch_types.cFloatPatch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__DoublePatch_FieldsSetterFunc)(__DoublePatch_FieldsSetter, object) except *

cdef class __DoublePatch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cDoublePatch* _struct_cpp_obj
    cdef cumap[__cstring_view, __DoublePatch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __DoublePatch_FieldsSetter _fbthrift_create(_patch_types.cDoublePatch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__StringPatch_FieldsSetterFunc)(__StringPatch_FieldsSetter, object) except *

cdef class __StringPatch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cStringPatch* _struct_cpp_obj
    cdef cumap[__cstring_view, __StringPatch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __StringPatch_FieldsSetter _fbthrift_create(_patch_types.cStringPatch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *


ctypedef void (*__BinaryPatch_FieldsSetterFunc)(__BinaryPatch_FieldsSetter, object) except *

cdef class __BinaryPatch_FieldsSetter(__StructFieldsSetter):
    cdef _patch_types.cBinaryPatch* _struct_cpp_obj
    cdef cumap[__cstring_view, __BinaryPatch_FieldsSetterFunc] _setters

    @staticmethod
    cdef __BinaryPatch_FieldsSetter _fbthrift_create(_patch_types.cBinaryPatch* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *

