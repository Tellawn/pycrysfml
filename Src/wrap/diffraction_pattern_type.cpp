/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "diffraction_pattern_type.h"

// Constructor:
diffraction_pattern_type::diffraction_pattern_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_diffraction_pattern_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
diffraction_pattern_type::~diffraction_pattern_type() {
  __cppwrappers_MOD_deallocate1_diffraction_pattern_type(data_ptr); // Deallocate Fortran derived type
}

float diffraction_pattern_type::get_diffraction_pattern_scal() {
  return __cfml_python_MOD_get_diffraction_pattern_scal(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_scal(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_scal(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_conv(std::vector<float>* output_value) {
  __cfml_python_MOD_get_diffraction_pattern_conv(data_ptr, &(*output_value)[0]);
}

void diffraction_pattern_type::set_diffraction_pattern_conv(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_diffraction_pattern_conv(data_ptr, &(*new_value)[0]);
}

void diffraction_pattern_type::get_diffraction_pattern_instr(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_instr(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_instr(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_instr(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

void diffraction_pattern_type::get_diffraction_pattern_yax_text(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[30+1];
  output_value_c__[30] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_yax_text(data_ptr, output_value ? output_value_c__ : NULL, 30);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=30-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_yax_text(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[30+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 30+1); new_value_c__[30+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<30+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_yax_text(data_ptr, new_value ? new_value_c__ : NULL, 30);
}

void diffraction_pattern_type::get_diffraction_pattern_diff_kind(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_diff_kind(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_diff_kind(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_diff_kind(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

float diffraction_pattern_type::get_diffraction_pattern_xmin() {
  return __cfml_python_MOD_get_diffraction_pattern_xmin(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_xmin(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_xmin(data_ptr, &new_value);
}

float diffraction_pattern_type::get_diffraction_pattern_norm_mon() {
  return __cfml_python_MOD_get_diffraction_pattern_norm_mon(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_norm_mon(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_norm_mon(data_ptr, &new_value);
}

float diffraction_pattern_type::get_diffraction_pattern_ymin() {
  return __cfml_python_MOD_get_diffraction_pattern_ymin(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_ymin(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_ymin(data_ptr, &new_value);
}

float diffraction_pattern_type::get_diffraction_pattern_monitor() {
  return __cfml_python_MOD_get_diffraction_pattern_monitor(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_monitor(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_monitor(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_filepath(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[512+1];
  output_value_c__[512] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_filepath(data_ptr, output_value ? output_value_c__ : NULL, 512);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=512-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_filepath(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[512+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 512+1); new_value_c__[512+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<512+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_filepath(data_ptr, new_value ? new_value_c__ : NULL, 512);
}

void diffraction_pattern_type::get_diffraction_pattern_title(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[180+1];
  output_value_c__[180] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_title(data_ptr, output_value ? output_value_c__ : NULL, 180);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=180-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_title(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[180+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 180+1); new_value_c__[180+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<180+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_title(data_ptr, new_value ? new_value_c__ : NULL, 180);
}

void diffraction_pattern_type::get_diffraction_pattern_filename(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[512+1];
  output_value_c__[512] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_filename(data_ptr, output_value ? output_value_c__ : NULL, 512);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=512-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_filename(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[512+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 512+1); new_value_c__[512+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<512+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_filename(data_ptr, new_value ? new_value_c__ : NULL, 512);
}

void diffraction_pattern_type::get_diffraction_pattern_scat_var(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_scat_var(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_scat_var(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_scat_var(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

float diffraction_pattern_type::get_diffraction_pattern_step() {
  return __cfml_python_MOD_get_diffraction_pattern_step(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_step(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_step(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_x(std::vector<float>* output_value) {
  __cfml_python_MOD_get_diffraction_pattern_x(data_ptr, &(*output_value)[0]);
}

void diffraction_pattern_type::set_diffraction_pattern_x(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_diffraction_pattern_x(data_ptr, &(*new_value)[0]);
}

int diffraction_pattern_type::get_diffraction_pattern_ct_step() {
  return __cfml_python_MOD_get_diffraction_pattern_ct_step(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_ct_step(int new_value) {
  __cfml_python_MOD_set_diffraction_pattern_ct_step(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_xax_text(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[30+1];
  output_value_c__[30] = '\0';
  __cfml_python_MOD_get_diffraction_pattern_xax_text(data_ptr, output_value ? output_value_c__ : NULL, 30);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=30-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void diffraction_pattern_type::set_diffraction_pattern_xax_text(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[30+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 30+1); new_value_c__[30+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<30+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_diffraction_pattern_xax_text(data_ptr, new_value ? new_value_c__ : NULL, 30);
}

float diffraction_pattern_type::get_diffraction_pattern_ymax() {
  return __cfml_python_MOD_get_diffraction_pattern_ymax(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_ymax(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_ymax(data_ptr, &new_value);
}

float diffraction_pattern_type::get_diffraction_pattern_col_time() {
  return __cfml_python_MOD_get_diffraction_pattern_col_time(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_col_time(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_col_time(data_ptr, &new_value);
}

float diffraction_pattern_type::get_diffraction_pattern_tset() {
  return __cfml_python_MOD_get_diffraction_pattern_tset(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_tset(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_tset(data_ptr, &new_value);
}

float diffraction_pattern_type::get_diffraction_pattern_tsamp() {
  return __cfml_python_MOD_get_diffraction_pattern_tsamp(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_tsamp(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_tsamp(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_bgr(std::vector<float>* output_value) {
  __cfml_python_MOD_get_diffraction_pattern_bgr(data_ptr, &(*output_value)[0]);
}

void diffraction_pattern_type::set_diffraction_pattern_bgr(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_diffraction_pattern_bgr(data_ptr, &(*new_value)[0]);
}

float diffraction_pattern_type::get_diffraction_pattern_xmax() {
  return __cfml_python_MOD_get_diffraction_pattern_xmax(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_xmax(float new_value) {
  __cfml_python_MOD_set_diffraction_pattern_xmax(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_y(std::vector<float>* output_value) {
  __cfml_python_MOD_get_diffraction_pattern_y(data_ptr, &(*output_value)[0]);
}

void diffraction_pattern_type::set_diffraction_pattern_y(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_diffraction_pattern_y(data_ptr, &(*new_value)[0]);
}

int diffraction_pattern_type::get_diffraction_pattern_npts() {
  return __cfml_python_MOD_get_diffraction_pattern_npts(data_ptr);
}

void diffraction_pattern_type::set_diffraction_pattern_npts(int new_value) {
  __cfml_python_MOD_set_diffraction_pattern_npts(data_ptr, &new_value);
}

void diffraction_pattern_type::get_diffraction_pattern_sigma(std::vector<float>* output_value) {
  __cfml_python_MOD_get_diffraction_pattern_sigma(data_ptr, &(*output_value)[0]);
}

void diffraction_pattern_type::set_diffraction_pattern_sigma(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_diffraction_pattern_sigma(data_ptr, &(*new_value)[0]);
}

