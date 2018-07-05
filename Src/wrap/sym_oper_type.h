/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef SYM_OPER_TYPE_H_
#define SYM_OPER_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_sym_oper_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_sym_oper_type(ADDRESS caddr);
  void __cfml_python_MOD_get_sym_oper_tr(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_sym_oper_tr(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_sym_oper_rot(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_sym_oper_rot(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class sym_oper_type {

public:
  sym_oper_type();
  ~sym_oper_type();

/*! \param[out] output_value ARRAY
*/
  void get_sym_oper_tr(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_sym_oper_tr(const std::vector<float>* new_value);

  void get_sym_oper_rot(FortranMatrix<int> *output_value);

  void set_sym_oper_rot(const FortranMatrix<int> *new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* SYM_OPER_TYPE_H_ */
