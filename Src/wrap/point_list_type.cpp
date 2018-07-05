/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "point_list_type.h"

// Constructor:
point_list_type::point_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_point_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
point_list_type::~point_list_type() {
  __cppwrappers_MOD_deallocate1_point_list_type(data_ptr); // Deallocate Fortran derived type
}

