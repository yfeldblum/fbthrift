/**
 * Autogenerated by Thrift for src/include1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include1_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {



const std::size_t TStructDataStorage<::some::ns::IncludedA>::fields_size;
const std::array<folly::StringPiece, TStructDataStorage<::some::ns::IncludedA>::fields_size> TStructDataStorage<::some::ns::IncludedA>::fields_names = {{
  "i32Field",
  "strField",
}};
const std::array<int16_t, TStructDataStorage<::some::ns::IncludedA>::fields_size> TStructDataStorage<::some::ns::IncludedA>::fields_ids = {{
  1,
  2,
}};
const std::array<apache::thrift::protocol::TType, TStructDataStorage<::some::ns::IncludedA>::fields_size> TStructDataStorage<::some::ns::IncludedA>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};

} // namespace thrift
} // namespace apache
