/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "magnetic_space_group_type.h"

// Constructor:
magnetic_space_group_type::magnetic_space_group_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_magnetic_space_group_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
magnetic_space_group_type::~magnetic_space_group_type() {
  __cppwrappers_MOD_deallocate1_magnetic_space_group_type(data_ptr); // Deallocate Fortran derived type
}

int magnetic_space_group_type::get_magnetic_space_group_m_constr() {
  return __cfml_python_MOD_get_magnetic_space_group_m_constr(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_m_constr(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_m_constr(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_centre_coord(std::vector<float>* output_value) {
  __cfml_python_MOD_get_magnetic_space_group_centre_coord(data_ptr, &(*output_value)[0]);
}

void magnetic_space_group_type::set_magnetic_space_group_centre_coord(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_magnetic_space_group_centre_coord(data_ptr, &(*new_value)[0]);
}

int magnetic_space_group_type::get_magnetic_space_group_n_wyck() {
  return __cfml_python_MOD_get_magnetic_space_group_n_wyck(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_n_wyck(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_n_wyck(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_bns_symbol(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[34+1];
  output_value_c__[34] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_bns_symbol(data_ptr, output_value ? output_value_c__ : NULL, 34);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=34-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_bns_symbol(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[34+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 34+1); new_value_c__[34+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<34+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_bns_symbol(data_ptr, new_value ? new_value_c__ : NULL, 34);
}

void magnetic_space_group_type::get_magnetic_space_group_bns_number(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[15+1];
  output_value_c__[15] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_bns_number(data_ptr, output_value ? output_value_c__ : NULL, 15);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=15-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_bns_number(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[15+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 15+1); new_value_c__[15+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<15+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_bns_number(data_ptr, new_value ? new_value_c__ : NULL, 15);
}

int magnetic_space_group_type::get_magnetic_space_group_sh_number() {
  return __cfml_python_MOD_get_magnetic_space_group_sh_number(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_sh_number(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_sh_number(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_crystalsys(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[12+1];
  output_value_c__[12] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_crystalsys(data_ptr, output_value ? output_value_c__ : NULL, 12);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=12-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_crystalsys(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[12+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 12+1); new_value_c__[12+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<12+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_crystalsys(data_ptr, new_value ? new_value_c__ : NULL, 12);
}

int magnetic_space_group_type::get_magnetic_space_group_m_cell() {
  return __cfml_python_MOD_get_magnetic_space_group_m_cell(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_m_cell(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_m_cell(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_num_lat() {
  return __cfml_python_MOD_get_magnetic_space_group_num_lat(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_num_lat(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_num_lat(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_num_alat() {
  return __cfml_python_MOD_get_magnetic_space_group_num_alat(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_num_alat(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_num_alat(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_centred() {
  return __cfml_python_MOD_get_magnetic_space_group_centred(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_centred(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_centred(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_spg_lat(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_spg_lat(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_spg_lat(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_spg_lat(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

int magnetic_space_group_type::get_magnetic_space_group_parent_num() {
  return __cfml_python_MOD_get_magnetic_space_group_parent_num(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_parent_num(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_parent_num(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_magtype() {
  return __cfml_python_MOD_get_magnetic_space_group_magtype(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_magtype(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_magtype(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_n_kv() {
  return __cfml_python_MOD_get_magnetic_space_group_n_kv(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_n_kv(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_n_kv(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_og_number(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[15+1];
  output_value_c__[15] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_og_number(data_ptr, output_value ? output_value_c__ : NULL, 15);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=15-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_og_number(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[15+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 15+1); new_value_c__[15+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<15+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_og_number(data_ptr, new_value ? new_value_c__ : NULL, 15);
}

int magnetic_space_group_type::get_magnetic_space_group_n_irreps() {
  return __cfml_python_MOD_get_magnetic_space_group_n_irreps(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_n_irreps(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_n_irreps(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_spg_latsy(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[2+1];
  output_value_c__[2] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_spg_latsy(data_ptr, output_value ? output_value_c__ : NULL, 2);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=2-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_spg_latsy(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[2+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 2+1); new_value_c__[2+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<2+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_spg_latsy(data_ptr, new_value ? new_value_c__ : NULL, 2);
}

int magnetic_space_group_type::get_magnetic_space_group_num_gen() {
  return __cfml_python_MOD_get_magnetic_space_group_num_gen(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_num_gen(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_num_gen(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_standard_setting() {
  return __cfml_python_MOD_get_magnetic_space_group_standard_setting(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_standard_setting(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_standard_setting(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_parent_spg(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_parent_spg(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_parent_spg(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_parent_spg(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

void magnetic_space_group_type::get_magnetic_space_group_og_symbol(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[34+1];
  output_value_c__[34] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_og_symbol(data_ptr, output_value ? output_value_c__ : NULL, 34);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=34-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_og_symbol(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[34+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 34+1); new_value_c__[34+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<34+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_og_symbol(data_ptr, new_value ? new_value_c__ : NULL, 34);
}

void magnetic_space_group_type::get_magnetic_space_group_centre(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[80+1];
  output_value_c__[80] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_centre(data_ptr, output_value ? output_value_c__ : NULL, 80);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=80-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_centre(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[80+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 80+1); new_value_c__[80+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<80+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_centre(data_ptr, new_value ? new_value_c__ : NULL, 80);
}

int magnetic_space_group_type::get_magnetic_space_group_mcif() {
  return __cfml_python_MOD_get_magnetic_space_group_mcif(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_mcif(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_mcif(data_ptr, &new_value);
}

int magnetic_space_group_type::get_magnetic_space_group_numops() {
  return __cfml_python_MOD_get_magnetic_space_group_numops(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_numops(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_numops(data_ptr, &new_value);
}

void magnetic_space_group_type::get_magnetic_space_group_trn_to_standard(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[40+1];
  output_value_c__[40] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_trn_to_standard(data_ptr, output_value ? output_value_c__ : NULL, 40);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=40-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_trn_to_standard(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[40+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 40+1); new_value_c__[40+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<40+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_trn_to_standard(data_ptr, new_value ? new_value_c__ : NULL, 40);
}

void magnetic_space_group_type::get_magnetic_space_group_trn_from_parent(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[40+1];
  output_value_c__[40] = '\0';
  __cfml_python_MOD_get_magnetic_space_group_trn_from_parent(data_ptr, output_value ? output_value_c__ : NULL, 40);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=40-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magnetic_space_group_type::set_magnetic_space_group_trn_from_parent(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[40+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 40+1); new_value_c__[40+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<40+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magnetic_space_group_trn_from_parent(data_ptr, new_value ? new_value_c__ : NULL, 40);
}

int magnetic_space_group_type::get_magnetic_space_group_multip() {
  return __cfml_python_MOD_get_magnetic_space_group_multip(data_ptr);
}

void magnetic_space_group_type::set_magnetic_space_group_multip(int new_value) {
  __cfml_python_MOD_set_magnetic_space_group_multip(data_ptr, &new_value);
}

