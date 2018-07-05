/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "angle_restraint_type.h"

// Constructor:
angle_restraint_type::angle_restraint_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_angle_restraint_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
angle_restraint_type::~angle_restraint_type() {
  __cppwrappers_MOD_deallocate1_angle_restraint_type(data_ptr); // Deallocate Fortran derived type
}

