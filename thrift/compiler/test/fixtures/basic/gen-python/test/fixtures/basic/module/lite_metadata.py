#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import apache.thrift.metadata.lite_types as _fbthrift_metadata


import facebook.thrift.annotation.hack.lite_metadata

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_MyStruct(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.MyStruct"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="MyIntField", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="MyStringField", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.MyDataItem")), name="MyDataField", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=4, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="module.MyEnum")), name="myEnum", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=5, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="oneway", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=6, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="readonly", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=7, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="idempotent", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE))), name="floatSet", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="hack.SkipCodegen"), fields= { "reason": _fbthrift_metadata.ThriftConstValue(cv_string="Invalid key type"),  }),
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="no_hack_codegen_field", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="hack.SkipCodegen"), fields= { "reason": _fbthrift_metadata.ThriftConstValue(cv_string="skip field codegen for deprecation"),  }),
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # MyIntField
     # MyStringField
    new_struct = _fbthrift_gen_metadata_struct_MyDataItem(new_struct) # MyDataField
    new_struct = _fbthrift_gen_metadata_enum_MyEnum(new_struct) # myEnum
     # oneway
     # readonly
     # idempotent
     # floatSet
     # no_hack_codegen_field

    return new_struct
def gen_metadata_struct_MyStruct() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_MyStruct(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_MyDataItem(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.MyDataItem"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)


    return new_struct
def gen_metadata_struct_MyDataItem() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_MyDataItem(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_MyUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.MyUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_enum=_fbthrift_metadata.ThriftEnumType(name="module.MyEnum")), name="myEnum", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.MyStruct")), name="myStruct", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.MyDataItem")), name="myDataItem", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=4, type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE))), name="floatSet", is_optional=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="hack.SkipCodegen"), fields= { "reason": _fbthrift_metadata.ThriftConstValue(cv_string="Invalid key type"),  }),
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)

    new_struct = _fbthrift_gen_metadata_enum_MyEnum(new_struct) # myEnum
    new_struct = _fbthrift_gen_metadata_struct_MyStruct(new_struct) # myStruct
    new_struct = _fbthrift_gen_metadata_struct_MyDataItem(new_struct) # myDataItem
     # floatSet

    return new_struct
def gen_metadata_struct_MyUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_MyUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))


def gen_metadata_service_MyService() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_service_MyService(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def _fbthrift_gen_metadata_service_MyService(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.MyService"

    if qualified_name in metadata_struct.services:
        return metadata_struct

    functions = [
        _fbthrift_metadata.ThriftFunction(name="ping", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="getRandomData", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), arguments=[
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="sink", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="sink", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="putDataById", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="id", is_optional=False, structured_annotations=[
            ]),
            _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="data", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="hasDataById", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="id", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="getDataById", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="id", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="deleteDataById", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="id", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="lobDataById", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="id", is_optional=False, structured_annotations=[
            ]),
            _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="data", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=True, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="invalid_return_for_hack", return_type=_fbthrift_metadata.ThriftType(t_set=_fbthrift_metadata.ThriftSetType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE))), arguments=[
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="hack.SkipCodegen"), fields= { "reason": _fbthrift_metadata.ThriftConstValue(cv_string="Invalid key type"),  }),
        ]),
        _fbthrift_metadata.ThriftFunction(name="rpc_skipped_codegen", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_VOID_TYPE), arguments=[
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="hack.SkipCodegen"), fields= { "reason": _fbthrift_metadata.ThriftConstValue(cv_string="Skip function deprecation"),  }),
        ]),
    ]

    service_dict = dict(metadata_struct.services)
    service_dict[qualified_name] = _fbthrift_metadata.ThriftService(name=qualified_name, functions=functions,  structured_annotations=[
    ])
    new_struct = metadata_struct(services=service_dict)



     # return value




     # return value


     # sink


     # return value


     # id
     # data


     # return value


     # id


     # return value


     # id


     # return value


     # id


     # return value


     # id
     # data


     # return value




     # return value




     # return value


    return new_struct

def gen_metadata_service_DbMixedStackArguments() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_service_DbMixedStackArguments(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def _fbthrift_gen_metadata_service_DbMixedStackArguments(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.DbMixedStackArguments"

    if qualified_name in metadata_struct.services:
        return metadata_struct

    functions = [
        _fbthrift_metadata.ThriftFunction(name="getDataByKey0", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="key", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="getDataByKey1", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="key", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
    ]

    service_dict = dict(metadata_struct.services)
    service_dict[qualified_name] = _fbthrift_metadata.ThriftService(name=qualified_name, functions=functions,  structured_annotations=[
    ])
    new_struct = metadata_struct(services=service_dict)

     # key


     # return value


     # key


     # return value


    return new_struct


def _fbthrift_gen_metadata_enum_MyEnum(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.MyEnum"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        0: "MyValue1",
        1: "MyValue2",
    }
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=[])
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_MyEnum() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_MyEnum(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_enum_MyEnum(meta)
    meta = _fbthrift_gen_metadata_struct_MyStruct(meta)
    meta = _fbthrift_gen_metadata_struct_MyDataItem(meta)
    meta = _fbthrift_gen_metadata_struct_MyUnion(meta)
    meta = _fbthrift_gen_metadata_service_MyService(meta)
    meta = _fbthrift_gen_metadata_service_DbMixedStackArguments(meta)
    return meta