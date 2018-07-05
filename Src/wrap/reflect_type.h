/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef REFLECT_TYPE_H_
#define REFLECT_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_reflect_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_reflect_type(ADDRESS caddr);
  void __cfml_python_MOD_get_reflect_h(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_reflect_h(ADDRESS obj_var, const int new_value[]);
  float __cfml_python_MOD_get_reflect_s(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflect_s(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_reflect_mult(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflect_mult(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class reflect_type {

public:
  reflect_type();
  ~reflect_type();

/*! \param[out] output_value ARRAY
*/
  void get_reflect_h(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_reflect_h(const std::vector<int>* new_value);

  float get_reflect_s();

  void set_reflect_s(float new_value);

  int get_reflect_mult();

  void set_reflect_mult(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* REFLECT_TYPE_H_ */
