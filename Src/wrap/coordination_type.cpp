/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "coordination_type.h"

// Constructor:
coordination_type::coordination_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_coordination_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
coordination_type::~coordination_type() {
  __cppwrappers_MOD_deallocate1_coordination_type(data_ptr); // Deallocate Fortran derived type
}

