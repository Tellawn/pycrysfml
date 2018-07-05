/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "wyck_pos_type.h"

// Constructor:
wyck_pos_type::wyck_pos_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_wyck_pos_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
wyck_pos_type::~wyck_pos_type() {
  __cppwrappers_MOD_deallocate1_wyck_pos_type(data_ptr); // Deallocate Fortran derived type
}

int wyck_pos_type::get_wyck_pos_norb() {
  return __cfml_python_MOD_get_wyck_pos_norb(data_ptr);
}

void wyck_pos_type::set_wyck_pos_norb(int new_value) {
  __cfml_python_MOD_set_wyck_pos_norb(data_ptr, &new_value);
}

void wyck_pos_type::get_wyck_pos_str_orig(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[40+1];
  output_value_c__[40] = '\0';
  __cfml_python_MOD_get_wyck_pos_str_orig(data_ptr, output_value ? output_value_c__ : NULL, 40);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=40-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void wyck_pos_type::set_wyck_pos_str_orig(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[40+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 40+1); new_value_c__[40+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<40+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_wyck_pos_str_orig(data_ptr, new_value ? new_value_c__ : NULL, 40);
}

int wyck_pos_type::get_wyck_pos_multp() {
  return __cfml_python_MOD_get_wyck_pos_multp(data_ptr);
}

void wyck_pos_type::set_wyck_pos_multp(int new_value) {
  __cfml_python_MOD_set_wyck_pos_multp(data_ptr, &new_value);
}

void wyck_pos_type::get_wyck_pos_site(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[6+1];
  output_value_c__[6] = '\0';
  __cfml_python_MOD_get_wyck_pos_site(data_ptr, output_value ? output_value_c__ : NULL, 6);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=6-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void wyck_pos_type::set_wyck_pos_site(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[6+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 6+1); new_value_c__[6+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<6+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_wyck_pos_site(data_ptr, new_value ? new_value_c__ : NULL, 6);
}

