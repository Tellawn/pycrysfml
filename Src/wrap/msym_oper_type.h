/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MSYM_OPER_TYPE_H_
#define MSYM_OPER_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_msym_oper_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_msym_oper_type(ADDRESS caddr);
  float __cfml_python_MOD_get_msym_oper_phas(ADDRESS obj_var);
  void __cfml_python_MOD_set_msym_oper_phas(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_msym_oper_rot(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_msym_oper_rot(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class msym_oper_type {

public:
  msym_oper_type();
  ~msym_oper_type();

  float get_msym_oper_phas();

  void set_msym_oper_phas(float new_value);

  void get_msym_oper_rot(FortranMatrix<int> *output_value);

  void set_msym_oper_rot(const FortranMatrix<int> *new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MSYM_OPER_TYPE_H_ */
