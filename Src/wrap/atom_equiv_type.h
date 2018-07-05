/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOM_EQUIV_TYPE_H_
#define ATOM_EQUIV_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atom_equiv_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atom_equiv_type(ADDRESS caddr);
  void __cfml_python_MOD_get_atom_equiv_chemsymb(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_atom_equiv_chemsymb(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_atom_equiv_mult(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_equiv_mult(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class atom_equiv_type {

public:
  atom_equiv_type();
  ~atom_equiv_type();

  void get_atom_equiv_chemsymb(std::string *output_value);

  void set_atom_equiv_chemsymb(const char* new_value);

  int get_atom_equiv_mult();

  void set_atom_equiv_mult(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOM_EQUIV_TYPE_H_ */
