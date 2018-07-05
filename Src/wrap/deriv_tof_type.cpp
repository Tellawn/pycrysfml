/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "deriv_tof_type.h"

// Constructor:
deriv_tof_type::deriv_tof_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_deriv_tof_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
deriv_tof_type::~deriv_tof_type() {
  __cppwrappers_MOD_deallocate1_deriv_tof_type(data_ptr); // Deallocate Fortran derived type
}

