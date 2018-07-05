/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "ill_data_record_type.h"

// Constructor:
ill_data_record_type::ill_data_record_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_ill_data_record_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
ill_data_record_type::~ill_data_record_type() {
  __cppwrappers_MOD_deallocate1_ill_data_record_type(data_ptr); // Deallocate Fortran derived type
}

