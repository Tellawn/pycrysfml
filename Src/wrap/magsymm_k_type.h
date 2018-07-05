/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGSYMM_K_TYPE_H_
#define MAGSYMM_K_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_magsymm_k_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_magsymm_k_type(ADDRESS caddr);
  void __cfml_python_MOD_get_basis_element(ADDRESS mgsymm, int* irrrepnum, int* symopnum, int* vectornum, float v[]);
  void __cfml_python_MOD_get_kvector(ADDRESS msymm, float elem[], int* ind);
  void __cfml_python_MOD_set_basis_element(ADDRESS mgsymm, int* irrrepnum, int* symopnum, int* vectornum, const float v[]);
  void __cfml_python_MOD_get_magsymm_k_latt(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_latt(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magsymm_k_numops(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_numops(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magsymm_k_bns_symbol(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_bns_symbol(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magsymm_k_bns_number(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_bns_number(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magsymm_k_mcentred(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_mcentred(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magsymm_k_magmodel(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_magmodel(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magsymm_k_kvec(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_magsymm_k_kvec(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_magsymm_k_nmsym(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_nmsym(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magsymm_k_num_lat(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_num_lat(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magsymm_k_small_irrep_dim(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_magsymm_k_small_irrep_dim(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_magsymm_k_ltr(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_magsymm_k_ltr(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_magsymm_k_parent_num(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_parent_num(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magsymm_k_sk_type(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_sk_type(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_magsymm_k_nirreps(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_nirreps(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magsymm_k_magtype(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_magtype(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magsymm_k_og_number(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_og_number(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magsymm_k_irrep_dim(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_magsymm_k_irrep_dim(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_magsymm_k_irrep_modes_number(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_magsymm_k_irrep_modes_number(ADDRESS obj_var, const int new_value[]);
  int __cfml_python_MOD_get_magsymm_k_nkv(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_nkv(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magsymm_k_centred(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_centred(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magsymm_k_parent_spg(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_parent_spg(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magsymm_k_og_symbol(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magsymm_k_og_symbol(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magsymm_k_nbas(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_magsymm_k_nbas(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_magsymm_k_icomp(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_magsymm_k_icomp(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magsymm_k_multip(ADDRESS obj_var);
  void __cfml_python_MOD_set_magsymm_k_multip(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class magsymm_k_type {

public:
  magsymm_k_type();
  ~magsymm_k_type();

/*! \param[out] v ARRAY
*/
  void get_basis_element(int irrrepnum, int symopnum, int vectornum, std::vector<float>* v);

/*! \param[out] elem ARRAY
*/
  void get_kvector(std::vector<float>* elem, int ind);

/*! \param[in] v ARRAY
*/
  void set_basis_element(int irrrepnum, int symopnum, int vectornum, const std::vector<float>* v);

  void get_magsymm_k_latt(std::string *output_value);

  void set_magsymm_k_latt(const char* new_value);

  int get_magsymm_k_numops();

  void set_magsymm_k_numops(int new_value);

  void get_magsymm_k_bns_symbol(std::string *output_value);

  void set_magsymm_k_bns_symbol(const char* new_value);

  void get_magsymm_k_bns_number(std::string *output_value);

  void set_magsymm_k_bns_number(const char* new_value);

  int get_magsymm_k_mcentred();

  void set_magsymm_k_mcentred(int new_value);

  void get_magsymm_k_magmodel(std::string *output_value);

  void set_magsymm_k_magmodel(const char* new_value);

  void get_magsymm_k_kvec(FortranMatrix<float> *output_value);

  void set_magsymm_k_kvec(const FortranMatrix<float> *new_value);

  int get_magsymm_k_nmsym();

  void set_magsymm_k_nmsym(int new_value);

  int get_magsymm_k_num_lat();

  void set_magsymm_k_num_lat(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_magsymm_k_small_irrep_dim(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magsymm_k_small_irrep_dim(const std::vector<int>* new_value);

  void get_magsymm_k_ltr(FortranMatrix<float> *output_value);

  void set_magsymm_k_ltr(const FortranMatrix<float> *new_value);

  int get_magsymm_k_parent_num();

  void set_magsymm_k_parent_num(int new_value);

  void get_magsymm_k_sk_type(std::string *output_value);

  void set_magsymm_k_sk_type(const char* new_value);

  int get_magsymm_k_nirreps();

  void set_magsymm_k_nirreps(int new_value);

  int get_magsymm_k_magtype();

  void set_magsymm_k_magtype(int new_value);

  void get_magsymm_k_og_number(std::string *output_value);

  void set_magsymm_k_og_number(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_magsymm_k_irrep_dim(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magsymm_k_irrep_dim(const std::vector<int>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_magsymm_k_irrep_modes_number(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magsymm_k_irrep_modes_number(const std::vector<int>* new_value);

  int get_magsymm_k_nkv();

  void set_magsymm_k_nkv(int new_value);

  int get_magsymm_k_centred();

  void set_magsymm_k_centred(int new_value);

  void get_magsymm_k_parent_spg(std::string *output_value);

  void set_magsymm_k_parent_spg(const char* new_value);

  void get_magsymm_k_og_symbol(std::string *output_value);

  void set_magsymm_k_og_symbol(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_magsymm_k_nbas(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magsymm_k_nbas(const std::vector<int>* new_value);

  void get_magsymm_k_icomp(FortranMatrix<int> *output_value);

  void set_magsymm_k_icomp(const FortranMatrix<int> *new_value);

  int get_magsymm_k_multip();

  void set_magsymm_k_multip(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGSYMM_K_TYPE_H_ */
