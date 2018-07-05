/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOM_EQUIV_LIST_TYPE_H_
#define ATOM_EQUIV_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "atom_equiv_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atom_equiv_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atom_equiv_list_type(ADDRESS caddr);
  void __cfml_python_MOD_get_atom_equiv_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  void __cfml_python_MOD_set_atom_equiv_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  int __cfml_python_MOD_get_atom_equiv_list_nauas(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_equiv_list_nauas(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class atom_equiv_list_type {

public:
  atom_equiv_list_type();
  ~atom_equiv_list_type();

  void get_atom_equiv_list_element(atom_equiv_type* elem, int* ind);

  void set_atom_equiv_list_element(atom_equiv_type* elem, int* ind);

  int get_atom_equiv_list_nauas();

  void set_atom_equiv_list_nauas(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOM_EQUIV_LIST_TYPE_H_ */
