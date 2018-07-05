/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "nonatomic_parameter_type.h"

// Constructor:
nonatomic_parameter_type::nonatomic_parameter_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_nonatomic_parameter_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
nonatomic_parameter_type::~nonatomic_parameter_type() {
  __cppwrappers_MOD_deallocate1_nonatomic_parameter_type(data_ptr); // Deallocate Fortran derived type
}

