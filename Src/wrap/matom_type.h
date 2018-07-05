/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MATOM_TYPE_H_
#define MATOM_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_matom_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_matom_type(ADDRESS caddr);
  float __cfml_python_MOD_get_matom_basis_element(ADDRESS atm, int* i, int* j);
  void __cfml_python_MOD_set_matom_basis_element(ADDRESS atm, int* i, int* j, float* value);
  void __cfml_python_MOD_get_matom_mmphas(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_mmphas(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_matom_locc(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_locc(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_ski_std(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_ski_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_lvarf(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_matom_lvarf(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_matom_utype(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_utype(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_matom_mbiso(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_mbiso(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_matom_occ(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_occ(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_lbas(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_matom_lbas(ADDRESS obj_var, int* new_value);
  float __cfml_python_MOD_get_matom_charge(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_charge(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_sfacsymb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_sfacsymb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_matom_imat(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_matom_imat(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_matom_lmphas(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_matom_lmphas(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_matom_mphas(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_mphas(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_matom_spher_ski(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_spher_ski(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_skr(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_skr(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_lskr(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_matom_lskr(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_lab(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_lab(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_matom_moment(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_moment(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_lu(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_matom_lu(ADDRESS obj_var, const int new_value[]);
  float __cfml_python_MOD_get_matom_mocc(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_mocc(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_matom_active(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_active(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_ski(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_ski(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_matom_mult(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_mult(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_spher_skr_std(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_spher_skr_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_x_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_x_std(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_matom_u_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_u_std(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_matom_lski(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_matom_lski(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_matom_nvar(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_nvar(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_wyck(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_wyck(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_matom_biso_std(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_biso_std(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_matom_lbiso(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_lbiso(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_mphas_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_mphas_std(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_matom_mvarf(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_mvarf(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_matom_biso(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_biso(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_varf(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_varf(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_matom_u(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_u(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_matom_occ_std(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_occ_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_x(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_x(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_matom_z(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_z(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_matom_nvk(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_nvk(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_matom_mbas(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_mbas(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_spher_ski_std(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_spher_ski_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_spher_skr(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_spher_skr(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_mski(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_mski(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_skr_std(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_skr_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_mu(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_mu(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_matom_mskr(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_mskr(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_lx(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_matom_lx(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_matom_chemsymb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_chemsymb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_matom_cbas(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_cbas(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_ind(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_matom_ind(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_matom_cbas_std(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_matom_cbas_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_thtype(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_thtype(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_matom_atminfo(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_matom_atminfo(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_matom_ueq(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_ueq(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_matom_mx(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_matom_mx(ADDRESS obj_var, const float new_value[]);
}
#endif // SWIG

class matom_type {

public:
  matom_type();
  ~matom_type();

  float get_matom_basis_element(int i, int j);

  void set_matom_basis_element(int i, int j, float value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_mmphas(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_mmphas(const std::vector<float>* new_value);

  int get_matom_locc();

  void set_matom_locc(int new_value);

  void get_matom_ski_std(FortranMatrix<float> *output_value);

  void set_matom_ski_std(const FortranMatrix<float> *new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_lvarf(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_lvarf(const std::vector<int>* new_value);

  void get_matom_utype(std::string *output_value);

  void set_matom_utype(const char* new_value);

  float get_matom_mbiso();

  void set_matom_mbiso(float new_value);

  float get_matom_occ();

  void set_matom_occ(float new_value);

  void get_matom_lbas(FortranMatrix<int> *output_value);

  void set_matom_lbas(const FortranMatrix<int> *new_value);

  float get_matom_charge();

  void set_matom_charge(float new_value);

  void get_matom_sfacsymb(std::string *output_value);

  void set_matom_sfacsymb(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_imat(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_imat(const std::vector<int>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_lmphas(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_lmphas(const std::vector<int>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_mphas(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_mphas(const std::vector<float>* new_value);

  void get_matom_spher_ski(FortranMatrix<float> *output_value);

  void set_matom_spher_ski(const FortranMatrix<float> *new_value);

  void get_matom_skr(FortranMatrix<float> *output_value);

  void set_matom_skr(const FortranMatrix<float> *new_value);

  void get_matom_lskr(FortranMatrix<int> *output_value);

  void set_matom_lskr(const FortranMatrix<int> *new_value);

  void get_matom_lab(std::string *output_value);

  void set_matom_lab(const char* new_value);

  float get_matom_moment();

  void set_matom_moment(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_lu(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_lu(const std::vector<int>* new_value);

  float get_matom_mocc();

  void set_matom_mocc(float new_value);

  int get_matom_active();

  void set_matom_active(int new_value);

  void get_matom_ski(FortranMatrix<float> *output_value);

  void set_matom_ski(const FortranMatrix<float> *new_value);

  int get_matom_mult();

  void set_matom_mult(int new_value);

  void get_matom_spher_skr_std(FortranMatrix<float> *output_value);

  void set_matom_spher_skr_std(const FortranMatrix<float> *new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_x_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_x_std(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_u_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_u_std(const std::vector<float>* new_value);

  void get_matom_lski(FortranMatrix<int> *output_value);

  void set_matom_lski(const FortranMatrix<int> *new_value);

  int get_matom_nvar();

  void set_matom_nvar(int new_value);

  void get_matom_wyck(std::string *output_value);

  void set_matom_wyck(const char* new_value);

  float get_matom_biso_std();

  void set_matom_biso_std(float new_value);

  int get_matom_lbiso();

  void set_matom_lbiso(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_mphas_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_mphas_std(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_mvarf(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_mvarf(const std::vector<float>* new_value);

  float get_matom_biso();

  void set_matom_biso(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_varf(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_varf(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_u(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_u(const std::vector<float>* new_value);

  float get_matom_occ_std();

  void set_matom_occ_std(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_x(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_x(const std::vector<float>* new_value);

  int get_matom_z();

  void set_matom_z(int new_value);

  int get_matom_nvk();

  void set_matom_nvk(int new_value);

  void get_matom_mbas(FortranMatrix<float> *output_value);

  void set_matom_mbas(const FortranMatrix<float> *new_value);

  void get_matom_spher_ski_std(FortranMatrix<float> *output_value);

  void set_matom_spher_ski_std(const FortranMatrix<float> *new_value);

  void get_matom_spher_skr(FortranMatrix<float> *output_value);

  void set_matom_spher_skr(const FortranMatrix<float> *new_value);

  void get_matom_mski(FortranMatrix<float> *output_value);

  void set_matom_mski(const FortranMatrix<float> *new_value);

  void get_matom_skr_std(FortranMatrix<float> *output_value);

  void set_matom_skr_std(const FortranMatrix<float> *new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_mu(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_mu(const std::vector<float>* new_value);

  void get_matom_mskr(FortranMatrix<float> *output_value);

  void set_matom_mskr(const FortranMatrix<float> *new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_lx(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_lx(const std::vector<int>* new_value);

  void get_matom_chemsymb(std::string *output_value);

  void set_matom_chemsymb(const char* new_value);

  void get_matom_cbas(FortranMatrix<float> *output_value);

  void set_matom_cbas(const FortranMatrix<float> *new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_ind(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_ind(const std::vector<int>* new_value);

  void get_matom_cbas_std(FortranMatrix<float> *output_value);

  void set_matom_cbas_std(const FortranMatrix<float> *new_value);

  void get_matom_thtype(std::string *output_value);

  void set_matom_thtype(const char* new_value);

  void get_matom_atminfo(std::string *output_value);

  void set_matom_atminfo(const char* new_value);

  float get_matom_ueq();

  void set_matom_ueq(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_matom_mx(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_matom_mx(const std::vector<float>* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MATOM_TYPE_H_ */
