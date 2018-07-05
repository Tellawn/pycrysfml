/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "points_interval_type.h"

// Constructor:
points_interval_type::points_interval_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_points_interval_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
points_interval_type::~points_interval_type() {
  __cppwrappers_MOD_deallocate1_points_interval_type(data_ptr); // Deallocate Fortran derived type
}

