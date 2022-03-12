#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport facebook.thrift.annotation.thrift.thrift.types as _facebook_thrift_annotation_thrift_thrift_types

cimport patch.types as _patch_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__BoolPatch():
    cdef _patch_types.BoolPatch defaults = _patch_types.BoolPatch._fbthrift_create(
        constant_shared_ptr[_patch_types.cBoolPatch](
            default_inst[_patch_types.cBoolPatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="BoolPatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::BoolPatchAdapter""",            """cpp.name""": """BoolPatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="invert",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__BytePatch():
    cdef _patch_types.BytePatch defaults = _patch_types.BytePatch._fbthrift_create(
        constant_shared_ptr[_patch_types.cBytePatch](
            default_inst[_patch_types.cBytePatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="BytePatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::NumberPatchAdapter""",            """cpp.name""": """BytePatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="add",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__I16Patch():
    cdef _patch_types.I16Patch defaults = _patch_types.I16Patch._fbthrift_create(
        constant_shared_ptr[_patch_types.cI16Patch](
            default_inst[_patch_types.cI16Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="I16Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::NumberPatchAdapter""",            """cpp.name""": """I16PatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=int,
            kind=__NumberType.I16,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="add",
            type=int,
            kind=__NumberType.I16,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__I32Patch():
    cdef _patch_types.I32Patch defaults = _patch_types.I32Patch._fbthrift_create(
        constant_shared_ptr[_patch_types.cI32Patch](
            default_inst[_patch_types.cI32Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="I32Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::NumberPatchAdapter""",            """cpp.name""": """I32PatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="add",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__I64Patch():
    cdef _patch_types.I64Patch defaults = _patch_types.I64Patch._fbthrift_create(
        constant_shared_ptr[_patch_types.cI64Patch](
            default_inst[_patch_types.cI64Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="I64Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::NumberPatchAdapter""",            """cpp.name""": """I64PatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="add",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__FloatPatch():
    cdef _patch_types.FloatPatch defaults = _patch_types.FloatPatch._fbthrift_create(
        constant_shared_ptr[_patch_types.cFloatPatch](
            default_inst[_patch_types.cFloatPatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FloatPatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::NumberPatchAdapter""",            """cpp.name""": """FloatPatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=float,
            kind=__NumberType.FLOAT,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="add",
            type=float,
            kind=__NumberType.FLOAT,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__DoublePatch():
    cdef _patch_types.DoublePatch defaults = _patch_types.DoublePatch._fbthrift_create(
        constant_shared_ptr[_patch_types.cDoublePatch](
            default_inst[_patch_types.cDoublePatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="DoublePatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::NumberPatchAdapter""",            """cpp.name""": """DoublePatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="add",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__StringPatch():
    cdef _patch_types.StringPatch defaults = _patch_types.StringPatch._fbthrift_create(
        constant_shared_ptr[_patch_types.cStringPatch](
            default_inst[_patch_types.cStringPatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="StringPatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::StringPatchAdapter""",            """cpp.name""": """StringPatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="append",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="prepend",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__BinaryPatch():
    cdef _patch_types.BinaryPatch defaults = _patch_types.BinaryPatch._fbthrift_create(
        constant_shared_ptr[_patch_types.cBinaryPatch](
            default_inst[_patch_types.cBinaryPatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="BinaryPatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::AssignPatchAdapter""",            """cpp.name""": """BinaryPatchStruct""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
