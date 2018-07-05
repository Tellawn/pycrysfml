/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "diffractometer_type.h"

// Constructor:
diffractometer_type::diffractometer_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_diffractometer_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
diffractometer_type::~diffractometer_type() {
  __cppwrappers_MOD_deallocate1_diffractometer_type(data_ptr); // Deallocate Fortran derived type
}

