/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef NS_SYM_OPER_TYPE_H_
#define NS_SYM_OPER_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_ns_sym_oper_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_ns_sym_oper_type(ADDRESS caddr);
  void __cfml_python_MOD_get_ns_sym_oper_tr(ADDRESS obj_var, float output_value[]);
  void __cfml_python_MOD_set_ns_sym_oper_tr(ADDRESS obj_var, const float new_value[]);
  void __cfml_python_MOD_get_ns_sym_oper_rot(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_ns_sym_oper_rot(ADDRESS obj_var, float* new_value);
}
#endif // SWIG

class ns_sym_oper_type {

public:
  ns_sym_oper_type();
  ~ns_sym_oper_type();

/*! \param[out] output_value ARRAY
*/
  void get_ns_sym_oper_tr(std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_ns_sym_oper_tr(const std::vector<float>* new_value);

  void get_ns_sym_oper_rot(FortranMatrix<float> *output_value);

  void set_ns_sym_oper_rot(const FortranMatrix<float> *new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* NS_SYM_OPER_TYPE_H_ */
