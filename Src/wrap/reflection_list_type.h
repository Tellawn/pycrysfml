/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef REFLECTION_LIST_TYPE_H_
#define REFLECTION_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "reflection_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_reflection_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_reflection_list_type(ADDRESS caddr);
  void __cfml_python_MOD_get_reflection_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  void __cfml_python_MOD_set_reflection_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  int __cfml_python_MOD_get_reflection_list_nref(ADDRESS obj_var);
  void __cfml_python_MOD_set_reflection_list_nref(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class reflection_list_type {

public:
  reflection_list_type();
  ~reflection_list_type();

  void get_reflection_list_element(reflection_type* elem, int ind);

  void set_reflection_list_element(reflection_type* elem, int* ind);

  int get_reflection_list_nref();

  void set_reflection_list_nref(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* REFLECTION_LIST_TYPE_H_ */
