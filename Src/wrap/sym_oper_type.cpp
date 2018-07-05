/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "sym_oper_type.h"

// Constructor:
sym_oper_type::sym_oper_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_sym_oper_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
sym_oper_type::~sym_oper_type() {
  __cppwrappers_MOD_deallocate1_sym_oper_type(data_ptr); // Deallocate Fortran derived type
}

void sym_oper_type::get_sym_oper_tr(std::vector<float>* output_value) {
  __cfml_python_MOD_get_sym_oper_tr(data_ptr, &(*output_value)[0]);
}

void sym_oper_type::set_sym_oper_tr(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_sym_oper_tr(data_ptr, &(*new_value)[0]);
}

void sym_oper_type::get_sym_oper_rot(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_sym_oper_rot(data_ptr, output_value->data);
}

void sym_oper_type::set_sym_oper_rot(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_sym_oper_rot(data_ptr, new_value->data);
}

