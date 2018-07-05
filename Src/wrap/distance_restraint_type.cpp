/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "distance_restraint_type.h"

// Constructor:
distance_restraint_type::distance_restraint_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_distance_restraint_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
distance_restraint_type::~distance_restraint_type() {
  __cppwrappers_MOD_deallocate1_distance_restraint_type(data_ptr); // Deallocate Fortran derived type
}

