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
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.types cimport bstring, move, field_ref as __FieldRef, optional_field_ref as __OptionalFieldRef
from folly.optional cimport cOptional
cdef extern from "src/gen-py3/module/types.h":
  pass


cdef extern from "src/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cAnimal "::cpp2::Animal":
        pass





cdef class Animal(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":
    cdef cppclass cColor__isset "::cpp2::Color::__isset":
        bint red
        bint green
        bint blue
        bint alpha

    cdef cppclass cColor "::cpp2::Color":
        cColor() except +
        cColor(const cColor&) except +
        bint operator==(cColor&)
        bint operator!=(cColor&)
        bint operator<(cColor&)
        bint operator>(cColor&)
        bint operator<=(cColor&)
        bint operator>=(cColor&)
        __FieldRef[double] red_ref()
        double red
        __FieldRef[double] green_ref()
        double green
        __FieldRef[double] blue_ref()
        double blue
        __FieldRef[double] alpha_ref()
        double alpha
        cColor__isset __isset

    cdef cppclass cVehicle__isset "::cpp2::Vehicle::__isset":
        bint color
        bint licensePlate
        bint description
        bint name
        bint hasAC

    cdef cppclass cVehicle "::cpp2::Vehicle":
        cVehicle() except +
        cVehicle(const cVehicle&) except +
        bint operator==(cVehicle&)
        bint operator!=(cVehicle&)
        bint operator<(cVehicle&)
        bint operator>(cVehicle&)
        bint operator<=(cVehicle&)
        bint operator>=(cVehicle&)
        __FieldRef[cColor] color_ref()
        cColor color
        __OptionalFieldRef[string] licensePlate_ref()
        string licensePlate
        __OptionalFieldRef[string] description_ref()
        string description
        __OptionalFieldRef[string] name_ref()
        string name
        __OptionalFieldRef[cbool] hasAC_ref()
        cbool hasAC
        cVehicle__isset __isset

    cdef cppclass cPerson__isset "::cpp2::Person::__isset":
        bint id
        bint name
        bint age
        bint address
        bint favoriteColor
        bint friends
        bint bestFriend
        bint petNames
        bint afraidOfAnimal
        bint vehicles

    cdef cppclass cPerson "::cpp2::Person":
        cPerson() except +
        cPerson(const cPerson&) except +
        bint operator==(cPerson&)
        bint operator!=(cPerson&)
        bint operator<(cPerson&)
        bint operator>(cPerson&)
        bint operator<=(cPerson&)
        bint operator>=(cPerson&)
        __FieldRef[cint64_t] id_ref()
        cint64_t id
        __FieldRef[string] name_ref()
        string name
        __OptionalFieldRef[cint16_t] age_ref()
        cint16_t age
        __OptionalFieldRef[string] address_ref()
        string address
        __OptionalFieldRef[cColor] favoriteColor_ref()
        cColor favoriteColor
        __OptionalFieldRef[cset[cint64_t]] friends_ref()
        cset[cint64_t] friends
        __OptionalFieldRef[cint64_t] bestFriend_ref()
        cint64_t bestFriend
        __OptionalFieldRef[cmap[cAnimal,string]] petNames_ref()
        cmap[cAnimal,string] petNames
        __OptionalFieldRef[cAnimal] afraidOfAnimal_ref()
        cAnimal afraidOfAnimal
        __OptionalFieldRef[vector[cVehicle]] vehicles_ref()
        vector[cVehicle] vehicles
        cPerson__isset __isset

    cdef shared_ptr[cColor] reference_shared_ptr_color "::thrift::py3::reference_shared_ptr<::cpp2::Color>"(shared_ptr[cVehicle]&, cColor&)
    cdef shared_ptr[cColor] reference_shared_ptr_favoriteColor "::thrift::py3::reference_shared_ptr<::cpp2::Color>"(shared_ptr[cPerson]&, cColor&)
    cdef shared_ptr[cset[cint64_t]] reference_shared_ptr_friends "::thrift::py3::reference_shared_ptr<std::set<int64_t>>"(shared_ptr[cPerson]&, cset[cint64_t]&)
    cdef shared_ptr[cmap[cAnimal,string]] reference_shared_ptr_petNames "::thrift::py3::reference_shared_ptr<std::map<::cpp2::Animal,std::string>>"(shared_ptr[cPerson]&, cmap[cAnimal,string]&)
    cdef shared_ptr[vector[cVehicle]] reference_shared_ptr_vehicles "::thrift::py3::reference_shared_ptr<std::vector<::cpp2::Vehicle>>"(shared_ptr[cPerson]&, vector[cVehicle]&)

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cColor] move(unique_ptr[cColor])
    cdef shared_ptr[cColor] move_shared "std::move"(shared_ptr[cColor])
    cdef unique_ptr[cColor] move_unique "std::move"(unique_ptr[cColor])
    cdef shared_ptr[cVehicle] move(unique_ptr[cVehicle])
    cdef shared_ptr[cVehicle] move_shared "std::move"(shared_ptr[cVehicle])
    cdef unique_ptr[cVehicle] move_unique "std::move"(unique_ptr[cVehicle])
    cdef shared_ptr[cPerson] move(unique_ptr[cPerson])
    cdef shared_ptr[cPerson] move_shared "std::move"(shared_ptr[cPerson])
    cdef unique_ptr[cPerson] move_unique "std::move"(unique_ptr[cPerson])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cColor] const_pointer_cast "std::const_pointer_cast<const ::cpp2::Color>"(shared_ptr[cColor])
    cdef shared_ptr[const cVehicle] const_pointer_cast "std::const_pointer_cast<const ::cpp2::Vehicle>"(shared_ptr[cVehicle])
    cdef shared_ptr[const cPerson] const_pointer_cast "std::const_pointer_cast<const ::cpp2::Person>"(shared_ptr[cPerson])



