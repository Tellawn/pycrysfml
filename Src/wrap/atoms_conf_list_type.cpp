/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atoms_conf_list_type.h"

// Constructor:
atoms_conf_list_type::atoms_conf_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atoms_conf_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atoms_conf_list_type::~atoms_conf_list_type() {
  __cppwrappers_MOD_deallocate1_atoms_conf_list_type(data_ptr); // Deallocate Fortran derived type
}

void atoms_conf_list_type::set_table_bvel_params(const int* n_bvel, const int* soft) {
  __cfml_bvs_energy_calc_MOD_set_table_bvel_params(data_ptr, n_bvel, NULL, soft);
}

void atoms_conf_list_type::set_table_d0_b(const int* n_bvsm, const int* soft) {
  __cfml_bvs_energy_calc_MOD_set_table_d0_b(data_ptr, n_bvsm, NULL, soft);
}

