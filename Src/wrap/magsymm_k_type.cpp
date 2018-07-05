/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "magsymm_k_type.h"

// Constructor:
magsymm_k_type::magsymm_k_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_magsymm_k_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
magsymm_k_type::~magsymm_k_type() {
  __cppwrappers_MOD_deallocate1_magsymm_k_type(data_ptr); // Deallocate Fortran derived type
}

void magsymm_k_type::get_basis_element(int irrrepnum, int symopnum, int vectornum, std::vector<float>* v) {
  __cfml_python_MOD_get_basis_element(data_ptr, &irrrepnum, &symopnum, &vectornum, &(*v)[0]);
}

void magsymm_k_type::get_kvector(std::vector<float>* elem, int ind) {
  __cfml_python_MOD_get_kvector(data_ptr, &(*elem)[0], &ind);
}

void magsymm_k_type::set_basis_element(int irrrepnum, int symopnum, int vectornum, const std::vector<float>* v) {
  __cfml_python_MOD_set_basis_element(data_ptr, &irrrepnum, &symopnum, &vectornum, &(*v)[0]);
}

void magsymm_k_type::get_magsymm_k_latt(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_magsymm_k_latt(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_latt(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_latt(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

int magsymm_k_type::get_magsymm_k_numops() {
  return __cfml_python_MOD_get_magsymm_k_numops(data_ptr);
}

void magsymm_k_type::set_magsymm_k_numops(int new_value) {
  __cfml_python_MOD_set_magsymm_k_numops(data_ptr, &new_value);
}

void magsymm_k_type::get_magsymm_k_bns_symbol(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[34+1];
  output_value_c__[34] = '\0';
  __cfml_python_MOD_get_magsymm_k_bns_symbol(data_ptr, output_value ? output_value_c__ : NULL, 34);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=34-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_bns_symbol(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[34+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 34+1); new_value_c__[34+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<34+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_bns_symbol(data_ptr, new_value ? new_value_c__ : NULL, 34);
}

void magsymm_k_type::get_magsymm_k_bns_number(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[15+1];
  output_value_c__[15] = '\0';
  __cfml_python_MOD_get_magsymm_k_bns_number(data_ptr, output_value ? output_value_c__ : NULL, 15);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=15-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_bns_number(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[15+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 15+1); new_value_c__[15+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<15+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_bns_number(data_ptr, new_value ? new_value_c__ : NULL, 15);
}

int magsymm_k_type::get_magsymm_k_mcentred() {
  return __cfml_python_MOD_get_magsymm_k_mcentred(data_ptr);
}

void magsymm_k_type::set_magsymm_k_mcentred(int new_value) {
  __cfml_python_MOD_set_magsymm_k_mcentred(data_ptr, &new_value);
}

void magsymm_k_type::get_magsymm_k_magmodel(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[31+1];
  output_value_c__[31] = '\0';
  __cfml_python_MOD_get_magsymm_k_magmodel(data_ptr, output_value ? output_value_c__ : NULL, 31);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=31-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_magmodel(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[31+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 31+1); new_value_c__[31+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<31+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_magmodel(data_ptr, new_value ? new_value_c__ : NULL, 31);
}

void magsymm_k_type::get_magsymm_k_kvec(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_magsymm_k_kvec(data_ptr, output_value->data);
}

void magsymm_k_type::set_magsymm_k_kvec(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_magsymm_k_kvec(data_ptr, new_value->data);
}

int magsymm_k_type::get_magsymm_k_nmsym() {
  return __cfml_python_MOD_get_magsymm_k_nmsym(data_ptr);
}

void magsymm_k_type::set_magsymm_k_nmsym(int new_value) {
  __cfml_python_MOD_set_magsymm_k_nmsym(data_ptr, &new_value);
}

int magsymm_k_type::get_magsymm_k_num_lat() {
  return __cfml_python_MOD_get_magsymm_k_num_lat(data_ptr);
}

void magsymm_k_type::set_magsymm_k_num_lat(int new_value) {
  __cfml_python_MOD_set_magsymm_k_num_lat(data_ptr, &new_value);
}

void magsymm_k_type::get_magsymm_k_small_irrep_dim(std::vector<int>* output_value) {
  __cfml_python_MOD_get_magsymm_k_small_irrep_dim(data_ptr, &(*output_value)[0]);
}

void magsymm_k_type::set_magsymm_k_small_irrep_dim(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_magsymm_k_small_irrep_dim(data_ptr, &(*new_value)[0]);
}

void magsymm_k_type::get_magsymm_k_ltr(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_magsymm_k_ltr(data_ptr, output_value->data);
}

void magsymm_k_type::set_magsymm_k_ltr(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_magsymm_k_ltr(data_ptr, new_value->data);
}

int magsymm_k_type::get_magsymm_k_parent_num() {
  return __cfml_python_MOD_get_magsymm_k_parent_num(data_ptr);
}

void magsymm_k_type::set_magsymm_k_parent_num(int new_value) {
  __cfml_python_MOD_set_magsymm_k_parent_num(data_ptr, &new_value);
}

void magsymm_k_type::get_magsymm_k_sk_type(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[15+1];
  output_value_c__[15] = '\0';
  __cfml_python_MOD_get_magsymm_k_sk_type(data_ptr, output_value ? output_value_c__ : NULL, 15);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=15-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_sk_type(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[15+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 15+1); new_value_c__[15+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<15+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_sk_type(data_ptr, new_value ? new_value_c__ : NULL, 15);
}

int magsymm_k_type::get_magsymm_k_nirreps() {
  return __cfml_python_MOD_get_magsymm_k_nirreps(data_ptr);
}

void magsymm_k_type::set_magsymm_k_nirreps(int new_value) {
  __cfml_python_MOD_set_magsymm_k_nirreps(data_ptr, &new_value);
}

int magsymm_k_type::get_magsymm_k_magtype() {
  return __cfml_python_MOD_get_magsymm_k_magtype(data_ptr);
}

void magsymm_k_type::set_magsymm_k_magtype(int new_value) {
  __cfml_python_MOD_set_magsymm_k_magtype(data_ptr, &new_value);
}

void magsymm_k_type::get_magsymm_k_og_number(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[15+1];
  output_value_c__[15] = '\0';
  __cfml_python_MOD_get_magsymm_k_og_number(data_ptr, output_value ? output_value_c__ : NULL, 15);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=15-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_og_number(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[15+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 15+1); new_value_c__[15+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<15+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_og_number(data_ptr, new_value ? new_value_c__ : NULL, 15);
}

void magsymm_k_type::get_magsymm_k_irrep_dim(std::vector<int>* output_value) {
  __cfml_python_MOD_get_magsymm_k_irrep_dim(data_ptr, &(*output_value)[0]);
}

void magsymm_k_type::set_magsymm_k_irrep_dim(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_magsymm_k_irrep_dim(data_ptr, &(*new_value)[0]);
}

void magsymm_k_type::get_magsymm_k_irrep_modes_number(std::vector<int>* output_value) {
  __cfml_python_MOD_get_magsymm_k_irrep_modes_number(data_ptr, &(*output_value)[0]);
}

void magsymm_k_type::set_magsymm_k_irrep_modes_number(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_magsymm_k_irrep_modes_number(data_ptr, &(*new_value)[0]);
}

int magsymm_k_type::get_magsymm_k_nkv() {
  return __cfml_python_MOD_get_magsymm_k_nkv(data_ptr);
}

void magsymm_k_type::set_magsymm_k_nkv(int new_value) {
  __cfml_python_MOD_set_magsymm_k_nkv(data_ptr, &new_value);
}

int magsymm_k_type::get_magsymm_k_centred() {
  return __cfml_python_MOD_get_magsymm_k_centred(data_ptr);
}

void magsymm_k_type::set_magsymm_k_centred(int new_value) {
  __cfml_python_MOD_set_magsymm_k_centred(data_ptr, &new_value);
}

void magsymm_k_type::get_magsymm_k_parent_spg(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_magsymm_k_parent_spg(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_parent_spg(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_parent_spg(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

void magsymm_k_type::get_magsymm_k_og_symbol(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[34+1];
  output_value_c__[34] = '\0';
  __cfml_python_MOD_get_magsymm_k_og_symbol(data_ptr, output_value ? output_value_c__ : NULL, 34);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=34-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void magsymm_k_type::set_magsymm_k_og_symbol(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[34+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 34+1); new_value_c__[34+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<34+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_magsymm_k_og_symbol(data_ptr, new_value ? new_value_c__ : NULL, 34);
}

void magsymm_k_type::get_magsymm_k_nbas(std::vector<int>* output_value) {
  __cfml_python_MOD_get_magsymm_k_nbas(data_ptr, &(*output_value)[0]);
}

void magsymm_k_type::set_magsymm_k_nbas(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_magsymm_k_nbas(data_ptr, &(*new_value)[0]);
}

void magsymm_k_type::get_magsymm_k_icomp(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_magsymm_k_icomp(data_ptr, output_value->data);
}

void magsymm_k_type::set_magsymm_k_icomp(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_magsymm_k_icomp(data_ptr, new_value->data);
}

int magsymm_k_type::get_magsymm_k_multip() {
  return __cfml_python_MOD_get_magsymm_k_multip(data_ptr);
}

void magsymm_k_type::set_magsymm_k_multip(int new_value) {
  __cfml_python_MOD_set_magsymm_k_multip(data_ptr, &new_value);
}

