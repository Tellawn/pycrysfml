/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atom_equiv_list_type.h"

// Constructor:
atom_equiv_list_type::atom_equiv_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atom_equiv_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atom_equiv_list_type::~atom_equiv_list_type() {
  __cppwrappers_MOD_deallocate1_atom_equiv_list_type(data_ptr); // Deallocate Fortran derived type
}

void atom_equiv_list_type::get_atom_equiv_list_element(atom_equiv_type* elem, int* ind) {
  __cfml_python_MOD_get_atom_equiv_list_element(data_ptr, elem->data_ptr, ind);
}

void atom_equiv_list_type::set_atom_equiv_list_element(atom_equiv_type* elem, int* ind) {
  __cfml_python_MOD_set_atom_equiv_list_element(data_ptr, elem->data_ptr, ind);
}

int atom_equiv_list_type::get_atom_equiv_list_nauas() {
  return __cfml_python_MOD_get_atom_equiv_list_nauas(data_ptr);
}

void atom_equiv_list_type::set_atom_equiv_list_nauas(int new_value) {
  __cfml_python_MOD_set_atom_equiv_list_nauas(data_ptr, &new_value);
}

