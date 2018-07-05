/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "group_k_type.h"

// Constructor:
group_k_type::group_k_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_group_k_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
group_k_type::~group_k_type() {
  __cppwrappers_MOD_deallocate1_group_k_type(data_ptr); // Deallocate Fortran derived type
}

void group_k_type::set_gk(space_group_type* spgk, const int* ext) {
  __cfml_propagation_vectors_MOD_set_gk(data_ptr, spgk->data_ptr, ext);
}

