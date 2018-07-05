/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGHD_TYPE_H_
#define MAGHD_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_maghd_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_maghd_type(ADDRESS caddr);
  float __cfml_python_MOD_get_maghd_sqamiv(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_sqamiv(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_maghd_num_k(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_num_k(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_maghd_h(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_maghd_h(ADDRESS obj_var, const float new_value[]);
  float __cfml_python_MOD_get_maghd_sqmiv(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_sqmiv(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_maghd_s(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_s(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_maghd_signp(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_signp(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_maghd_keqv_minus(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_keqv_minus(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class maghd_type {

public:
  maghd_type();
  ~maghd_type();

  float get_maghd_sqamiv();

  void set_maghd_sqamiv(float new_value);

  int get_maghd_num_k();

  void set_maghd_num_k(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_maghd_h(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_maghd_h(const std::vector<float>* new_value);

  float get_maghd_sqmiv();

  void set_maghd_sqmiv(float new_value);

  float get_maghd_s();

  void set_maghd_s(float new_value);

  float get_maghd_signp();

  void set_maghd_signp(float new_value);

  int get_maghd_keqv_minus();

  void set_maghd_keqv_minus(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGHD_TYPE_H_ */
