/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atom_equiv_type.h"

// Constructor:
atom_equiv_type::atom_equiv_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atom_equiv_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atom_equiv_type::~atom_equiv_type() {
  __cppwrappers_MOD_deallocate1_atom_equiv_type(data_ptr); // Deallocate Fortran derived type
}

void atom_equiv_type::get_atom_equiv_chemsymb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[2+1];
  output_value_c__[2] = '\0';
  __cfml_python_MOD_get_atom_equiv_chemsymb(data_ptr, output_value ? output_value_c__ : NULL, 2);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=2-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_equiv_type::set_atom_equiv_chemsymb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[2+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 2+1); new_value_c__[2+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<2+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_equiv_chemsymb(data_ptr, new_value ? new_value_c__ : NULL, 2);
}

int atom_equiv_type::get_atom_equiv_mult() {
  return __cfml_python_MOD_get_atom_equiv_mult(data_ptr);
}

void atom_equiv_type::set_atom_equiv_mult(int new_value) {
  __cfml_python_MOD_set_atom_equiv_mult(data_ptr, &new_value);
}

