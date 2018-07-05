/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef NS_SPACE_GROUP_TYPE_H_
#define NS_SPACE_GROUP_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_ns_space_group_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_ns_space_group_type(ADDRESS caddr);
  int __cfml_python_MOD_get_ns_space_group_centred(ADDRESS obj_var);
  void __cfml_python_MOD_set_ns_space_group_centred(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_ns_space_group_numspg(ADDRESS obj_var);
  void __cfml_python_MOD_set_ns_space_group_numspg(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_ns_space_group_crystalsys(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_crystalsys(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_ns_space_group_numlat(ADDRESS obj_var);
  void __cfml_python_MOD_set_ns_space_group_numlat(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_ns_space_group_pg(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_pg(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_hall(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_hall(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_info(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_info(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_spg_lat(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_spg_lat(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_laue(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_laue(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_spg_latsy(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_spg_latsy(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_ns_space_group_num_gen(ADDRESS obj_var);
  void __cfml_python_MOD_set_ns_space_group_num_gen(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_ns_space_group_bravais(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_bravais(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_sg_setting(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_sg_setting(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_ghall(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_ghall(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_spg_symb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_spg_symb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_ns_space_group_centre_coord(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_ns_space_group_centre_coord(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_ns_space_group_centre(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_ns_space_group_centre(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_ns_space_group_numops(ADDRESS obj_var);
  void __cfml_python_MOD_set_ns_space_group_numops(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_ns_space_group_multip(ADDRESS obj_var);
  void __cfml_python_MOD_set_ns_space_group_multip(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class ns_space_group_type {

public:
  ns_space_group_type();
  ~ns_space_group_type();

  int get_ns_space_group_centred();

  void set_ns_space_group_centred(int new_value);

  int get_ns_space_group_numspg();

  void set_ns_space_group_numspg(int new_value);

  void get_ns_space_group_crystalsys(std::string *output_value);

  void set_ns_space_group_crystalsys(const char* new_value);

  int get_ns_space_group_numlat();

  void set_ns_space_group_numlat(int new_value);

  void get_ns_space_group_pg(std::string *output_value);

  void set_ns_space_group_pg(const char* new_value);

  void get_ns_space_group_hall(std::string *output_value);

  void set_ns_space_group_hall(const char* new_value);

  void get_ns_space_group_info(std::string *output_value);

  void set_ns_space_group_info(const char* new_value);

  void get_ns_space_group_spg_lat(std::string *output_value);

  void set_ns_space_group_spg_lat(const char* new_value);

  void get_ns_space_group_laue(std::string *output_value);

  void set_ns_space_group_laue(const char* new_value);

  void get_ns_space_group_spg_latsy(std::string *output_value);

  void set_ns_space_group_spg_latsy(const char* new_value);

  int get_ns_space_group_num_gen();

  void set_ns_space_group_num_gen(int new_value);

  void get_ns_space_group_bravais(std::string *output_value);

  void set_ns_space_group_bravais(const char* new_value);

  void get_ns_space_group_sg_setting(std::string *output_value);

  void set_ns_space_group_sg_setting(const char* new_value);

  void get_ns_space_group_ghall(std::string *output_value);

  void set_ns_space_group_ghall(const char* new_value);

  void get_ns_space_group_spg_symb(std::string *output_value);

  void set_ns_space_group_spg_symb(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_ns_space_group_centre_coord(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_ns_space_group_centre_coord(const std::vector<float>* new_value);

  void get_ns_space_group_centre(std::string *output_value);

  void set_ns_space_group_centre(const char* new_value);

  int get_ns_space_group_numops();

  void set_ns_space_group_numops(int new_value);

  int get_ns_space_group_multip();

  void set_ns_space_group_multip(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* NS_SPACE_GROUP_TYPE_H_ */
