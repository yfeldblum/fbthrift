#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport patch.types as _patch_types
cimport patch.builders as _patch_builders

cimport module.types as _module_types

cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool boolVal
    cdef public pint byteVal
    cdef public pint i16Val
    cdef public pint i32Val
    cdef public pint i64Val
    cdef public pfloat floatVal
    cdef public pfloat doubleVal
    cdef public str stringVal
    cdef public bytes binaryVal


cdef class MyStructPatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public object boolVal
    cdef public object byteVal
    cdef public object i16Val
    cdef public object i32Val
    cdef public object i64Val
    cdef public object floatVal
    cdef public object doubleVal
    cdef public object stringVal
    cdef public object binaryVal


cdef class MyStructValuePatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public object assign
    cdef public pbool clear
    cdef public object patch


