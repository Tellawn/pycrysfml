/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef DIFFRACTION_PATTERN_TYPE_H_
#define DIFFRACTION_PATTERN_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_diffraction_pattern_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_diffraction_pattern_type(ADDRESS caddr);
  float __cfml_python_MOD_get_diffraction_pattern_scal(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_scal(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_conv(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_diffraction_pattern_conv(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_diffraction_pattern_instr(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_instr(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_diffraction_pattern_yax_text(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_yax_text(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_diffraction_pattern_diff_kind(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_diff_kind(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_diffraction_pattern_xmin(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_xmin(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_diffraction_pattern_norm_mon(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_norm_mon(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_diffraction_pattern_ymin(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_ymin(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_diffraction_pattern_monitor(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_monitor(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_filepath(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_filepath(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_diffraction_pattern_title(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_title(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_diffraction_pattern_filename(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_filename(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_diffraction_pattern_scat_var(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_scat_var(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_diffraction_pattern_step(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_step(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_x(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_diffraction_pattern_x(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_diffraction_pattern_ct_step(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_ct_step(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_xax_text(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_diffraction_pattern_xax_text(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_diffraction_pattern_ymax(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_ymax(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_diffraction_pattern_col_time(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_col_time(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_diffraction_pattern_tset(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_tset(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_diffraction_pattern_tsamp(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_tsamp(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_bgr(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_diffraction_pattern_bgr(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_diffraction_pattern_xmax(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_xmax(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_y(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_diffraction_pattern_y(ADDRESS obj_var, const float new_value[]);
  int __cfml_python_MOD_get_diffraction_pattern_npts(ADDRESS obj_var);
  void __cfml_python_MOD_set_diffraction_pattern_npts(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_diffraction_pattern_sigma(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_diffraction_pattern_sigma(ADDRESS obj_var, const float new_value[]);
}
#endif // SWIG

class diffraction_pattern_type {

public:
  diffraction_pattern_type();
  ~diffraction_pattern_type();

  float get_diffraction_pattern_scal();

  void set_diffraction_pattern_scal(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_diffraction_pattern_conv(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_diffraction_pattern_conv(const std::vector<float>* new_value);

  void get_diffraction_pattern_instr(std::string *output_value);

  void set_diffraction_pattern_instr(const char* new_value);

  void get_diffraction_pattern_yax_text(std::string *output_value);

  void set_diffraction_pattern_yax_text(const char* new_value);

  void get_diffraction_pattern_diff_kind(std::string *output_value);

  void set_diffraction_pattern_diff_kind(const char* new_value);

  float get_diffraction_pattern_xmin();

  void set_diffraction_pattern_xmin(float new_value);

  float get_diffraction_pattern_norm_mon();

  void set_diffraction_pattern_norm_mon(float new_value);

  float get_diffraction_pattern_ymin();

  void set_diffraction_pattern_ymin(float new_value);

  float get_diffraction_pattern_monitor();

  void set_diffraction_pattern_monitor(float new_value);

  void get_diffraction_pattern_filepath(std::string *output_value);

  void set_diffraction_pattern_filepath(const char* new_value);

  void get_diffraction_pattern_title(std::string *output_value);

  void set_diffraction_pattern_title(const char* new_value);

  void get_diffraction_pattern_filename(std::string *output_value);

  void set_diffraction_pattern_filename(const char* new_value);

  void get_diffraction_pattern_scat_var(std::string *output_value);

  void set_diffraction_pattern_scat_var(const char* new_value);

  float get_diffraction_pattern_step();

  void set_diffraction_pattern_step(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_diffraction_pattern_x(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_diffraction_pattern_x(const std::vector<float>* new_value);

  int get_diffraction_pattern_ct_step();

  void set_diffraction_pattern_ct_step(int new_value);

  void get_diffraction_pattern_xax_text(std::string *output_value);

  void set_diffraction_pattern_xax_text(const char* new_value);

  float get_diffraction_pattern_ymax();

  void set_diffraction_pattern_ymax(float new_value);

  float get_diffraction_pattern_col_time();

  void set_diffraction_pattern_col_time(float new_value);

  float get_diffraction_pattern_tset();

  void set_diffraction_pattern_tset(float new_value);

  float get_diffraction_pattern_tsamp();

  void set_diffraction_pattern_tsamp(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_diffraction_pattern_bgr(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_diffraction_pattern_bgr(const std::vector<float>* new_value);

  float get_diffraction_pattern_xmax();

  void set_diffraction_pattern_xmax(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_diffraction_pattern_y(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_diffraction_pattern_y(const std::vector<float>* new_value);

  int get_diffraction_pattern_npts();

  void set_diffraction_pattern_npts(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_diffraction_pattern_sigma(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_diffraction_pattern_sigma(const std::vector<float>* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* DIFFRACTION_PATTERN_TYPE_H_ */
