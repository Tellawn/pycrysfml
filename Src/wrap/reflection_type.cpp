/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "reflection_type.h"

// Constructor:
reflection_type::reflection_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_reflection_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
reflection_type::~reflection_type() {
  __cppwrappers_MOD_deallocate1_reflection_type(data_ptr); // Deallocate Fortran derived type
}

float reflection_type::get_reflection_a() {
  return __cfml_python_MOD_get_reflection_a(data_ptr);
}

void reflection_type::set_reflection_a(float new_value) {
  __cfml_python_MOD_set_reflection_a(data_ptr, &new_value);
}

float reflection_type::get_reflection_aa() {
  return __cfml_python_MOD_get_reflection_aa(data_ptr);
}

void reflection_type::set_reflection_aa(float new_value) {
  __cfml_python_MOD_set_reflection_aa(data_ptr, &new_value);
}

float reflection_type::get_reflection_b() {
  return __cfml_python_MOD_get_reflection_b(data_ptr);
}

void reflection_type::set_reflection_b(float new_value) {
  __cfml_python_MOD_set_reflection_b(data_ptr, &new_value);
}

float reflection_type::get_reflection_bb() {
  return __cfml_python_MOD_get_reflection_bb(data_ptr);
}

void reflection_type::set_reflection_bb(float new_value) {
  __cfml_python_MOD_set_reflection_bb(data_ptr, &new_value);
}

void reflection_type::get_reflection_h(std::vector<int>* output_value) {
  __cfml_python_MOD_get_reflection_h(data_ptr, &(*output_value)[0]);
}

void reflection_type::set_reflection_h(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_reflection_h(data_ptr, &(*new_value)[0]);
}

float reflection_type::get_reflection_sfo() {
  return __cfml_python_MOD_get_reflection_sfo(data_ptr);
}

void reflection_type::set_reflection_sfo(float new_value) {
  __cfml_python_MOD_set_reflection_sfo(data_ptr, &new_value);
}

float reflection_type::get_reflection_s() {
  return __cfml_python_MOD_get_reflection_s(data_ptr);
}

void reflection_type::set_reflection_s(float new_value) {
  __cfml_python_MOD_set_reflection_s(data_ptr, &new_value);
}

float reflection_type::get_reflection_fc() {
  return __cfml_python_MOD_get_reflection_fc(data_ptr);
}

void reflection_type::set_reflection_fc(float new_value) {
  __cfml_python_MOD_set_reflection_fc(data_ptr, &new_value);
}

float reflection_type::get_reflection_w() {
  return __cfml_python_MOD_get_reflection_w(data_ptr);
}

void reflection_type::set_reflection_w(float new_value) {
  __cfml_python_MOD_set_reflection_w(data_ptr, &new_value);
}

float reflection_type::get_reflection_phase() {
  return __cfml_python_MOD_get_reflection_phase(data_ptr);
}

void reflection_type::set_reflection_phase(float new_value) {
  __cfml_python_MOD_set_reflection_phase(data_ptr, &new_value);
}

int reflection_type::get_reflection_mult() {
  return __cfml_python_MOD_get_reflection_mult(data_ptr);
}

void reflection_type::set_reflection_mult(int new_value) {
  __cfml_python_MOD_set_reflection_mult(data_ptr, &new_value);
}

float reflection_type::get_reflection_fo() {
  return __cfml_python_MOD_get_reflection_fo(data_ptr);
}

void reflection_type::set_reflection_fo(float new_value) {
  __cfml_python_MOD_set_reflection_fo(data_ptr, &new_value);
}

