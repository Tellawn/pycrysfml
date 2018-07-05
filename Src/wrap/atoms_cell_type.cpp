/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atoms_cell_type.h"

// Constructor:
atoms_cell_type::atoms_cell_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atoms_cell_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atoms_cell_type::~atoms_cell_type() {
  __cppwrappers_MOD_deallocate1_atoms_cell_type(data_ptr); // Deallocate Fortran derived type
}

int atoms_cell_type::get_atoms_cell_ndist() {
  return __cfml_python_MOD_get_atoms_cell_ndist(data_ptr);
}

void atoms_cell_type::set_atoms_cell_ndist(int new_value) {
  __cfml_python_MOD_set_atoms_cell_ndist(data_ptr, &new_value);
}

int atoms_cell_type::get_atoms_cell_nat() {
  return __cfml_python_MOD_get_atoms_cell_nat(data_ptr);
}

void atoms_cell_type::set_atoms_cell_nat(int new_value) {
  __cfml_python_MOD_set_atoms_cell_nat(data_ptr, &new_value);
}

