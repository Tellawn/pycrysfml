/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "scattering_species_type.h"

// Constructor:
scattering_species_type::scattering_species_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_scattering_species_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
scattering_species_type::~scattering_species_type() {
  __cppwrappers_MOD_deallocate1_scattering_species_type(data_ptr); // Deallocate Fortran derived type
}

