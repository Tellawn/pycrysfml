/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "torsion_restraint_type.h"

// Constructor:
torsion_restraint_type::torsion_restraint_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_torsion_restraint_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
torsion_restraint_type::~torsion_restraint_type() {
  __cppwrappers_MOD_deallocate1_torsion_restraint_type(data_ptr); // Deallocate Fortran derived type
}

