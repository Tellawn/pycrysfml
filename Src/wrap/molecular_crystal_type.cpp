/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "molecular_crystal_type.h"

// Constructor:
molecular_crystal_type::molecular_crystal_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_molecular_crystal_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
molecular_crystal_type::~molecular_crystal_type() {
  __cppwrappers_MOD_deallocate1_molecular_crystal_type(data_ptr); // Deallocate Fortran derived type
}

