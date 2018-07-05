/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGH_TYPE_H_
#define MAGH_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_magh_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_magh_type(ADDRESS caddr);
  void __cfml_python_MOD_get_msf(ADDRESS mh, float output[]);
  void __cfml_python_MOD_set_msf(ADDRESS mh, const float value[]);
  void __cfml_python_MOD_get_miv(ADDRESS mh, float output[]);
  void __cfml_python_MOD_set_miv(ADDRESS mh, const float value[]);
  int __cfml_python_MOD_get_magh_num_k(ADDRESS obj_var);
  void __cfml_python_MOD_set_magh_num_k(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magh_h(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_magh_h(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_magh_sqmiv(ADDRESS obj_var);
  void __cfml_python_MOD_set_magh_sqmiv(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_magh_s(ADDRESS obj_var);
  void __cfml_python_MOD_set_magh_s(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_magh_signp(ADDRESS obj_var);
  void __cfml_python_MOD_set_magh_signp(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_magh_keqv_minus(ADDRESS obj_var);
  void __cfml_python_MOD_set_magh_keqv_minus(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_magh_mult(ADDRESS obj_var);
  void __cfml_python_MOD_set_magh_mult(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class magh_type {

public:
  magh_type();
  ~magh_type();

/*! \param[out] output ARRAY
*/
  void get_msf(std::vector<float>* output);

/*! \param[in] value ARRAY
*/
  void set_msf(const std::vector<float>* value);

/*! \param[out] output ARRAY
*/
  void get_miv(std::vector<float>* output);

/*! \param[in] value ARRAY
*/
  void set_miv(const std::vector<float>* value);

  int get_magh_num_k();

  void set_magh_num_k(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_magh_h(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magh_h(const std::vector<float>* new_value);

  float get_magh_sqmiv();

  void set_magh_sqmiv(float new_value);

  float get_magh_s();

  void set_magh_s(float new_value);

  float get_magh_signp();

  void set_magh_signp(float new_value);

  int get_magh_keqv_minus();

  void set_magh_keqv_minus(int new_value);

  int get_magh_mult();

  void set_magh_mult(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGH_TYPE_H_ */
