/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "msym_oper_type.h"

// Constructor:
msym_oper_type::msym_oper_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_msym_oper_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
msym_oper_type::~msym_oper_type() {
  __cppwrappers_MOD_deallocate1_msym_oper_type(data_ptr); // Deallocate Fortran derived type
}

float msym_oper_type::get_msym_oper_phas() {
  return __cfml_python_MOD_get_msym_oper_phas(data_ptr);
}

void msym_oper_type::set_msym_oper_phas(float new_value) {
  __cfml_python_MOD_set_msym_oper_phas(data_ptr, &new_value);
}

void msym_oper_type::get_msym_oper_rot(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_msym_oper_rot(data_ptr, output_value->data);
}

void msym_oper_type::set_msym_oper_rot(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_msym_oper_rot(data_ptr, new_value->data);
}

