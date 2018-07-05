/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MATOM_LIST_TYPE_H_
#define MATOM_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "matom_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_matom_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_matom_list_type(ADDRESS caddr);
  void __cfml_python_MOD_get_matom_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  void __cfml_python_MOD_set_matom_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  int __cfml_python_MOD_get_matom_list_natoms(ADDRESS obj_var);
  void __cfml_python_MOD_set_matom_list_natoms(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class matom_list_type {

public:
  matom_list_type();
  ~matom_list_type();

  void get_matom_list_element(matom_type* elem, int ind);

  void set_matom_list_element(matom_type* elem, int ind);

  int get_matom_list_natoms();

  void set_matom_list_natoms(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MATOM_LIST_TYPE_H_ */
