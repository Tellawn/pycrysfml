/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "wyck_info_type.h"

// Constructor:
wyck_info_type::wyck_info_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_wyck_info_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
wyck_info_type::~wyck_info_type() {
  __cppwrappers_MOD_deallocate1_wyck_info_type(data_ptr); // Deallocate Fortran derived type
}

