/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "anomalous_sc_type.h"

// Constructor:
anomalous_sc_type::anomalous_sc_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_anomalous_sc_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
anomalous_sc_type::~anomalous_sc_type() {
  __cppwrappers_MOD_deallocate1_anomalous_sc_type(data_ptr); // Deallocate Fortran derived type
}

