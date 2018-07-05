/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef CRYSTAL_CELL_TYPE_H_
#define CRYSTAL_CELL_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"
#include "twofold_axes_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_crystal_cell_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_crystal_cell_type(ADDRESS caddr);
  void __cfml_crystal_metrics_MOD_change_setting_cell(ADDRESS cell, float* mat, ADDRESS celln, const char* matkind, int matkind_len__);
  void __cfml_crystal_metrics_MOD_get_cryst_family(ADDRESS cell, char* car_family, char* car_symbol, char* car_system, int car_family_len__, int car_symbol_len__, int car_system_len__);
  void __cfml_crystal_metrics_MOD_get_deriv_orth_cell(ADDRESS cellp, float* de_orthcell, const char* cartype, int cartype_len__);
  void __cfml_crystal_metrics_MOD_get_transfm_matrix(ADDRESS cella, ADDRESS cellb, float* trm, int* ok, const float* tol);
  void __cfml_crystal_metrics_MOD_get_twofold_axes(ADDRESS celln, float* tol, ADDRESS twofold);
  void __cfml_python_MOD_get_crystal_cell_lang(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_crystal_cell_lang(ADDRESS obj_var, const int new_value[]);
  float __cfml_python_MOD_get_crystal_cell_rcellvol(ADDRESS obj_var);
  void __cfml_python_MOD_set_crystal_cell_rcellvol(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_cell_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_crystal_cell_cell_std(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_crystal_cell_ang(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_crystal_cell_ang(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_crystal_cell_bl_minv(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_crystal_cell_bl_minv(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_gr(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_crystal_cell_gr(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_cr_orth_cel(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_crystal_cell_cr_orth_cel(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_bl_m(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_crystal_cell_bl_m(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_orth_cr_cel(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_crystal_cell_orth_cr_cel(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_carttype(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_crystal_cell_carttype(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_crystal_cell_rang(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_crystal_cell_rang(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_crystal_cell_rcell(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_crystal_cell_rcell(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_crystal_cell_cell(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_crystal_cell_cell(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_crystal_cell_gd(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_crystal_cell_gd(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_crystal_cell_cellvol(ADDRESS obj_var);
  void __cfml_python_MOD_set_crystal_cell_cellvol(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_crystal_cell_ang_std(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_crystal_cell_ang_std(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_crystal_cell_lcell(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_crystal_cell_lcell(ADDRESS obj_var, const int new_value[]);
}
#endif // SWIG

class crystal_cell_type {

public:
  crystal_cell_type();
  ~crystal_cell_type();

/*! \param[in] matkind OPTIONAL
*/
  void change_setting_cell(const FortranMatrix<float> *mat, crystal_cell_type* celln, const char* matkind=NULL);

  void get_cryst_family(std::string *car_family, std::string *car_symbol, std::string *car_system);

/*! \param[in] cartype OPTIONAL
*/
  void get_deriv_orth_cell(float* de_orthcell, const char* cartype=NULL);

/*! \param[in] tol OPTIONAL
*/
  void get_transfm_matrix(crystal_cell_type* cellb, FortranMatrix<float> *trm, int* ok, const float* tol=NULL);

  void get_twofold_axes(float tol, twofold_axes_type* twofold);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_lang(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_lang(const std::vector<int>* new_value);

  float get_crystal_cell_rcellvol();

  void set_crystal_cell_rcellvol(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_cell_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_cell_std(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_ang(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_ang(const std::vector<float>* new_value);

  void get_crystal_cell_bl_minv(FortranMatrix<float> *output_value);

  void set_crystal_cell_bl_minv(const FortranMatrix<float> *new_value);

  void get_crystal_cell_gr(FortranMatrix<float> *output_value);

  void set_crystal_cell_gr(const FortranMatrix<float> *new_value);

  void get_crystal_cell_cr_orth_cel(FortranMatrix<float> *output_value);

  void set_crystal_cell_cr_orth_cel(const FortranMatrix<float> *new_value);

  void get_crystal_cell_bl_m(FortranMatrix<float> *output_value);

  void set_crystal_cell_bl_m(const FortranMatrix<float> *new_value);

  void get_crystal_cell_orth_cr_cel(FortranMatrix<float> *output_value);

  void set_crystal_cell_orth_cr_cel(const FortranMatrix<float> *new_value);

  void get_crystal_cell_carttype(std::string *output_value);

  void set_crystal_cell_carttype(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_rang(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_rang(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_rcell(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_rcell(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_cell(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_cell(const std::vector<float>* new_value);

  void get_crystal_cell_gd(FortranMatrix<float> *output_value);

  void set_crystal_cell_gd(const FortranMatrix<float> *new_value);

  float get_crystal_cell_cellvol();

  void set_crystal_cell_cellvol(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_ang_std(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_ang_std(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_crystal_cell_lcell(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_crystal_cell_lcell(const std::vector<int>* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* CRYSTAL_CELL_TYPE_H_ */
