/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "wyckoff_type.h"

// Constructor:
wyckoff_type::wyckoff_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_wyckoff_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
wyckoff_type::~wyckoff_type() {
  __cppwrappers_MOD_deallocate1_wyckoff_type(data_ptr); // Deallocate Fortran derived type
}

int wyckoff_type::get_wyckoff_num_orbit() {
  return __cfml_python_MOD_get_wyckoff_num_orbit(data_ptr);
}

void wyckoff_type::set_wyckoff_num_orbit(int new_value) {
  __cfml_python_MOD_set_wyckoff_num_orbit(data_ptr, &new_value);
}

