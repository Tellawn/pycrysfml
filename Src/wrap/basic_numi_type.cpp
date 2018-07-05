/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "basic_numi_type.h"

// Constructor:
basic_numi_type::basic_numi_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_basic_numi_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
basic_numi_type::~basic_numi_type() {
  __cppwrappers_MOD_deallocate1_basic_numi_type(data_ptr); // Deallocate Fortran derived type
}