cdef class Color(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cColor] _cpp_obj

    @staticmethod
    cdef unique_ptr[cColor] _make_instance(
        cColor* base_instance,
        bint* __isNOTSET,
        object red,
        object green,
        object blue,
        object alpha
    ) except *

    @staticmethod
    cdef create(shared_ptr[cColor])



cdef class Vehicle(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cVehicle] _cpp_obj
    cdef Color __field_color

    @staticmethod
    cdef unique_ptr[cVehicle] _make_instance(
        cVehicle* base_instance,
        bint* __isNOTSET,
        Color color,
        str licensePlate,
        str description,
        str name,
        pbool hasAC
    ) except *

    @staticmethod
    cdef create(shared_ptr[cVehicle])



cdef class Person(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cPerson] _cpp_obj
    cdef Color __field_favoriteColor
    cdef Set__i64 __field_friends
    cdef Map__Animal_string __field_petNames
    cdef List__Vehicle __field_vehicles

    @staticmethod
    cdef unique_ptr[cPerson] _make_instance(
        cPerson* base_instance,
        bint* __isNOTSET,
        object id,
        str name,
        object age,
        str address,
        Color favoriteColor,
        object friends,
        object bestFriend,
        object petNames,
        Animal afraidOfAnimal,
        object vehicles
    ) except *

    @staticmethod
    cdef create(shared_ptr[cPerson])


cdef class Set__i64(thrift.py3.types.Container):
    cdef shared_ptr[cset[cint64_t]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cset[cint64_t]])
    @staticmethod
    cdef shared_ptr[cset[cint64_t]] _make_instance(object items) except *

cdef class Map__Animal_string(thrift.py3.types.Container):
    cdef shared_ptr[cmap[cAnimal,string]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[cmap[cAnimal,string]])
    @staticmethod
    cdef shared_ptr[cmap[cAnimal,string]] _make_instance(object items) except *

cdef class List__Vehicle(thrift.py3.types.Container):
    cdef shared_ptr[vector[cVehicle]] _cpp_obj
    @staticmethod
    cdef create(shared_ptr[vector[cVehicle]])
    @staticmethod
    cdef shared_ptr[vector[cVehicle]] _make_instance(object items) except *

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[vector[cVehicle]] move "std::move"(unique_ptr[vector[cVehicle]])
    cdef shared_ptr[vector[cVehicle]] move_shared "std::move"(shared_ptr[vector[cVehicle]])
    cdef shared_ptr[cmap[cAnimal,string]] move "std::move"(unique_ptr[cmap[cAnimal,string]])
    cdef shared_ptr[cmap[cAnimal,string]] move_shared "std::move"(shared_ptr[cmap[cAnimal,string]])
    cdef shared_ptr[cset[cint64_t]] move "std::move"(unique_ptr[cset[cint64_t]])
    cdef shared_ptr[cset[cint64_t]] move_shared "std::move"(shared_ptr[cset[cint64_t]])
cdef extern from "<utility>" nogil:
    pass  
    shared_ptr[cVehicle] reference_shared_ptr_List__Vehicle "::thrift::py3::reference_shared_ptr<::cpp2::Vehicle>"(...)
cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const vector[cVehicle]] const_pointer_cast "std::const_pointer_cast<const std::vector<::cpp2::Vehicle>>"(shared_ptr[vector[cVehicle]])
    cdef shared_ptr[const cmap[cAnimal,string]] const_pointer_cast "std::const_pointer_cast<const std::map<::cpp2::Animal,std::string>>"(shared_ptr[cmap[cAnimal,string]])
    cdef shared_ptr[const cset[cint64_t]] const_pointer_cast "std::const_pointer_cast<const std::set<int64_t>>"(shared_ptr[cset[cint64_t]])

