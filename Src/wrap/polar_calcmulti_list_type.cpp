/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "polar_calcmulti_list_type.h"

// Constructor:
polar_calcmulti_list_type::polar_calcmulti_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_polar_calcmulti_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
polar_calcmulti_list_type::~polar_calcmulti_list_type() {
  __cppwrappers_MOD_deallocate1_polar_calcmulti_list_type(data_ptr); // Deallocate Fortran derived type
}

