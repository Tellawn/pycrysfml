/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "magnetic_group_type.h"

// Constructor:
magnetic_group_type::magnetic_group_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_magnetic_group_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
magnetic_group_type::~magnetic_group_type() {
  __cppwrappers_MOD_deallocate1_magnetic_group_type(data_ptr); // Deallocate Fortran derived type
}

void magnetic_group_type::get_magnetic_group_tinv(std::vector<int>* output_value) {
  __cfml_python_MOD_get_magnetic_group_tinv(data_ptr, &(*output_value)[0]);
}

void magnetic_group_type::set_magnetic_group_tinv(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_magnetic_group_tinv(data_ptr, &(*new_value)[0]);
}

void magnetic_group_type::get_magnetic_group_shubnikov(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[30+1];
  output_value_c__[30] = '\0';
  __cfml_python_MOD_get_magnetic_group_shubnikov(data_ptr, output_value ? output_value_c__ : NULL, 30);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=30-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_group_type::set_magnetic_group_shubnikov(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[30+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 30+1); new_value_c__[30+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<30+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_group_shubnikov(data_ptr, new_value ? new_value_c__ : NULL, 30);
}

void magnetic_group_type::get_magnetic_group_spg(space_group_type* output_value) {
  __cfml_python_MOD_get_magnetic_group_spg(data_ptr, output_value->data_ptr);
}

void magnetic_group_type::set_magnetic_group_spg(space_group_type* new_value) {
  __cfml_python_MOD_set_magnetic_group_spg(data_ptr, new_value->data_ptr);
}

