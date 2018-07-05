/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "reflect_type.h"

// Constructor:
reflect_type::reflect_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_reflect_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
reflect_type::~reflect_type() {
  __cppwrappers_MOD_deallocate1_reflect_type(data_ptr); // Deallocate Fortran derived type
}

void reflect_type::get_reflect_h(std::vector<int>* output_value) {
  __cfml_python_MOD_get_reflect_h(data_ptr, &(*output_value)[0]);
}

void reflect_type::set_reflect_h(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_reflect_h(data_ptr, &(*new_value)[0]);
}

float reflect_type::get_reflect_s() {
  return __cfml_python_MOD_get_reflect_s(data_ptr);
}

void reflect_type::set_reflect_s(float new_value) {
  __cfml_python_MOD_set_reflect_s(data_ptr, &new_value);
}

int reflect_type::get_reflect_mult() {
  return __cfml_python_MOD_get_reflect_mult(data_ptr);
}

void reflect_type::set_reflect_mult(int new_value) {
  __cfml_python_MOD_set_reflect_mult(data_ptr, &new_value);
}

