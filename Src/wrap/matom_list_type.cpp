/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "matom_list_type.h"

// Constructor:
matom_list_type::matom_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_matom_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
matom_list_type::~matom_list_type() {
  __cppwrappers_MOD_deallocate1_matom_list_type(data_ptr); // Deallocate Fortran derived type
}

void matom_list_type::get_matom_list_element(matom_type* elem, int ind) {
  __cfml_python_MOD_get_matom_list_element(data_ptr, elem->data_ptr, &ind);
}

void matom_list_type::set_matom_list_element(matom_type* elem, int ind) {
  __cfml_python_MOD_set_matom_list_element(data_ptr, elem->data_ptr, &ind);
}

int matom_list_type::get_matom_list_natoms() {
  return __cfml_python_MOD_get_matom_list_natoms(data_ptr);
}

void matom_list_type::set_matom_list_natoms(int new_value) {
  __cfml_python_MOD_set_matom_list_natoms(data_ptr, &new_value);
}

