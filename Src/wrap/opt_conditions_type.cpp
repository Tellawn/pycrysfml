/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "opt_conditions_type.h"

// Constructor:
opt_conditions_type::opt_conditions_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_opt_conditions_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
opt_conditions_type::~opt_conditions_type() {
  __cppwrappers_MOD_deallocate1_opt_conditions_type(data_ptr); // Deallocate Fortran derived type
}

