/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "xray_form_type.h"

// Constructor:
xray_form_type::xray_form_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_xray_form_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
xray_form_type::~xray_form_type() {
  __cppwrappers_MOD_deallocate1_xray_form_type(data_ptr); // Deallocate Fortran derived type
}

