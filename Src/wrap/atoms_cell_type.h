/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOMS_CELL_TYPE_H_
#define ATOMS_CELL_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atoms_cell_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atoms_cell_type(ADDRESS caddr);
  int __cfml_python_MOD_get_atoms_cell_ndist(ADDRESS obj_var);
  void __cfml_python_MOD_set_atoms_cell_ndist(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_atoms_cell_nat(ADDRESS obj_var);
  void __cfml_python_MOD_set_atoms_cell_nat(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class atoms_cell_type {

public:
  atoms_cell_type();
  ~atoms_cell_type();

  int get_atoms_cell_ndist();

  void set_atoms_cell_ndist(int new_value);

  int get_atoms_cell_nat();

  void set_atoms_cell_nat(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOMS_CELL_TYPE_H_ */
