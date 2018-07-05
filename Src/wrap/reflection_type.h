/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef REFLECTION_TYPE_H_
#define REFLECTION_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_reflection_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_reflection_type(ADDRESS caddr);
  float __cfml_python_MOD_get_reflection_a(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_a(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_aa(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_aa(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_b(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_b(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_bb(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_bb(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_reflection_h(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_reflection_h(ADDRESS obj_var, const int new_value[]);
  float __cfml_python_MOD_get_reflection_sfo(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_sfo(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_s(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_s(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_fc(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_fc(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_w(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_w(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_reflection_phase(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_phase(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_reflection_mult(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_mult(ADDRESS obj_var, int* new_value);
  float __cfml_python_MOD_get_reflection_fo(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_fo(ADDRESS obj_var, float* new_value);
}
#endif // SWIG

class reflection_type {

public:
  reflection_type();
  ~reflection_type();

  float get_reflection_a();

  void set_reflection_a(float new_value);

  float get_reflection_aa();

  void set_reflection_aa(float new_value);

  float get_reflection_b();

  void set_reflection_b(float new_value);

  float get_reflection_bb();

  void set_reflection_bb(float new_value);

/*! \param[out] output_value ARRAY
*/
  void get_reflection_h(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_reflection_h(const std::vector<int>* new_value);

  float get_reflection_sfo();

  void set_reflection_sfo(float new_value);

  float get_reflection_s();

  void set_reflection_s(float new_value);

  float get_reflection_fc();

  void set_reflection_fc(float new_value);

  float get_reflection_w();

  void set_reflection_w(float new_value);

  float get_reflection_phase();

  void set_reflection_phase(float new_value);

  int get_reflection_mult();

  void set_reflection_mult(int new_value);

  float get_reflection_fo();

  void set_reflection_fo(float new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* REFLECTION_TYPE_H_ */
