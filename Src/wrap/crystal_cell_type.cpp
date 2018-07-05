/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "crystal_cell_type.h"

// Constructor:
crystal_cell_type::crystal_cell_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_crystal_cell_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
crystal_cell_type::~crystal_cell_type() {
  __cppwrappers_MOD_deallocate1_crystal_cell_type(data_ptr); // Deallocate Fortran derived type
}

void crystal_cell_type::change_setting_cell(const FortranMatrix<float> *mat, crystal_cell_type* celln, const char* matkind) {
  int matkind_len__ = 0;
  if (matkind) matkind_len__ = strlen(matkind); // Protect Optional args
  __cfml_crystal_metrics_MOD_change_setting_cell(data_ptr, mat->data, celln->data_ptr, matkind, matkind_len__);
}

void crystal_cell_type::get_cryst_family(std::string *car_family, std::string *car_symbol, std::string *car_system) {
  int car_system_len__ = 0;
  if (car_system) car_system_len__ = car_system->length();
  // Declare memory to store output character data
  char car_system_c__[car_system_len__+1];
  car_system_c__[car_system_len__] = '\0';
  int car_symbol_len__ = 0;
  if (car_symbol) car_symbol_len__ = car_symbol->length();
  // Declare memory to store output character data
  char car_symbol_c__[car_symbol_len__+1];
  car_symbol_c__[car_symbol_len__] = '\0';
  int car_family_len__ = 0;
  if (car_family) car_family_len__ = car_family->length();
  // Declare memory to store output character data
  char car_family_c__[car_family_len__+1];
  car_family_c__[car_family_len__] = '\0';
  __cfml_crystal_metrics_MOD_get_cryst_family(data_ptr, car_family ? car_family_c__ : NULL, car_symbol ? car_symbol_c__ : NULL, car_system ? car_system_c__ : NULL, car_family_len__, car_symbol_len__, car_system_len__);
  if (car_system) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=car_family_len__-1; car_system_c__[i]==' '; i--) car_system_c__[i] = '\0';
    car_system->assign(car_system_c__);
  }
  if (car_symbol) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=car_family_len__-1; car_symbol_c__[i]==' '; i--) car_symbol_c__[i] = '\0';
    car_symbol->assign(car_symbol_c__);
  }
  if (car_family) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=car_family_len__-1; car_family_c__[i]==' '; i--) car_family_c__[i] = '\0';
    car_family->assign(car_family_c__);
  }
}

