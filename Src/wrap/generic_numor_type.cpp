/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "generic_numor_type.h"

// Constructor:
generic_numor_type::generic_numor_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_generic_numor_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
generic_numor_type::~generic_numor_type() {
  __cppwrappers_MOD_deallocate1_generic_numor_type(data_ptr); // Deallocate Fortran derived type
}

