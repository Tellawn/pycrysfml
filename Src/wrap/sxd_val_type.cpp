/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "sxd_val_type.h"

// Constructor:
sxd_val_type::sxd_val_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_sxd_val_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
sxd_val_type::~sxd_val_type() {
  __cppwrappers_MOD_deallocate1_sxd_val_type(data_ptr); // Deallocate Fortran derived type
}

