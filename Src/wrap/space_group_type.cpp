/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "space_group_type.h"

// Constructor:
space_group_type::space_group_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_space_group_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
space_group_type::~space_group_type() {
  __cppwrappers_MOD_deallocate1_space_group_type(data_ptr); // Deallocate Fortran derived type
}

void space_group_type::set_atom_equiv_list(crystal_cell_type* cell, atom_list_type* a, atom_equiv_list_type* ate, const int* lun) {
  __cfml_atom_typedef_MOD_set_atom_equiv_list(data_ptr, cell->data_ptr, a->data_ptr, ate->data_ptr, lun);
}

void space_group_type::set_formal_charges(crystal_cell_type* cell, atom_list_type* a, const float* eps_val, const int* iwrt) {
  __cfml_bvs_energy_calc_MOD_set_formal_charges(data_ptr, cell->data_ptr, a->data_ptr, eps_val, iwrt);
}

void space_group_type::set_new_asymunit(atom_equiv_list_type* ate, const FortranMatrix<float> *mat, const std::vector<float>* orig, atom_list_type* a_n, const char* matkind, const char* debug) {
  int debug_len__ = 0;
  if (debug) debug_len__ = strlen(debug); // Protect Optional args
  int matkind_len__ = 0;
  if (matkind) matkind_len__ = strlen(matkind); // Protect Optional args
  __cfml_geometry_calc_MOD_set_new_asymunit(data_ptr, ate->data_ptr, mat->data, &(*orig)[0], a_n->data_ptr, matkind, debug, matkind_len__, debug_len__);
}

void space_group_type::set_orbits_inlist(point_list_type* pl) {
  __cfml_geometry_calc_MOD_set_orbits_inlist(data_ptr, pl->data_ptr);
}

void space_group_type::get_hallsymb_from_gener(std::string *spaceh) {
  int spaceh_len__ = 0;
  if (spaceh) spaceh_len__ = spaceh->length();
  // Declare memory to store output character data
  char spaceh_c__[spaceh_len__+1];
  spaceh_c__[spaceh_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_hallsymb_from_gener(data_ptr, spaceh ? spaceh_c__ : NULL, spaceh_len__);
  if (spaceh) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=spaceh_len__-1; spaceh_c__[i]==' '; i--) spaceh_c__[i] = '\0';
    spaceh->assign(spaceh_c__);
  }
}

void space_group_type::get_laue_pg(std::string *laue_car, std::string *point_car) {
  int point_car_len__ = 0;
  if (point_car) point_car_len__ = point_car->length();
  // Declare memory to store output character data
  char point_car_c__[point_car_len__+1];
  point_car_c__[point_car_len__] = '\0';
  int laue_car_len__ = 0;
  if (laue_car) laue_car_len__ = laue_car->length();
  // Declare memory to store output character data
  char laue_car_c__[laue_car_len__+1];
  laue_car_c__[laue_car_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_laue_pg(data_ptr, laue_car ? laue_car_c__ : NULL, point_car ? point_car_c__ : NULL, laue_car_len__, point_car_len__);
  if (point_car) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=laue_car_len__-1; point_car_c__[i]==' '; i--) point_car_c__[i] = '\0';
    point_car->assign(point_car_c__);
  }
  if (laue_car) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=laue_car_len__-1; laue_car_c__[i]==' '; i--) laue_car_c__[i] = '\0';
    laue_car->assign(laue_car_c__);
  }
}

int space_group_type::get_space_group_centred() {
  return __cfml_python_MOD_get_space_group_centred(data_ptr);
}

void space_group_type::set_space_group_centred(int new_value) {
  __cfml_python_MOD_set_space_group_centred(data_ptr, &new_value);
}

void space_group_type::get_space_group_centre_coord(std::vector<float>* output_value) {
  __cfml_python_MOD_get_space_group_centre_coord(data_ptr, &(*output_value)[0]);
}

void space_group_type::set_space_group_centre_coord(const std::vector<float>* new_value) {
  __cfml_python_MOD_set_space_group_centre_coord(data_ptr, &(*new_value)[0]);
}

int space_group_type::get_space_group_hexa() {
  return __cfml_python_MOD_get_space_group_hexa(data_ptr);
}

void space_group_type::set_space_group_hexa(int new_value) {
  __cfml_python_MOD_set_space_group_hexa(data_ptr, &new_value);
}

int space_group_type::get_space_group_numspg() {
  return __cfml_python_MOD_get_space_group_numspg(data_ptr);
}

void space_group_type::set_space_group_numspg(int new_value) {
  __cfml_python_MOD_set_space_group_numspg(data_ptr, &new_value);
}

