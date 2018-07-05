/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "bvs_par_type.h"

// Constructor:
bvs_par_type::bvs_par_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_bvs_par_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
bvs_par_type::~bvs_par_type() {
  __cppwrappers_MOD_deallocate1_bvs_par_type(data_ptr); // Deallocate Fortran derived type
}

