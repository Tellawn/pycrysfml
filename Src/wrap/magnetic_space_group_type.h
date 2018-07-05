/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGNETIC_SPACE_GROUP_TYPE_H_
#define MAGNETIC_SPACE_GROUP_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_magnetic_space_group_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_magnetic_space_group_type(ADDRESS caddr);
  int __cfml_python_MOD_get_magnetic_space_group_m_constr(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_m_constr(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_centre_coord(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_magnetic_space_group_centre_coord(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_magnetic_space_group_n_wyck(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_n_wyck(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_bns_symbol(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_bns_symbol(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magnetic_space_group_bns_number(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_bns_number(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_sh_number(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_sh_number(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_crystalsys(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_crystalsys(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_m_cell(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_m_cell(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_num_lat(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_num_lat(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_num_alat(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_num_alat(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_centred(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_centred(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_spg_lat(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_spg_lat(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_parent_num(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_parent_num(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_magtype(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_magtype(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_n_kv(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_n_kv(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_og_number(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_og_number(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_n_irreps(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_n_irreps(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_spg_latsy(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_spg_latsy(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_num_gen(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_num_gen(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_standard_setting(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_standard_setting(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_parent_spg(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_parent_spg(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magnetic_space_group_og_symbol(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_og_symbol(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magnetic_space_group_centre(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_centre(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_mcif(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_mcif(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magnetic_space_group_numops(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_numops(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_space_group_trn_to_standard(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_trn_to_standard(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magnetic_space_group_trn_from_parent(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_space_group_trn_from_parent(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magnetic_space_group_multip(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_space_group_multip(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class magnetic_space_group_type {

public:
  magnetic_space_group_type();
  ~magnetic_space_group_type();

  int get_magnetic_space_group_m_constr();

  void set_magnetic_space_group_m_constr(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_magnetic_space_group_centre_coord(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magnetic_space_group_centre_coord(const std::vector<float>* new_value);

  int get_magnetic_space_group_n_wyck();

  void set_magnetic_space_group_n_wyck(int new_value);

  void get_magnetic_space_group_bns_symbol(std::string *output_value);

  void set_magnetic_space_group_bns_symbol(const char* new_value);

  void get_magnetic_space_group_bns_number(std::string *output_value);

  void set_magnetic_space_group_bns_number(const char* new_value);

  int get_magnetic_space_group_sh_number();

  void set_magnetic_space_group_sh_number(int new_value);

  void get_magnetic_space_group_crystalsys(std::string *output_value);

  void set_magnetic_space_group_crystalsys(const char* new_value);

  int get_magnetic_space_group_m_cell();

  void set_magnetic_space_group_m_cell(int new_value);

  int get_magnetic_space_group_num_lat();

  void set_magnetic_space_group_num_lat(int new_value);

  int get_magnetic_space_group_num_alat();

  void set_magnetic_space_group_num_alat(int new_value);

  int get_magnetic_space_group_centred();

  void set_magnetic_space_group_centred(int new_value);

  void get_magnetic_space_group_spg_lat(std::string *output_value);

  void set_magnetic_space_group_spg_lat(const char* new_value);

  int get_magnetic_space_group_parent_num();

  void set_magnetic_space_group_parent_num(int new_value);

  int get_magnetic_space_group_magtype();

  void set_magnetic_space_group_magtype(int new_value);

  int get_magnetic_space_group_n_kv();

  void set_magnetic_space_group_n_kv(int new_value);

  void get_magnetic_space_group_og_number(std::string *output_value);

  void set_magnetic_space_group_og_number(const char* new_value);

  int get_magnetic_space_group_n_irreps();

  void set_magnetic_space_group_n_irreps(int new_value);

  void get_magnetic_space_group_spg_latsy(std::string *output_value);

  void set_magnetic_space_group_spg_latsy(const char* new_value);

  int get_magnetic_space_group_num_gen();

  void set_magnetic_space_group_num_gen(int new_value);

  int get_magnetic_space_group_standard_setting();

  void set_magnetic_space_group_standard_setting(int new_value);

  void get_magnetic_space_group_parent_spg(std::string *output_value);

  void set_magnetic_space_group_parent_spg(const char* new_value);

  void get_magnetic_space_group_og_symbol(std::string *output_value);

  void set_magnetic_space_group_og_symbol(const char* new_value);

  void get_magnetic_space_group_centre(std::string *output_value);

  void set_magnetic_space_group_centre(const char* new_value);

  int get_magnetic_space_group_mcif();

  void set_magnetic_space_group_mcif(int new_value);

  int get_magnetic_space_group_numops();

  void set_magnetic_space_group_numops(int new_value);

  void get_magnetic_space_group_trn_to_standard(std::string *output_value);

  void set_magnetic_space_group_trn_to_standard(const char* new_value);

  void get_magnetic_space_group_trn_from_parent(std::string *output_value);

  void set_magnetic_space_group_trn_from_parent(const char* new_value);

  int get_magnetic_space_group_multip();

  void set_magnetic_space_group_multip(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGNETIC_SPACE_GROUP_TYPE_H_ */
