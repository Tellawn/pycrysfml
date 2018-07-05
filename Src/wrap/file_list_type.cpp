/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "file_list_type.h"

// Constructor:
file_list_type::file_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_file_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
file_list_type::~file_list_type() {
  __cppwrappers_MOD_deallocate1_file_list_type(data_ptr); // Deallocate Fortran derived type
}

int file_list_type::get_file_list_nlines() {
  return __cfml_python_MOD_get_file_list_nlines(data_ptr);
}

void file_list_type::set_file_list_nlines(int new_value) {
  __cfml_python_MOD_set_file_list_nlines(data_ptr, &new_value);
}

