#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class MyStructNestedAnnotation_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.MyStructNestedAnnotation

    def __iter__(self):
        yield "name", self.name

cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.MyStruct

    def __iter__(self):
        yield "major", self.major
        yield "package", self.package
        yield "annotation_with_quote", self.annotation_with_quote
        yield "class_", self.class_
        yield "annotation_with_trailing_comma", self.annotation_with_trailing_comma
        yield "empty_annotations", self.empty_annotations
        yield "my_enum", self.my_enum
        yield "cpp_type_annotation", self.cpp_type_annotation

cdef class SecretStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.SecretStruct

    def __iter__(self):
        yield "id", self.id
        yield "password", self.password