void crystal_cell_type::get_deriv_orth_cell(float* de_orthcell, const char* cartype) {
  // Create C array for Fortran input string data
  char cartype_c__[1+1];
  if (cartype) {
    int i;
    strncpy(cartype_c__, cartype, 1+1); cartype_c__[1+1] = 0; // strncpy protects in case cartype is too long
    for (i=strlen(cartype_c__); i<1+1; i++) cartype_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_crystal_metrics_MOD_get_deriv_orth_cell(data_ptr, de_orthcell, cartype ? cartype_c__ : NULL, 1);
}

void crystal_cell_type::get_transfm_matrix(crystal_cell_type* cellb, FortranMatrix<float> *trm, int* ok, const float* tol) {
  __cfml_crystal_metrics_MOD_get_transfm_matrix(data_ptr, cellb->data_ptr, trm->data, ok, tol);
}

void crystal_cell_type::get_twofold_axes(float tol, twofold_axes_type* twofold) {
  __cfml_crystal_metrics_MOD_get_twofold_axes(data_ptr, &tol, twofold->data_ptr);
}

void crystal_cell_type::get_crystal_cell_lang(std::vector<int>* output_value) {
  __cfml_python_MOD_get_crystal_cell_lang(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_lang(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_crystal_cell_lang(data_ptr, &(*new_value)[0]);
}

float crystal_cell_type::get_crystal_cell_rcellvol() {
  return __cfml_python_MOD_get_crystal_cell_rcellvol(data_ptr);
}

void crystal_cell_type::set_crystal_cell_rcellvol(float new_value) {
  __cfml_python_MOD_set_crystal_cell_rcellvol(data_ptr, &new_value);
}

void crystal_cell_type::get_crystal_cell_cell_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_crystal_cell_cell_std(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_cell_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_crystal_cell_cell_std(data_ptr, &(*new_value)[0]);
}

void crystal_cell_type::get_crystal_cell_ang(std::vector<float>* output_value) {
  __cfml_python_MOD_get_crystal_cell_ang(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_ang(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_crystal_cell_ang(data_ptr, &(*new_value)[0]);
}

void crystal_cell_type::get_crystal_cell_bl_minv(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_crystal_cell_bl_minv(data_ptr, output_value->data);
}

void crystal_cell_type::set_crystal_cell_bl_minv(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_crystal_cell_bl_minv(data_ptr, new_value->data);
}

void crystal_cell_type::get_crystal_cell_gr(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_crystal_cell_gr(data_ptr, output_value->data);
}

void crystal_cell_type::set_crystal_cell_gr(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_crystal_cell_gr(data_ptr, new_value->data);
}

void crystal_cell_type::get_crystal_cell_cr_orth_cel(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_crystal_cell_cr_orth_cel(data_ptr, output_value->data);
}

void crystal_cell_type::set_crystal_cell_cr_orth_cel(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_crystal_cell_cr_orth_cel(data_ptr, new_value->data);
}

void crystal_cell_type::get_crystal_cell_bl_m(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_crystal_cell_bl_m(data_ptr, output_value->data);
}

void crystal_cell_type::set_crystal_cell_bl_m(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_crystal_cell_bl_m(data_ptr, new_value->data);
}

void crystal_cell_type::get_crystal_cell_orth_cr_cel(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_crystal_cell_orth_cr_cel(data_ptr, output_value->data);
}

void crystal_cell_type::set_crystal_cell_orth_cr_cel(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_crystal_cell_orth_cr_cel(data_ptr, new_value->data);
}

void crystal_cell_type::get_crystal_cell_carttype(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_crystal_cell_carttype(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void crystal_cell_type::set_crystal_cell_carttype(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_crystal_cell_carttype(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

void crystal_cell_type::get_crystal_cell_rang(std::vector<float>* output_value) {
  __cfml_python_MOD_get_crystal_cell_rang(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_rang(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_crystal_cell_rang(data_ptr, &(*new_value)[0]);
}

void crystal_cell_type::get_crystal_cell_rcell(std::vector<float>* output_value) {
  __cfml_python_MOD_get_crystal_cell_rcell(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_rcell(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_crystal_cell_rcell(data_ptr, &(*new_value)[0]);
}

void crystal_cell_type::get_crystal_cell_cell(std::vector<float>* output_value) {
  __cfml_python_MOD_get_crystal_cell_cell(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_cell(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_crystal_cell_cell(data_ptr, &(*new_value)[0]);
}

void crystal_cell_type::get_crystal_cell_gd(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_crystal_cell_gd(data_ptr, output_value->data);
}

void crystal_cell_type::set_crystal_cell_gd(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_crystal_cell_gd(data_ptr, new_value->data);
}

float crystal_cell_type::get_crystal_cell_cellvol() {
  return __cfml_python_MOD_get_crystal_cell_cellvol(data_ptr);
}

void crystal_cell_type::set_crystal_cell_cellvol(float new_value) {
  __cfml_python_MOD_set_crystal_cell_cellvol(data_ptr, &new_value);
}

void crystal_cell_type::get_crystal_cell_ang_std(std::vector<float>* output_value) {
  __cfml_python_MOD_get_crystal_cell_ang_std(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_ang_std(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_crystal_cell_ang_std(data_ptr, &(*new_value)[0]);
}

void crystal_cell_type::get_crystal_cell_lcell(std::vector<int>* output_value) {
  __cfml_python_MOD_get_crystal_cell_lcell(data_ptr, &(*output_value)[0]);
}

void crystal_cell_type::set_crystal_cell_lcell(const std::vector<int>* new_value) {
  __cfml_python_MOD_set_crystal_cell_lcell(data_ptr, &(*new_value)[0]);
}

