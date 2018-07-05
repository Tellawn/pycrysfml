/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atom_type.h"

// Constructor:
atom_type::atom_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atom_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atom_type::~atom_type() {
  __cppwrappers_MOD_deallocate1_atom_type(data_ptr); // Deallocate Fortran derived type
}

int atom_type::get_atom_locc() {
  return __cfml_python_MOD_get_atom_locc(data_ptr);
}

void atom_type::set_atom_locc(int new_value) {
  __cfml_python_MOD_set_atom_locc(data_ptr, &new_value);
}

void atom_type::get_atom_lvarf(std::vector<int>* output_value) {
  __cfml_python_MOD_get_atom_lvarf(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_lvarf(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_atom_lvarf(data_ptr, &(*new_value)[0]);
}

void atom_type::get_atom_utype(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[4+1];
  output_value_c__[4] = '\0';
  __cfml_python_MOD_get_atom_utype(data_ptr, output_value ? output_value_c__ : NULL, 4);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=4-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_utype(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[4+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 4+1); new_value_c__[4+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<4+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_utype(data_ptr, new_value ? new_value_c__ : NULL, 4);
}

float atom_type::get_atom_mbiso() {
  return __cfml_python_MOD_get_atom_mbiso(data_ptr);
}

void atom_type::set_atom_mbiso(float new_value) {
  __cfml_python_MOD_set_atom_mbiso(data_ptr, &new_value);
}

float atom_type::get_atom_occ() {
  return __cfml_python_MOD_get_atom_occ(data_ptr);
}

void atom_type::set_atom_occ(float new_value) {
  __cfml_python_MOD_set_atom_occ(data_ptr, &new_value);
}

float atom_type::get_atom_charge() {
  return __cfml_python_MOD_get_atom_charge(data_ptr);
}

void atom_type::set_atom_charge(float new_value) {
  __cfml_python_MOD_set_atom_charge(data_ptr, &new_value);
}

void atom_type::get_atom_sfacsymb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[4+1];
  output_value_c__[4] = '\0';
  __cfml_python_MOD_get_atom_sfacsymb(data_ptr, output_value ? output_value_c__ : NULL, 4);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=4-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_sfacsymb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[4+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 4+1); new_value_c__[4+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<4+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_sfacsymb(data_ptr, new_value ? new_value_c__ : NULL, 4);
}

void atom_type::get_atom_lab(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_atom_lab(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_lab(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_lab(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

void atom_type::get_atom_mvarf(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_mvarf(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_mvarf(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_mvarf(data_ptr, &(*new_value)[0]);
}

float atom_type::get_atom_moment() {
  return __cfml_python_MOD_get_atom_moment(data_ptr);
}

void atom_type::set_atom_moment(float new_value) {
  __cfml_python_MOD_set_atom_moment(data_ptr, &new_value);
}

void atom_type::get_atom_lu(std::vector<int>* output_value) {
  __cfml_python_MOD_get_atom_lu(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_lu(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_atom_lu(data_ptr, &(*new_value)[0]);
}

float atom_type::get_atom_mocc() {
  return __cfml_python_MOD_get_atom_mocc(data_ptr);
}

void atom_type::set_atom_mocc(float new_value) {
  __cfml_python_MOD_set_atom_mocc(data_ptr, &new_value);
}

int atom_type::get_atom_active() {
  return __cfml_python_MOD_get_atom_active(data_ptr);
}

void atom_type::set_atom_active(int new_value) {
  __cfml_python_MOD_set_atom_active(data_ptr, &new_value);
}

int atom_type::get_atom_mult() {
  return __cfml_python_MOD_get_atom_mult(data_ptr);
}

void atom_type::set_atom_mult(int new_value) {
  __cfml_python_MOD_set_atom_mult(data_ptr, &new_value);
}

void atom_type::get_atom_x_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_x_std(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_x_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_x_std(data_ptr, &(*new_value)[0]);
}

void atom_type::get_atom_u_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_u_std(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_u_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_u_std(data_ptr, &(*new_value)[0]);
}

int atom_type::get_atom_nvar() {
  return __cfml_python_MOD_get_atom_nvar(data_ptr);
}

void atom_type::set_atom_nvar(int new_value) {
  __cfml_python_MOD_set_atom_nvar(data_ptr, &new_value);
}

void atom_type::get_atom_wyck(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_atom_wyck(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_wyck(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_wyck(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

float atom_type::get_atom_biso_std() {
  return __cfml_python_MOD_get_atom_biso_std(data_ptr);
}

void atom_type::set_atom_biso_std(float new_value) {
  __cfml_python_MOD_set_atom_biso_std(data_ptr, &new_value);
}

int atom_type::get_atom_lbiso() {
  return __cfml_python_MOD_get_atom_lbiso(data_ptr);
}

void atom_type::set_atom_lbiso(int new_value) {
  __cfml_python_MOD_set_atom_lbiso(data_ptr, &new_value);
}

float atom_type::get_atom_biso() {
  return __cfml_python_MOD_get_atom_biso(data_ptr);
}

void atom_type::set_atom_biso(float new_value) {
  __cfml_python_MOD_set_atom_biso(data_ptr, &new_value);
}

void atom_type::get_atom_varf(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_varf(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_varf(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_varf(data_ptr, &(*new_value)[0]);
}

void atom_type::get_atom_u(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_u(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_u(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_u(data_ptr, &(*new_value)[0]);
}

float atom_type::get_atom_occ_std() {
  return __cfml_python_MOD_get_atom_occ_std(data_ptr);
}

void atom_type::set_atom_occ_std(float new_value) {
  __cfml_python_MOD_set_atom_occ_std(data_ptr, &new_value);
}

void atom_type::get_atom_x(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_x(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_x(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_x(data_ptr, &(*new_value)[0]);
}

int atom_type::get_atom_z() {
  return __cfml_python_MOD_get_atom_z(data_ptr);
}

void atom_type::set_atom_z(int new_value) {
  __cfml_python_MOD_set_atom_z(data_ptr, &new_value);
}

void atom_type::get_atom_mu(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_mu(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_mu(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_mu(data_ptr, &(*new_value)[0]);
}

void atom_type::get_atom_lx(std::vector<int>* output_value) {
  __cfml_python_MOD_get_atom_lx(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_lx(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_atom_lx(data_ptr, &(*new_value)[0]);
}

void atom_type::get_atom_chemsymb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[2+1];
  output_value_c__[2] = '\0';
  __cfml_python_MOD_get_atom_chemsymb(data_ptr, output_value ? output_value_c__ : NULL, 2);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=2-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_chemsymb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[2+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 2+1); new_value_c__[2+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<2+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_chemsymb(data_ptr, new_value ? new_value_c__ : NULL, 2);
}

void atom_type::get_atom_ind(std::vector<int>* output_value) {
  __cfml_python_MOD_get_atom_ind(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_ind(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_atom_ind(data_ptr, &(*new_value)[0]);
}

void atom_type::get_atom_thtype(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_atom_thtype(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_thtype(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_thtype(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void atom_type::get_atom_atminfo(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[40+1];
  output_value_c__[40] = '\0';
  __cfml_python_MOD_get_atom_atminfo(data_ptr, output_value ? output_value_c__ : NULL, 40);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=40-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void atom_type::set_atom_atminfo(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[40+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 40+1); new_value_c__[40+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<40+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_atom_atminfo(data_ptr, new_value ? new_value_c__ : NULL, 40);
}

float atom_type::get_atom_ueq() {
  return __cfml_python_MOD_get_atom_ueq(data_ptr);
}

void atom_type::set_atom_ueq(float new_value) {
  __cfml_python_MOD_set_atom_ueq(data_ptr, &new_value);
}

void atom_type::get_atom_mx(std::vector<float>* output_value) {
  __cfml_python_MOD_get_atom_mx(data_ptr, &(*output_value)[0]);
}

void atom_type::set_atom_mx(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_atom_mx(data_ptr, &(*new_value)[0]);
}

