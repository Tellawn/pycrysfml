/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "lattice_centring_type.h"

// Constructor:
lattice_centring_type::lattice_centring_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_lattice_centring_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
lattice_centring_type::~lattice_centring_type() {
  __cppwrappers_MOD_deallocate1_lattice_centring_type(data_ptr); // Deallocate Fortran derived type
}

