/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGHD_LIST_TYPE_H_
#define MAGHD_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "maghd_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_maghd_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_maghd_list_type(ADDRESS caddr);
  void __cfml_python_MOD_get_maghd_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  void __cfml_python_MOD_set_maghd_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  int __cfml_python_MOD_get_maghd_list_nref(ADDRESS obj_var);
  void __cfml_python_MOD_set_maghd_list_nref(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class maghd_list_type {

public:
  maghd_list_type();
  ~maghd_list_type();

  void get_maghd_list_element(maghd_type* elem, int* ind);

  void set_maghd_list_element(maghd_type* elem, int* ind);

  int get_maghd_list_nref();

  void set_maghd_list_nref(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGHD_LIST_TYPE_H_ */
