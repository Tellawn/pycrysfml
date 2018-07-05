/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOM_TYPE_H_
#define ATOM_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atom_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atom_type(ADDRESS caddr);
  int __cfml_python_MOD_get_atom_locc(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_locc(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_atom_lvarf(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_atom_lvarf(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_atom_utype(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_utype(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_atom_mbiso(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_mbiso(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_atom_occ(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_occ(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_atom_charge(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_charge(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_atom_sfacsymb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_sfacsymb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_atom_lab(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_lab(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_atom_mvarf(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_mvarf(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_atom_moment(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_moment(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_atom_lu(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_atom_lu(ADDRESS obj_var, const int new_value[]);
  float __cfml_python_MOD_get_atom_mocc(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_mocc(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_atom_active(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_active(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_atom_mult(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_mult(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_atom_x_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_x_std(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_atom_u_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_u_std(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_atom_nvar(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_nvar(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_atom_wyck(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_wyck(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_atom_biso_std(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_biso_std(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_atom_lbiso(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_lbiso(ADDRESS obj_var, int* new_value);
  float __cfml_python_MOD_get_atom_biso(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_biso(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_atom_varf(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_varf(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_atom_u(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_u(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_atom_occ_std(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_occ_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_atom_x(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_x(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_atom_z(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_z(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_atom_mu(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_mu(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_atom_lx(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_atom_lx(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_atom_chemsymb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_chemsymb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_atom_ind(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_atom_ind(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_atom_thtype(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_thtype(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_atom_atminfo(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_atminfo(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_atom_ueq(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_ueq(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_atom_mx(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_atom_mx(ADDRESS obj_var, const float new_value[]);
}
#endif // SWIG

class atom_type {

public:
  atom_type();
  ~atom_type();

  int get_atom_locc();

  void set_atom_locc(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_lvarf(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_lvarf(const std::vector<int>* new_value);

  void get_atom_utype(std::string *output_value);

  void set_atom_utype(const char* new_value);

  float get_atom_mbiso();

  void set_atom_mbiso(float new_value);

  float get_atom_occ();

  void set_atom_occ(float new_value);

  float get_atom_charge();

  void set_atom_charge(float new_value);

  void get_atom_sfacsymb(std::string *output_value);

  void set_atom_sfacsymb(const char* new_value);

  void get_atom_lab(std::string *output_value);

  void set_atom_lab(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_mvarf(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_mvarf(const std::vector<float>* new_value);

  float get_atom_moment();

  void set_atom_moment(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_lu(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_lu(const std::vector<int>* new_value);

  float get_atom_mocc();

  void set_atom_mocc(float new_value);

  int get_atom_active();

  void set_atom_active(int new_value);

  int get_atom_mult();

  void set_atom_mult(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_x_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_x_std(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_u_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_u_std(const std::vector<float>* new_value);

  int get_atom_nvar();

  void set_atom_nvar(int new_value);

  void get_atom_wyck(std::string *output_value);

  void set_atom_wyck(const char* new_value);

  float get_atom_biso_std();

  void set_atom_biso_std(float new_value);

  int get_atom_lbiso();

  void set_atom_lbiso(int new_value);

  float get_atom_biso();

  void set_atom_biso(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_varf(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_varf(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_u(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_u(const std::vector<float>* new_value);

  float get_atom_occ_std();

  void set_atom_occ_std(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_x(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_x(const std::vector<float>* new_value);

  int get_atom_z();

  void set_atom_z(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_mu(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_mu(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_lx(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_lx(const std::vector<int>* new_value);

  void get_atom_chemsymb(std::string *output_value);

  void set_atom_chemsymb(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_ind(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_ind(const std::vector<int>* new_value);

  void get_atom_thtype(std::string *output_value);

  void set_atom_thtype(const char* new_value);

  void get_atom_atminfo(std::string *output_value);

  void set_atom_atminfo(const char* new_value);

  float get_atom_ueq();

  void set_atom_ueq(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_atom_mx(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_atom_mx(const std::vector<float>* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOM_TYPE_H_ */
