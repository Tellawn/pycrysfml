/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "ns_space_group_type.h"

// Constructor:
ns_space_group_type::ns_space_group_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_ns_space_group_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
ns_space_group_type::~ns_space_group_type() {
  __cppwrappers_MOD_deallocate1_ns_space_group_type(data_ptr); // Deallocate Fortran derived type
}

int ns_space_group_type::get_ns_space_group_centred() {
  return __cfml_python_MOD_get_ns_space_group_centred(data_ptr);
}

void ns_space_group_type::set_ns_space_group_centred(int new_value) {
  __cfml_python_MOD_set_ns_space_group_centred(data_ptr, &new_value);
}

int ns_space_group_type::get_ns_space_group_numspg() {
  return __cfml_python_MOD_get_ns_space_group_numspg(data_ptr);
}

void ns_space_group_type::set_ns_space_group_numspg(int new_value) {
  __cfml_python_MOD_set_ns_space_group_numspg(data_ptr, &new_value);
}

void ns_space_group_type::get_ns_space_group_crystalsys(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[12+1];
  output_value_c__[12] = '\0';
  __cfml_python_MOD_get_ns_space_group_crystalsys(data_ptr, output_value ? output_value_c__ : NULL, 12);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=12-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_crystalsys(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[12+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 12+1); new_value_c__[12+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<12+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_crystalsys(data_ptr, new_value ? new_value_c__ : NULL, 12);
}

int ns_space_group_type::get_ns_space_group_numlat() {
  return __cfml_python_MOD_get_ns_space_group_numlat(data_ptr);
}

void ns_space_group_type::set_ns_space_group_numlat(int new_value) {
  __cfml_python_MOD_set_ns_space_group_numlat(data_ptr, &new_value);
}

void ns_space_group_type::get_ns_space_group_pg(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_ns_space_group_pg(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_pg(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_pg(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void ns_space_group_type::get_ns_space_group_hall(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[16+1];
  output_value_c__[16] = '\0';
  __cfml_python_MOD_get_ns_space_group_hall(data_ptr, output_value ? output_value_c__ : NULL, 16);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=16-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_hall(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[16+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 16+1); new_value_c__[16+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<16+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_hall(data_ptr, new_value ? new_value_c__ : NULL, 16);
}

void ns_space_group_type::get_ns_space_group_info(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_ns_space_group_info(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_info(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_info(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void ns_space_group_type::get_ns_space_group_spg_lat(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_ns_space_group_spg_lat(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_spg_lat(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_spg_lat(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

void ns_space_group_type::get_ns_space_group_laue(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_ns_space_group_laue(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_laue(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_laue(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void ns_space_group_type::get_ns_space_group_spg_latsy(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[2+1];
  output_value_c__[2] = '\0';
  __cfml_python_MOD_get_ns_space_group_spg_latsy(data_ptr, output_value ? output_value_c__ : NULL, 2);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=2-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_spg_latsy(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[2+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 2+1); new_value_c__[2+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<2+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_spg_latsy(data_ptr, new_value ? new_value_c__ : NULL, 2);
}

int ns_space_group_type::get_ns_space_group_num_gen() {
  return __cfml_python_MOD_get_ns_space_group_num_gen(data_ptr);
}

void ns_space_group_type::set_ns_space_group_num_gen(int new_value) {
  __cfml_python_MOD_set_ns_space_group_num_gen(data_ptr, &new_value);
}

void ns_space_group_type::get_ns_space_group_bravais(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[51+1];
  output_value_c__[51] = '\0';
  __cfml_python_MOD_get_ns_space_group_bravais(data_ptr, output_value ? output_value_c__ : NULL, 51);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=51-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_bravais(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[51+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 51+1); new_value_c__[51+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<51+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_bravais(data_ptr, new_value ? new_value_c__ : NULL, 51);
}

void ns_space_group_type::get_ns_space_group_sg_setting(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[90+1];
  output_value_c__[90] = '\0';
  __cfml_python_MOD_get_ns_space_group_sg_setting(data_ptr, output_value ? output_value_c__ : NULL, 90);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=90-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_sg_setting(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[90+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 90+1); new_value_c__[90+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<90+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_sg_setting(data_ptr, new_value ? new_value_c__ : NULL, 90);
}

void ns_space_group_type::get_ns_space_group_ghall(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[90+1];
  output_value_c__[90] = '\0';
  __cfml_python_MOD_get_ns_space_group_ghall(data_ptr, output_value ? output_value_c__ : NULL, 90);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=90-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_ghall(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[90+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 90+1); new_value_c__[90+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<90+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_ghall(data_ptr, new_value ? new_value_c__ : NULL, 90);
}

void ns_space_group_type::get_ns_space_group_spg_symb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_ns_space_group_spg_symb(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_spg_symb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_spg_symb(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

void ns_space_group_type::get_ns_space_group_centre_coord(std::vector<float>* output_value) {
  __cfml_python_MOD_get_ns_space_group_centre_coord(data_ptr, &(*output_value)[0]);
}

void ns_space_group_type::set_ns_space_group_centre_coord(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_ns_space_group_centre_coord(data_ptr, &(*new_value)[0]);
}

void ns_space_group_type::get_ns_space_group_centre(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[80+1];
  output_value_c__[80] = '\0';
  __cfml_python_MOD_get_ns_space_group_centre(data_ptr, output_value ? output_value_c__ : NULL, 80);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=80-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void ns_space_group_type::set_ns_space_group_centre(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[80+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 80+1); new_value_c__[80+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<80+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_ns_space_group_centre(data_ptr, new_value ? new_value_c__ : NULL, 80);
}

int ns_space_group_type::get_ns_space_group_numops() {
  return __cfml_python_MOD_get_ns_space_group_numops(data_ptr);
}

void ns_space_group_type::set_ns_space_group_numops(int new_value) {
  __cfml_python_MOD_set_ns_space_group_numops(data_ptr, &new_value);
}

int ns_space_group_type::get_ns_space_group_multip() {
  return __cfml_python_MOD_get_ns_space_group_multip(data_ptr);
}

void ns_space_group_type::set_ns_space_group_multip(int new_value) {
  __cfml_python_MOD_set_ns_space_group_multip(data_ptr, &new_value);
}

