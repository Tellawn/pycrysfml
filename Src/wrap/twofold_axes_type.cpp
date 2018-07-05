/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "twofold_axes_type.h"

// Constructor:
twofold_axes_type::twofold_axes_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_twofold_axes_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
twofold_axes_type::~twofold_axes_type() {
  __cppwrappers_MOD_deallocate1_twofold_axes_type(data_ptr); // Deallocate Fortran derived type
}

