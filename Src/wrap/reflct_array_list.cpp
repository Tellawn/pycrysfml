/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "reflct_array_list.h"

// Constructor:
reflct_array_list::reflct_array_list() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_reflct_array_list(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
reflct_array_list::~reflct_array_list() {
  __cppwrappers_MOD_deallocate1_reflct_array_list(data_ptr); // Deallocate Fortran derived type
}

