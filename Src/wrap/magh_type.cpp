/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "magh_type.h"

// Constructor:
magh_type::magh_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_magh_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
magh_type::~magh_type() {
  __cppwrappers_MOD_deallocate1_magh_type(data_ptr); // Deallocate Fortran derived type
}

void magh_type::get_msf(std::vector<float>* output) {
  __cfml_python_MOD_get_msf(data_ptr, &(*output)[0]);
}

void magh_type::set_msf(const std::vector<float>* value) {
  __cfml_python_MOD_set_msf(data_ptr, &(*value)[0]);
}

void magh_type::get_miv(std::vector<float>* output) {
  __cfml_python_MOD_get_miv(data_ptr, &(*output)[0]);
}

void magh_type::set_miv(const std::vector<float>* value) {
  __cfml_python_MOD_set_miv(data_ptr, &(*value)[0]);
}

int magh_type::get_magh_num_k() {
  return __cfml_python_MOD_get_magh_num_k(data_ptr);
}

void magh_type::set_magh_num_k(int new_value) {
  __cfml_python_MOD_set_magh_num_k(data_ptr, &new_value);
}

void magh_type::get_magh_h(std::vector<float>* output_value) {
  __cfml_python_MOD_get_magh_h(data_ptr, &(*output_value)[0]);
}

void magh_type::set_magh_h(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_magh_h(data_ptr, &(*new_value)[0]);
}

float magh_type::get_magh_sqmiv() {
  return __cfml_python_MOD_get_magh_sqmiv(data_ptr);
}

void magh_type::set_magh_sqmiv(float new_value) {
  __cfml_python_MOD_set_magh_sqmiv(data_ptr, &new_value);
}

float magh_type::get_magh_s() {
  return __cfml_python_MOD_get_magh_s(data_ptr);
}

void magh_type::set_magh_s(float new_value) {
  __cfml_python_MOD_set_magh_s(data_ptr, &new_value);
}

float magh_type::get_magh_signp() {
  return __cfml_python_MOD_get_magh_signp(data_ptr);
}

void magh_type::set_magh_signp(float new_value) {
  __cfml_python_MOD_set_magh_signp(data_ptr, &new_value);
}

int magh_type::get_magh_keqv_minus() {
  return __cfml_python_MOD_get_magh_keqv_minus(data_ptr);
}

void magh_type::set_magh_keqv_minus(int new_value) {
  __cfml_python_MOD_set_magh_keqv_minus(data_ptr, &new_value);
}

int magh_type::get_magh_mult() {
  return __cfml_python_MOD_get_magh_mult(data_ptr);
}

void magh_type::set_magh_mult(int new_value) {
  __cfml_python_MOD_set_magh_mult(data_ptr, &new_value);
}

