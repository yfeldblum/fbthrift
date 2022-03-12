#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder

import facebook.thrift.annotation.thrift.thrift.types as _facebook_thrift_annotation_thrift_thrift_types
import facebook.thrift.annotation.thrift.thrift.builders as _facebook_thrift_annotation_thrift_thrift_builders

import patch.types as _patch_types


class BoolPatch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[bool]
    invert: _typing.Optional[bool]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class BytePatch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[int]
    add: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class I16Patch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[int]
    add: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class I32Patch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[int]
    add: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class I64Patch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[int]
    add: _typing.Optional[int]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class FloatPatch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[float]
    add: _typing.Optional[float]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class DoublePatch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[float]
    add: _typing.Optional[float]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class StringPatch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[str]
    append: _typing.Optional[str]
    prepend: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class BinaryPatch_Builder(thrift.py3.builder.StructBuilder):
    assign: _typing.Optional[bytes]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


