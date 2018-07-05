/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "powder_numor_type.h"

// Constructor:
powder_numor_type::powder_numor_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_powder_numor_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
powder_numor_type::~powder_numor_type() {
  __cppwrappers_MOD_deallocate1_powder_numor_type(data_ptr); // Deallocate Fortran derived type
}

int powder_numor_type::get_powder_numor_nbang() {
  return __cfml_python_MOD_get_powder_numor_nbang(data_ptr);
}

void powder_numor_type::set_powder_numor_nbang(int new_value) {
  __cfml_python_MOD_set_powder_numor_nbang(data_ptr, &new_value);
}

int powder_numor_type::get_powder_numor_manip() {
  return __cfml_python_MOD_get_powder_numor_manip(data_ptr);
}

void powder_numor_type::set_powder_numor_manip(int new_value) {
  __cfml_python_MOD_set_powder_numor_manip(data_ptr, &new_value);
}

int powder_numor_type::get_powder_numor_icalc() {
  return __cfml_python_MOD_get_powder_numor_icalc(data_ptr);
}

void powder_numor_type::set_powder_numor_icalc(int new_value) {
  __cfml_python_MOD_set_powder_numor_icalc(data_ptr, &new_value);
}

float powder_numor_type::get_powder_numor_monitor() {
  return __cfml_python_MOD_get_powder_numor_monitor(data_ptr);
}

void powder_numor_type::set_powder_numor_monitor(float new_value) {
  __cfml_python_MOD_set_powder_numor_monitor(data_ptr, &new_value);
}

int powder_numor_type::get_powder_numor_nbdata() {
  return __cfml_python_MOD_get_powder_numor_nbdata(data_ptr);
}

void powder_numor_type::set_powder_numor_nbdata(int new_value) {
  __cfml_python_MOD_set_powder_numor_nbdata(data_ptr, &new_value);
}

void powder_numor_type::get_powder_numor_title(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[32+1];
  output_value_c__[32] = '\0';
  __cfml_python_MOD_get_powder_numor_title(data_ptr, output_value ? output_value_c__ : NULL, 32);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=32-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void powder_numor_type::set_powder_numor_title(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[32+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 32+1); new_value_c__[32+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<32+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_powder_numor_title(data_ptr, new_value ? new_value_c__ : NULL, 32);
}

int powder_numor_type::get_powder_numor_numor() {
  return __cfml_python_MOD_get_powder_numor_numor(data_ptr);
}

void powder_numor_type::set_powder_numor_numor(int new_value) {
  __cfml_python_MOD_set_powder_numor_numor(data_ptr, &new_value);
}

void powder_numor_type::get_powder_numor_instrm(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[12+1];
  output_value_c__[12] = '\0';
  __cfml_python_MOD_get_powder_numor_instrm(data_ptr, output_value ? output_value_c__ : NULL, 12);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=12-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void powder_numor_type::set_powder_numor_instrm(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[12+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 12+1); new_value_c__[12+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<12+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_powder_numor_instrm(data_ptr, new_value ? new_value_c__ : NULL, 12);
}

float powder_numor_type::get_powder_numor_wave() {
  return __cfml_python_MOD_get_powder_numor_wave(data_ptr);
}

void powder_numor_type::set_powder_numor_wave(float new_value) {
  __cfml_python_MOD_set_powder_numor_wave(data_ptr, &new_value);
}

void powder_numor_type::get_powder_numor_header(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[32+1];
  output_value_c__[32] = '\0';
  __cfml_python_MOD_get_powder_numor_header(data_ptr, output_value ? output_value_c__ : NULL, 32);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=32-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void powder_numor_type::set_powder_numor_header(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[32+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 32+1); new_value_c__[32+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<32+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_powder_numor_header(data_ptr, new_value ? new_value_c__ : NULL, 32);
}

void powder_numor_type::get_powder_numor_scantype(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[8+1];
  output_value_c__[8] = '\0';
  __cfml_python_MOD_get_powder_numor_scantype(data_ptr, output_value ? output_value_c__ : NULL, 8);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=8-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void powder_numor_type::set_powder_numor_scantype(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[8+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 8+1); new_value_c__[8+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<8+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_powder_numor_scantype(data_ptr, new_value ? new_value_c__ : NULL, 8);
}

void powder_numor_type::get_powder_numor_icdesc(std::vector<int>* output_value) {
  __cfml_python_MOD_get_powder_numor_icdesc(data_ptr, &(*output_value)[0]);
}

void powder_numor_type::set_powder_numor_icdesc(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_powder_numor_icdesc(data_ptr, &(*new_value)[0]);
}

void powder_numor_type::get_powder_numor_angles(std::vector<float>* output_value) {
  __cfml_python_MOD_get_powder_numor_angles(data_ptr, &(*output_value)[0]);
}

void powder_numor_type::set_powder_numor_angles(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_powder_numor_angles(data_ptr, &(*new_value)[0]);
}

float powder_numor_type::get_powder_numor_time() {
  return __cfml_python_MOD_get_powder_numor_time(data_ptr);
}

void powder_numor_type::set_powder_numor_time(float new_value) {
  __cfml_python_MOD_set_powder_numor_time(data_ptr, &new_value);
}

int powder_numor_type::get_powder_numor_nframes() {
  return __cfml_python_MOD_get_powder_numor_nframes(data_ptr);
}

void powder_numor_type::set_powder_numor_nframes(int new_value) {
  __cfml_python_MOD_set_powder_numor_nframes(data_ptr, &new_value);
}

void powder_numor_type::get_powder_numor_conditions(std::vector<float>* output_value) {
  __cfml_python_MOD_get_powder_numor_conditions(data_ptr, &(*output_value)[0]);
}

void powder_numor_type::set_powder_numor_conditions(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_powder_numor_conditions(data_ptr, &(*new_value)[0]);
}

void powder_numor_type::get_powder_numor_scans(std::vector<float>* output_value) {
  __cfml_python_MOD_get_powder_numor_scans(data_ptr, &(*output_value)[0]);
}

void powder_numor_type::set_powder_numor_scans(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_powder_numor_scans(data_ptr, &(*new_value)[0]);
}