void space_group_type::get_space_group_crystalsys(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[12+1];
  output_value_c__[12] = '\0';
  __cfml_python_MOD_get_space_group_crystalsys(data_ptr, output_value ? output_value_c__ : NULL, 12);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=12-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_crystalsys(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[12+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 12+1); new_value_c__[12+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<12+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_crystalsys(data_ptr, new_value ? new_value_c__ : NULL, 12);
}

int space_group_type::get_space_group_numlat() {
  return __cfml_python_MOD_get_space_group_numlat(data_ptr);
}

void space_group_type::set_space_group_numlat(int new_value) {
  __cfml_python_MOD_set_space_group_numlat(data_ptr, &new_value);
}

void space_group_type::get_space_group_pg(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_space_group_pg(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_pg(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_pg(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void space_group_type::get_space_group_wyckoff(wyckoff_type* output_value) {
  __cfml_python_MOD_get_space_group_wyckoff(data_ptr, output_value->data_ptr);
}

void space_group_type::set_space_group_wyckoff(wyckoff_type* new_value) {
  __cfml_python_MOD_set_space_group_wyckoff(data_ptr, new_value->data_ptr);
}

void space_group_type::get_space_group_hall(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[16+1];
  output_value_c__[16] = '\0';
  __cfml_python_MOD_get_space_group_hall(data_ptr, output_value ? output_value_c__ : NULL, 16);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=16-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_hall(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[16+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 16+1); new_value_c__[16+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<16+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_hall(data_ptr, new_value ? new_value_c__ : NULL, 16);
}

void space_group_type::get_space_group_info(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_space_group_info(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_info(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_info(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void space_group_type::get_space_group_spg_lat(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[1+1];
  output_value_c__[1] = '\0';
  __cfml_python_MOD_get_space_group_spg_lat(data_ptr, output_value ? output_value_c__ : NULL, 1);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=1-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_spg_lat(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[1+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 1+1); new_value_c__[1+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<1+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_spg_lat(data_ptr, new_value ? new_value_c__ : NULL, 1);
}

void space_group_type::get_space_group_laue(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[5+1];
  output_value_c__[5] = '\0';
  __cfml_python_MOD_get_space_group_laue(data_ptr, output_value ? output_value_c__ : NULL, 5);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=5-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_laue(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[5+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 5+1); new_value_c__[5+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<5+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_laue(data_ptr, new_value ? new_value_c__ : NULL, 5);
}

void space_group_type::get_space_group_spg_latsy(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[2+1];
  output_value_c__[2] = '\0';
  __cfml_python_MOD_get_space_group_spg_latsy(data_ptr, output_value ? output_value_c__ : NULL, 2);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=2-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_spg_latsy(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[2+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 2+1); new_value_c__[2+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<2+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_spg_latsy(data_ptr, new_value ? new_value_c__ : NULL, 2);
}

int space_group_type::get_space_group_num_gen() {
  return __cfml_python_MOD_get_space_group_num_gen(data_ptr);
}

void space_group_type::set_space_group_num_gen(int new_value) {
  __cfml_python_MOD_set_space_group_num_gen(data_ptr, &new_value);
}

void space_group_type::get_space_group_bravais(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[51+1];
  output_value_c__[51] = '\0';
  __cfml_python_MOD_get_space_group_bravais(data_ptr, output_value ? output_value_c__ : NULL, 51);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=51-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_bravais(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[51+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 51+1); new_value_c__[51+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<51+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_bravais(data_ptr, new_value ? new_value_c__ : NULL, 51);
}

void space_group_type::get_space_group_sg_setting(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[90+1];
  output_value_c__[90] = '\0';
  __cfml_python_MOD_get_space_group_sg_setting(data_ptr, output_value ? output_value_c__ : NULL, 90);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=90-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_sg_setting(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[90+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 90+1); new_value_c__[90+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<90+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_sg_setting(data_ptr, new_value ? new_value_c__ : NULL, 90);
}

void space_group_type::get_space_group_ghall(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[90+1];
  output_value_c__[90] = '\0';
  __cfml_python_MOD_get_space_group_ghall(data_ptr, output_value ? output_value_c__ : NULL, 90);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=90-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_ghall(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[90+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 90+1); new_value_c__[90+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<90+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_ghall(data_ptr, new_value ? new_value_c__ : NULL, 90);
}

void space_group_type::get_space_group_spg_symb(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[20+1];
  output_value_c__[20] = '\0';
  __cfml_python_MOD_get_space_group_spg_symb(data_ptr, output_value ? output_value_c__ : NULL, 20);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=20-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_spg_symb(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[20+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 20+1); new_value_c__[20+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<20+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_spg_symb(data_ptr, new_value ? new_value_c__ : NULL, 20);
}

void space_group_type::get_space_group_centre(std::string *output_value) {
  // Declare memory to store output character data
  char output_value_c__[80+1];
  output_value_c__[80] = '\0';
  __cfml_python_MOD_get_space_group_centre(data_ptr, output_value ? output_value_c__ : NULL, 80);
  if (output_value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=80-1; output_value_c__[i]==' '; i--) output_value_c__[i] = '\0';
    output_value->assign(output_value_c__);
  }
}

void space_group_type::set_space_group_centre(const char* new_value) {
  // Create C array for Fortran input string data
  char new_value_c__[80+1];
  if (new_value) {
    int i;
    strncpy(new_value_c__, new_value, 80+1); new_value_c__[80+1] = 0; // strncpy protects in case new_value is too long
    for (i=strlen(new_value_c__); i<80+1; i++) new_value_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_set_space_group_centre(data_ptr, new_value ? new_value_c__ : NULL, 80);
}

int space_group_type::get_space_group_numops() {
  return __cfml_python_MOD_get_space_group_numops(data_ptr);
}

void space_group_type::set_space_group_numops(int new_value) {
  __cfml_python_MOD_set_space_group_numops(data_ptr, &new_value);
}

void space_group_type::get_space_group_r_asym_unit(FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_space_group_r_asym_unit(data_ptr, output_value->data);
}

void space_group_type::set_space_group_r_asym_unit(const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_space_group_r_asym_unit(data_ptr, new_value->data);
}

int space_group_type::get_space_group_multip() {
  return __cfml_python_MOD_get_space_group_multip(data_ptr);
}

void space_group_type::set_space_group_multip(int new_value) {
  __cfml_python_MOD_set_space_group_multip(data_ptr, &new_value);
}

