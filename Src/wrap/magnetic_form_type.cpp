/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "magnetic_form_type.h"

// Constructor:
magnetic_form_type::magnetic_form_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_magnetic_form_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
magnetic_form_type::~magnetic_form_type() {
  __cppwrappers_MOD_deallocate1_magnetic_form_type(data_ptr); // Deallocate Fortran derived type
}

