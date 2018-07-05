/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "psd_val_type.h"

// Constructor:
psd_val_type::psd_val_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_psd_val_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
psd_val_type::~psd_val_type() {
  __cppwrappers_MOD_deallocate1_psd_val_type(data_ptr); // Deallocate Fortran derived type
}

