/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "table_equiv_type.h"

// Constructor:
table_equiv_type::table_equiv_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_table_equiv_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
table_equiv_type::~table_equiv_type() {
  __cppwrappers_MOD_deallocate1_table_equiv_type(data_ptr); // Deallocate Fortran derived type
}

