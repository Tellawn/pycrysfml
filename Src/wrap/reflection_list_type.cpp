/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "reflection_list_type.h"

// Constructor:
reflection_list_type::reflection_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_reflection_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
reflection_list_type::~reflection_list_type() {
  __cppwrappers_MOD_deallocate1_reflection_list_type(data_ptr); // Deallocate Fortran derived type
}

void reflection_list_type::get_reflection_list_element(reflection_type* elem, int ind) {
  __cfml_python_MOD_get_reflection_list_element(data_ptr, elem->data_ptr, &ind);
}

void reflection_list_type::set_reflection_list_element(reflection_type* elem, int* ind) {
  __cfml_python_MOD_set_reflection_list_element(data_ptr, elem->data_ptr, ind);
}

int reflection_list_type::get_reflection_list_nref() {
  return __cfml_python_MOD_get_reflection_list_nref(data_ptr);
}

void reflection_list_type::set_reflection_list_nref(int new_value) {
  __cfml_python_MOD_set_reflection_list_nref(data_ptr, &new_value);
}

