/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "matom_type.h"

// Constructor:
matom_type::matom_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_matom_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
matom_type::~matom_type() {
  __cppwrappers_MOD_deallocate1_matom_type(data_ptr); // Deallocate Fortran derived type
}

float matom_type::get_matom_basis_element(int i, int j) {
  return __cfml_python_MOD_get_matom_basis_element(data_ptr, &i, &j);
}

void matom_type::set_matom_basis_element(int i, int j, float value) {
  __cfml_python_MOD_set_matom_basis_element(data_ptr, &i, &j, &value);
}

void matom_type::get_matom_mmphas(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_mmphas(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_mmphas(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_mmphas(data_ptr, &(*new_value)[0]);
}

int matom_type::get_matom_locc() {
  return __cfml_python_MOD_get_matom_locc(data_ptr);
}

void matom_type::set_matom_locc(int new_value) {
  __cfml_python_MOD_set_matom_locc(data_ptr, &new_value);
}

void matom_type::get_matom_ski_std(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_ski_std(data_ptr, output_value->data);
}

void matom_type::set_matom_ski_std(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_ski_std(data_ptr, new_value->data);
}

void matom_type::get_matom_lvarf(std::vector<int>* output_value) {
  __cfml_python_MOD_get_matom_lvarf(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_lvarf(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_matom_lvarf(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_utype(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[4+1];
  output_value_c__[4] = '\0';
  __cfml_python_MOD_get_matom_utype(data_ptr, output_value ? output_value_c__ : NULL, 4);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=4-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_utype(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[4+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 4+1); new_value_c__[4+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<4+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_utype(data_ptr, new_value ? new_value_c__ : NULL, 4);
}

float matom_type::get_matom_mbiso() {
  return __cfml_python_MOD_get_matom_mbiso(data_ptr);
}

void matom_type::set_matom_mbiso(float new_value) {
  __cfml_python_MOD_set_matom_mbiso(data_ptr, &new_value);
}

float matom_type::get_matom_occ() {
  return __cfml_python_MOD_get_matom_occ(data_ptr);
}

void matom_type::set_matom_occ(float new_value) {
  __cfml_python_MOD_set_matom_occ(data_ptr, &new_value);
}

void matom_type::get_matom_lbas(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_matom_lbas(data_ptr, output_value->data);
}

void matom_type::set_matom_lbas(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_matom_lbas(data_ptr, new_value->data);
}

float matom_type::get_matom_charge() {
  return __cfml_python_MOD_get_matom_charge(data_ptr);
}

void matom_type::set_matom_charge(float new_value) {
  __cfml_python_MOD_set_matom_charge(data_ptr, &new_value);
}

void matom_type::get_matom_sfacsymb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[4+1];
  output_value_c__[4] = '\0';
  __cfml_python_MOD_get_matom_sfacsymb(data_ptr, output_value ? output_value_c__ : NULL, 4);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=4-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_sfacsymb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[4+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 4+1); new_value_c__[4+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<4+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_sfacsymb(data_ptr, new_value ? new_value_c__ : NULL, 4);
}

void matom_type::get_matom_imat(std::vector<int>* output_value) {
  __cfml_python_MOD_get_matom_imat(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_imat(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_matom_imat(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_lmphas(std::vector<int>* output_value) {
  __cfml_python_MOD_get_matom_lmphas(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_lmphas(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_matom_lmphas(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_mphas(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_mphas(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_mphas(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_mphas(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_spher_ski(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_spher_ski(data_ptr, output_value->data);
}

void matom_type::set_matom_spher_ski(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_spher_ski(data_ptr, new_value->data);
}

void matom_type::get_matom_skr(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_skr(data_ptr, output_value->data);
}

void matom_type::set_matom_skr(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_skr(data_ptr, new_value->data);
}

void matom_type::get_matom_lskr(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_matom_lskr(data_ptr, output_value->data);
}

void matom_type::set_matom_lskr(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_matom_lskr(data_ptr, new_value->data);
}

void matom_type::get_matom_lab(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[10+1];
  output_value_c__[10] = '\0';
  __cfml_python_MOD_get_matom_lab(data_ptr, output_value ? output_value_c__ : NULL, 10);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=10-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_lab(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[10+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 10+1); new_value_c__[10+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<10+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_lab(data_ptr, new_value ? new_value_c__ : NULL, 10);
}

float matom_type::get_matom_moment() {
  return __cfml_python_MOD_get_matom_moment(data_ptr);
}

void matom_type::set_matom_moment(float new_value) {
  __cfml_python_MOD_set_matom_moment(data_ptr, &new_value);
}

void matom_type::get_matom_lu(std::vector<int>* output_value) {
  __cfml_python_MOD_get_matom_lu(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_lu(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_matom_lu(data_ptr, &(*new_value)[0]);
}

float matom_type::get_matom_mocc() {
  return __cfml_python_MOD_get_matom_mocc(data_ptr);
}

void matom_type::set_matom_mocc(float new_value) {
  __cfml_python_MOD_set_matom_mocc(data_ptr, &new_value);
}

int matom_type::get_matom_active() {
  return __cfml_python_MOD_get_matom_active(data_ptr);
}

void matom_type::set_matom_active(int new_value) {
  __cfml_python_MOD_set_matom_active(data_ptr, &new_value);
}

void matom_type::get_matom_ski(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_ski(data_ptr, output_value->data);
}

void matom_type::set_matom_ski(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_ski(data_ptr, new_value->data);
}

int matom_type::get_matom_mult() {
  return __cfml_python_MOD_get_matom_mult(data_ptr);
}

void matom_type::set_matom_mult(int new_value) {
  __cfml_python_MOD_set_matom_mult(data_ptr, &new_value);
}

void matom_type::get_matom_spher_skr_std(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_spher_skr_std(data_ptr, output_value->data);
}

void matom_type::set_matom_spher_skr_std(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_spher_skr_std(data_ptr, new_value->data);
}

void matom_type::get_matom_x_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_x_std(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_x_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_x_std(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_u_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_u_std(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_u_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_u_std(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_lski(FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_matom_lski(data_ptr, output_value->data);
}

void matom_type::set_matom_lski(const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_matom_lski(data_ptr, new_value->data);
}

int matom_type::get_matom_nvar() {
  return __cfml_python_MOD_get_matom_nvar(data_ptr);
}

void matom_type::set_matom_nvar(int new_value) {
  __cfml_python_MOD_set_matom_nvar(data_ptr, &new_value);
}

void matom_type::get_matom_wyck(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_matom_wyck(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_wyck(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_wyck(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

float matom_type::get_matom_biso_std() {
  return __cfml_python_MOD_get_matom_biso_std(data_ptr);
}

void matom_type::set_matom_biso_std(float new_value) {
  __cfml_python_MOD_set_matom_biso_std(data_ptr, &new_value);
}

int matom_type::get_matom_lbiso() {
  return __cfml_python_MOD_get_matom_lbiso(data_ptr);
}

void matom_type::set_matom_lbiso(int new_value) {
  __cfml_python_MOD_set_matom_lbiso(data_ptr, &new_value);
}

void matom_type::get_matom_mphas_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_mphas_std(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_mphas_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_mphas_std(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_mvarf(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_mvarf(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_mvarf(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_mvarf(data_ptr, &(*new_value)[0]);
}

float matom_type::get_matom_biso() {
  return __cfml_python_MOD_get_matom_biso(data_ptr);
}

void matom_type::set_matom_biso(float new_value) {
  __cfml_python_MOD_set_matom_biso(data_ptr, &new_value);
}

void matom_type::get_matom_varf(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_varf(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_varf(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_varf(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_u(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_u(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_u(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_u(data_ptr, &(*new_value)[0]);
}

float matom_type::get_matom_occ_std() {
  return __cfml_python_MOD_get_matom_occ_std(data_ptr);
}

void matom_type::set_matom_occ_std(float new_value) {
  __cfml_python_MOD_set_matom_occ_std(data_ptr, &new_value);
}

void matom_type::get_matom_x(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_x(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_x(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_x(data_ptr, &(*new_value)[0]);
}

int matom_type::get_matom_z() {
  return __cfml_python_MOD_get_matom_z(data_ptr);
}

void matom_type::set_matom_z(int new_value) {
  __cfml_python_MOD_set_matom_z(data_ptr, &new_value);
}

int matom_type::get_matom_nvk() {
  return __cfml_python_MOD_get_matom_nvk(data_ptr);
}

void matom_type::set_matom_nvk(int new_value) {
  __cfml_python_MOD_set_matom_nvk(data_ptr, &new_value);
}

void matom_type::get_matom_mbas(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_mbas(data_ptr, output_value->data);
}

void matom_type::set_matom_mbas(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_mbas(data_ptr, new_value->data);
}

void matom_type::get_matom_spher_ski_std(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_spher_ski_std(data_ptr, output_value->data);
}

void matom_type::set_matom_spher_ski_std(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_spher_ski_std(data_ptr, new_value->data);
}

void matom_type::get_matom_spher_skr(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_spher_skr(data_ptr, output_value->data);
}

void matom_type::set_matom_spher_skr(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_spher_skr(data_ptr, new_value->data);
}

void matom_type::get_matom_mski(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_mski(data_ptr, output_value->data);
}

void matom_type::set_matom_mski(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_mski(data_ptr, new_value->data);
}

void matom_type::get_matom_skr_std(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_skr_std(data_ptr, output_value->data);
}

void matom_type::set_matom_skr_std(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_skr_std(data_ptr, new_value->data);
}

void matom_type::get_matom_mu(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_mu(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_mu(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_mu(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_mskr(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_mskr(data_ptr, output_value->data);
}

void matom_type::set_matom_mskr(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_mskr(data_ptr, new_value->data);
}

void matom_type::get_matom_lx(std::vector<int>* output_value) {
  __cfml_python_MOD_get_matom_lx(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_lx(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_matom_lx(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_chemsymb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[2+1];
  output_value_c__[2] = '\0';
  __cfml_python_MOD_get_matom_chemsymb(data_ptr, output_value ? output_value_c__ : NULL, 2);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=2-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_chemsymb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[2+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 2+1); new_value_c__[2+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<2+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_chemsymb(data_ptr, new_value ? new_value_c__ : NULL, 2);
}

void matom_type::get_matom_cbas(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_cbas(data_ptr, output_value->data);
}

void matom_type::set_matom_cbas(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_cbas(data_ptr, new_value->data);
}

void matom_type::get_matom_ind(std::vector<int>* output_value) {
  __cfml_python_MOD_get_matom_ind(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_ind(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_matom_ind(data_ptr, &(*new_value)[0]);
}

void matom_type::get_matom_cbas_std(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_matom_cbas_std(data_ptr, output_value->data);
}

void matom_type::set_matom_cbas_std(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_matom_cbas_std(data_ptr, new_value->data);
}

void matom_type::get_matom_thtype(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_matom_thtype(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_thtype(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_thtype(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void matom_type::get_matom_atminfo(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[40+1];
  output_value_c__[40] = '\0';
  __cfml_python_MOD_get_matom_atminfo(data_ptr, output_value ? output_value_c__ : NULL, 40);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=40-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void matom_type::set_matom_atminfo(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[40+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 40+1); new_value_c__[40+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<40+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_matom_atminfo(data_ptr, new_value ? new_value_c__ : NULL, 40);
}

float matom_type::get_matom_ueq() {
  return __cfml_python_MOD_get_matom_ueq(data_ptr);
}

void matom_type::set_matom_ueq(float new_value) {
  __cfml_python_MOD_set_matom_ueq(data_ptr, &new_value);
}

void matom_type::get_matom_mx(std::vector<float>* output_value) {
  __cfml_python_MOD_get_matom_mx(data_ptr, &(*output_value)[0]);
}

void matom_type::set_matom_mx(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_matom_mx(data_ptr, &(*new_value)[0]);
}

