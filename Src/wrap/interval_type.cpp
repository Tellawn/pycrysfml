/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "interval_type.h"

// Constructor:
interval_type::interval_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_interval_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
interval_type::~interval_type() {
  __cppwrappers_MOD_deallocate1_interval_type(data_ptr); // Deallocate Fortran derived type
}

float interval_type::get_interval_maxb() {
  return __cfml_python_MOD_get_interval_maxb(data_ptr);
}

void interval_type::set_interval_maxb(float new_value) {
  __cfml_python_MOD_set_interval_maxb(data_ptr, &new_value);
}

float interval_type::get_interval_mina() {
  return __cfml_python_MOD_get_interval_mina(data_ptr);
}

void interval_type::set_interval_mina(float new_value) {
  __cfml_python_MOD_set_interval_mina(data_ptr, &new_value);
}

