/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef SPACE_GROUP_TYPE_H_
#define SPACE_GROUP_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "atom_list_type.h"
#include "crystal_cell_type.h"
#include "atom_equiv_list_type.h"
#include "FortranMatrix.h"
#include "point_list_type.h"
#include "wyckoff_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_space_group_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_space_group_type(ADDRESS caddr);
  void __cfml_atom_typedef_MOD_set_atom_equiv_list(ADDRESS spg, ADDRESS cell, ADDRESS a, ADDRESS ate, const int* lun);
  void __cfml_bvs_energy_calc_MOD_set_formal_charges(ADDRESS spgr, ADDRESS cell, ADDRESS a, const float* eps_val, const int* iwrt);
  void __cfml_geometry_calc_MOD_set_new_asymunit(ADDRESS spgn, ADDRESS ate, float* mat, const float orig[], ADDRESS a_n, const char* matkind, const char* debug, int matkind_len__, int debug_len__);
  void __cfml_geometry_calc_MOD_set_orbits_inlist(ADDRESS spg, ADDRESS pl);
  void __cfml_crystallographic_symmetry_MOD_get_hallsymb_from_gener(ADDRESS spacegroup, char* spaceh, int spaceh_len__);
  void __cfml_crystallographic_symmetry_MOD_get_laue_pg(ADDRESS spacegroup, char* laue_car, char* point_car, int laue_car_len__, int point_car_len__);
  int __cfml_python_MOD_get_space_group_centred(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_centred(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_space_group_centre_coord(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_space_group_centre_coord(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_space_group_hexa(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_hexa(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_space_group_numspg(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_numspg(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_space_group_crystalsys(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_crystalsys(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_space_group_numlat(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_numlat(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_space_group_pg(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_pg(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_wyckoff(ADDRESS obj_var, ADDRESS output_value);
  void __cfml_python_MOD_set_space_group_wyckoff(ADDRESS obj_var, ADDRESS new_value);
  void __cfml_python_MOD_get_space_group_hall(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_hall(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_info(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_info(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_spg_lat(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_spg_lat(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_laue(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_laue(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_spg_latsy(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_spg_latsy(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_space_group_num_gen(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_num_gen(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_space_group_bravais(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_bravais(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_sg_setting(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_sg_setting(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_ghall(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_ghall(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_spg_symb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_spg_symb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_space_group_centre(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_space_group_centre(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_space_group_numops(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_numops(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_space_group_r_asym_unit(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_space_group_r_asym_unit(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_space_group_multip(ADDRESS obj_var);
  void __cfml_python_MOD_set_space_group_multip(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class space_group_type {

public:
  space_group_type();
  ~space_group_type();

/*! \param[in] lun OPTIONAL
*/
  void set_atom_equiv_list(crystal_cell_type* cell, atom_list_type* a, atom_equiv_list_type* ate, const int* lun=NULL);

/*! \param[in] eps_val OPTIONAL
 *
 *  \param[in] iwrt OPTIONAL
*/
  void set_formal_charges(crystal_cell_type* cell, atom_list_type* a, const float* eps_val=NULL, const int* iwrt=NULL);

/*! \param[in] orig ARRAY
 *
 *  \param[in] matkind OPTIONAL
 *
 *  \param[in] debug OPTIONAL
*/
  void set_new_asymunit(atom_equiv_list_type* ate, const FortranMatrix<float> *mat, const std::vector<float>* orig, atom_list_type* a_n, const char* matkind=NULL, const char* debug=NULL);

  void set_orbits_inlist(point_list_type* pl);

/*! \param[out] spaceh OPTIONAL
*/
  void get_hallsymb_from_gener(std::string *spaceh=NULL);

  void get_laue_pg(std::string *laue_car, std::string *point_car);

  int get_space_group_centred();

  void set_space_group_centred(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_space_group_centre_coord(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_space_group_centre_coord(const std::vector<float>* new_value);

  int get_space_group_hexa();

  void set_space_group_hexa(int new_value);

  int get_space_group_numspg();

  void set_space_group_numspg(int new_value);

  void get_space_group_crystalsys(std::string *output_value);

  void set_space_group_crystalsys(const char* new_value);

  int get_space_group_numlat();

  void set_space_group_numlat(int new_value);

  void get_space_group_pg(std::string *output_value);

  void set_space_group_pg(const char* new_value);

  void get_space_group_wyckoff(wyckoff_type* output_value);

  void set_space_group_wyckoff(wyckoff_type* new_value);

  void get_space_group_hall(std::string *output_value);

  void set_space_group_hall(const char* new_value);

  void get_space_group_info(std::string *output_value);

  void set_space_group_info(const char* new_value);

  void get_space_group_spg_lat(std::string *output_value);

  void set_space_group_spg_lat(const char* new_value);

  void get_space_group_laue(std::string *output_value);

  void set_space_group_laue(const char* new_value);

  void get_space_group_spg_latsy(std::string *output_value);

  void set_space_group_spg_latsy(const char* new_value);

  int get_space_group_num_gen();

  void set_space_group_num_gen(int new_value);

  void get_space_group_bravais(std::string *output_value);

  void set_space_group_bravais(const char* new_value);

  void get_space_group_sg_setting(std::string *output_value);

  void set_space_group_sg_setting(const char* new_value);

  void get_space_group_ghall(std::string *output_value);

  void set_space_group_ghall(const char* new_value);

  void get_space_group_spg_symb(std::string *output_value);

  void set_space_group_spg_symb(const char* new_value);

  void get_space_group_centre(std::string *output_value);

  void set_space_group_centre(const char* new_value);

  int get_space_group_numops();

  void set_space_group_numops(int new_value);

  void get_space_group_r_asym_unit(FortranMatrix<float> *output_value);

  void set_space_group_r_asym_unit(const FortranMatrix<float> *new_value);

  int get_space_group_multip();

  void set_space_group_multip(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* SPACE_GROUP_TYPE_H_ */
