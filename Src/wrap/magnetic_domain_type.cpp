/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "magnetic_domain_type.h"

// Constructor:
magnetic_domain_type::magnetic_domain_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_magnetic_domain_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
magnetic_domain_type::~magnetic_domain_type() {
  __cppwrappers_MOD_deallocate1_magnetic_domain_type(data_ptr); // Deallocate Fortran derived type
}

int magnetic_domain_type::get_magnetic_domain_chir() {
  return __cfml_python_MOD_get_magnetic_domain_chir(data_ptr);
}

void magnetic_domain_type::set_magnetic_domain_chir(int new_value) {
  __cfml_python_MOD_set_magnetic_domain_chir(data_ptr, &new_value);
}

void magnetic_domain_type::get_magnetic_domain_pop_std(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_magnetic_domain_pop_std(data_ptr, output_value->data);
}

void magnetic_domain_type::set_magnetic_domain_pop_std(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_magnetic_domain_pop_std(data_ptr, new_value->data);
}

void magnetic_domain_type::get_magnetic_domain_mpop(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_magnetic_domain_mpop(data_ptr, output_value->data);
}

void magnetic_domain_type::set_magnetic_domain_mpop(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_magnetic_domain_mpop(data_ptr, new_value->data);
}

int magnetic_domain_type::get_magnetic_domain_nd() {
  return __cfml_python_MOD_get_magnetic_domain_nd(data_ptr);
}

void magnetic_domain_type::set_magnetic_domain_nd(int new_value) {
  __cfml_python_MOD_set_magnetic_domain_nd(data_ptr, &new_value);
}

void magnetic_domain_type::get_magnetic_domain_lpop(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_magnetic_domain_lpop(data_ptr, output_value->data);
}

void magnetic_domain_type::set_magnetic_domain_lpop(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_magnetic_domain_lpop(data_ptr, new_value->data);
}

void magnetic_domain_type::get_magnetic_domain_pop(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_magnetic_domain_pop(data_ptr, output_value->data);
}

void magnetic_domain_type::set_magnetic_domain_pop(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_magnetic_domain_pop(data_ptr, new_value->data);
}

int magnetic_domain_type::get_magnetic_domain_twin() {
  return __cfml_python_MOD_get_magnetic_domain_twin(data_ptr);
}

void magnetic_domain_type::set_magnetic_domain_twin(int new_value) {
  __cfml_python_MOD_set_magnetic_domain_twin(data_ptr, &new_value);
}

void magnetic_domain_type::get_magnetic_domain_dmat(int* output_value) {
  __cfml_python_MOD_get_magnetic_domain_dmat(data_ptr, output_value);
}

void magnetic_domain_type::set_magnetic_domain_dmat(const int* new_value) {
  __cfml_python_MOD_set_magnetic_domain_dmat(data_ptr, new_value);
}

void magnetic_domain_type::get_magnetic_domain_dt(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_magnetic_domain_dt(data_ptr, output_value->data);
}

void magnetic_domain_type::set_magnetic_domain_dt(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_magnetic_domain_dt(data_ptr, new_value->data);
}

int magnetic_domain_type::get_magnetic_domain_trans() {
  return __cfml_python_MOD_get_magnetic_domain_trans(data_ptr);
}

void magnetic_domain_type::set_magnetic_domain_trans(int new_value) {
  __cfml_python_MOD_set_magnetic_domain_trans(data_ptr, &new_value);
}

