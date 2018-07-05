/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "maghd_list_type.h"

// Constructor:
maghd_list_type::maghd_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_maghd_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
maghd_list_type::~maghd_list_type() {
  __cppwrappers_MOD_deallocate1_maghd_list_type(data_ptr); // Deallocate Fortran derived type
}

void maghd_list_type::get_maghd_list_element(maghd_type* elem, int* ind) {
  __cfml_python_MOD_get_maghd_list_element(data_ptr, elem->data_ptr, ind);
}

void maghd_list_type::set_maghd_list_element(maghd_type* elem, int* ind) {
  __cfml_python_MOD_set_maghd_list_element(data_ptr, elem->data_ptr, ind);
}

int maghd_list_type::get_maghd_list_nref() {
  return __cfml_python_MOD_get_maghd_list_nref(data_ptr);
}

void maghd_list_type::set_maghd_list_nref(int new_value) {
  __cfml_python_MOD_set_maghd_list_nref(data_ptr, &new_value);
}

