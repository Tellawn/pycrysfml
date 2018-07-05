/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef FILE_LIST_TYPE_H_
#define FILE_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_file_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_file_list_type(ADDRESS caddr);
  int __cfml_python_MOD_get_file_list_nlines(ADDRESS obj_var);
  void __cfml_python_MOD_set_file_list_nlines(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class file_list_type {

public:
  file_list_type();
  ~file_list_type();

  int get_file_list_nlines();

  void set_file_list_nlines(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* FILE_LIST_TYPE_H_ */
