/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef POWDER_NUMOR_TYPE_H_
#define POWDER_NUMOR_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_powder_numor_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_powder_numor_type(ADDRESS caddr);
  int __cfml_python_MOD_get_powder_numor_nbang(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_nbang(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_powder_numor_manip(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_manip(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_powder_numor_icalc(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_icalc(ADDRESS obj_var, int* new_value);
  float __cfml_python_MOD_get_powder_numor_monitor(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_monitor(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_powder_numor_nbdata(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_nbdata(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_powder_numor_title(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_powder_numor_title(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_powder_numor_numor(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_numor(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_powder_numor_instrm(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_powder_numor_instrm(ADDRESS obj_var, const char* new_value, int new_value_len__);
  float __cfml_python_MOD_get_powder_numor_wave(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_wave(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_powder_numor_header(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_powder_numor_header(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_powder_numor_scantype(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_powder_numor_scantype(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_powder_numor_icdesc(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_powder_numor_icdesc(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_powder_numor_angles(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_powder_numor_angles(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_powder_numor_time(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_time(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_powder_numor_nframes(ADDRESS obj_var);
  void __cfml_python_MOD_set_powder_numor_nframes(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_powder_numor_conditions(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_powder_numor_conditions(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_powder_numor_scans(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_powder_numor_scans(ADDRESS obj_var, const float new_value[]);
}
#endif // SWIG

class powder_numor_type {

public:
  powder_numor_type();
  ~powder_numor_type();

  int get_powder_numor_nbang();

  void set_powder_numor_nbang(int new_value);

  int get_powder_numor_manip();

  void set_powder_numor_manip(int new_value);

  int get_powder_numor_icalc();

  void set_powder_numor_icalc(int new_value);

  float get_powder_numor_monitor();

  void set_powder_numor_monitor(float new_value);

  int get_powder_numor_nbdata();

  void set_powder_numor_nbdata(int new_value);

  void get_powder_numor_title(std::string *output_value);

  void set_powder_numor_title(const char* new_value);

  int get_powder_numor_numor();

  void set_powder_numor_numor(int new_value);

  void get_powder_numor_instrm(std::string *output_value);

  void set_powder_numor_instrm(const char* new_value);

  float get_powder_numor_wave();

  void set_powder_numor_wave(float new_value);

  void get_powder_numor_header(std::string *output_value);

  void set_powder_numor_header(const char* new_value);

  void get_powder_numor_scantype(std::string *output_value);

  void set_powder_numor_scantype(const char* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_powder_numor_icdesc(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_powder_numor_icdesc(const std::vector<int>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_powder_numor_angles(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_powder_numor_angles(const std::vector<float>* new_value);

  float get_powder_numor_time();

  void set_powder_numor_time(float new_value);

  int get_powder_numor_nframes();

  void set_powder_numor_nframes(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_powder_numor_conditions(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_powder_numor_conditions(const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_powder_numor_scans(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_powder_numor_scans(const std::vector<float>* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* POWDER_NUMOR_TYPE_H_ */
