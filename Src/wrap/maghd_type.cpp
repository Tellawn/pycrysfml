/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "maghd_type.h"

// Constructor:
maghd_type::maghd_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_maghd_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
maghd_type::~maghd_type() {
  __cppwrappers_MOD_deallocate1_maghd_type(data_ptr); // Deallocate Fortran derived type
}

float maghd_type::get_maghd_sqamiv() {
  return __cfml_python_MOD_get_maghd_sqamiv(data_ptr);
}

void maghd_type::set_maghd_sqamiv(float new_value) {
  __cfml_python_MOD_set_maghd_sqamiv(data_ptr, &new_value);
}

int maghd_type::get_maghd_num_k() {
  return __cfml_python_MOD_get_maghd_num_k(data_ptr);
}

void maghd_type::set_maghd_num_k(int new_value) {
  __cfml_python_MOD_set_maghd_num_k(data_ptr, &new_value);
}

void maghd_type::get_maghd_h(std::vector<float>* output_value) {
  __cfml_python_MOD_get_maghd_h(data_ptr, &(*output_value)[0]);
}

void maghd_type::set_maghd_h(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_maghd_h(data_ptr, &(*new_value)[0]);
}

float maghd_type::get_maghd_sqmiv() {
  return __cfml_python_MOD_get_maghd_sqmiv(data_ptr);
}

void maghd_type::set_maghd_sqmiv(float new_value) {
  __cfml_python_MOD_set_maghd_sqmiv(data_ptr, &new_value);
}

float maghd_type::get_maghd_s() {
  return __cfml_python_MOD_get_maghd_s(data_ptr);
}

void maghd_type::set_maghd_s(float new_value) {
  __cfml_python_MOD_set_maghd_s(data_ptr, &new_value);
}

float maghd_type::get_maghd_signp() {
  return __cfml_python_MOD_get_maghd_signp(data_ptr);
}

void maghd_type::set_maghd_signp(float new_value) {
  __cfml_python_MOD_set_maghd_signp(data_ptr, &new_value);
}

int maghd_type::get_maghd_keqv_minus() {
  return __cfml_python_MOD_get_maghd_keqv_minus(data_ptr);
}

void maghd_type::set_maghd_keqv_minus(int new_value) {
  __cfml_python_MOD_set_maghd_keqv_minus(data_ptr, &new_value);
}

