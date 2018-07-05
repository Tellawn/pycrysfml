/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "job_info_type.h"

// Constructor:
job_info_type::job_info_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_job_info_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
job_info_type::~job_info_type() {
  __cppwrappers_MOD_deallocate1_job_info_type(data_ptr); // Deallocate Fortran derived type
}

void job_info_type::get_job_info_title(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[120+1];
  output_value_c__[120] = '\0';
  __cfml_python_MOD_get_job_info_title(data_ptr, output_value ? output_value_c__ : NULL, 120);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=120-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void job_info_type::set_job_info_title(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[120+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 120+1); new_value_c__[120+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<120+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_job_info_title(data_ptr, new_value ? new_value_c__ : NULL, 120);
}

int job_info_type::get_job_info_num_phases() {
  return __cfml_python_MOD_get_job_info_num_phases(data_ptr);
}

void job_info_type::set_job_info_num_phases(int new_value) {
  __cfml_python_MOD_set_job_info_num_phases(data_ptr, &new_value);
}

int job_info_type::get_job_info_num_patterns() {
  return __cfml_python_MOD_get_job_info_num_patterns(data_ptr);
}

void job_info_type::set_job_info_num_patterns(int new_value) {
  __cfml_python_MOD_set_job_info_num_patterns(data_ptr, &new_value);
}

int job_info_type::get_job_info_num_cmd() {
  return __cfml_python_MOD_get_job_info_num_cmd(data_ptr);
}

void job_info_type::set_job_info_num_cmd(int new_value) {
  __cfml_python_MOD_set_job_info_num_cmd(data_ptr, &new_value);
}

