/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atomic_properties_type.h"

// Constructor:
atomic_properties_type::atomic_properties_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atomic_properties_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atomic_properties_type::~atomic_properties_type() {
  __cppwrappers_MOD_deallocate1_atomic_properties_type(data_ptr); // Deallocate Fortran derived type
}

