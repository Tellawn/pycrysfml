/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef WYCKOFF_TYPE_H_
#define WYCKOFF_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_wyckoff_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_wyckoff_type(ADDRESS caddr);
  int __cfml_python_MOD_get_wyckoff_num_orbit(ADDRESS obj_var);
  void __cfml_python_MOD_set_wyckoff_num_orbit(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class wyckoff_type {

public:
  wyckoff_type();
  ~wyckoff_type();

  int get_wyckoff_num_orbit();

  void set_wyckoff_num_orbit(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* WYCKOFF_TYPE_H_ */
