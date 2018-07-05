/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "zone_axis_type.h"

// Constructor:
zone_axis_type::zone_axis_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_zone_axis_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
zone_axis_type::~zone_axis_type() {
  __cppwrappers_MOD_deallocate1_zone_axis_type(data_ptr); // Deallocate Fortran derived type
}

int zone_axis_type::get_zone_axis_nlayer() {
  return __cfml_python_MOD_get_zone_axis_nlayer(data_ptr);
}

void zone_axis_type::set_zone_axis_nlayer(int new_value) {
  __cfml_python_MOD_set_zone_axis_nlayer(data_ptr, &new_value);
}

void zone_axis_type::get_zone_axis_rx(std::vector<int>* output_value) {
  __cfml_python_MOD_get_zone_axis_rx(data_ptr, &(*output_value)[0]);
}

void zone_axis_type::set_zone_axis_rx(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_zone_axis_rx(data_ptr, &(*new_value)[0]);
}

void zone_axis_type::get_zone_axis_ry(std::vector<int>* output_value) {
  __cfml_python_MOD_get_zone_axis_ry(data_ptr, &(*output_value)[0]);
}

void zone_axis_type::set_zone_axis_ry(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_zone_axis_ry(data_ptr, &(*new_value)[0]);
}

void zone_axis_type::get_zone_axis_uvw(std::vector<int>* output_value) {
  __cfml_python_MOD_get_zone_axis_uvw(data_ptr, &(*output_value)[0]);
}

void zone_axis_type::set_zone_axis_uvw(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_zone_axis_uvw(data_ptr, &(*new_value)[0]);
}

