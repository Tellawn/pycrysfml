/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef INTERVAL_TYPE_H_
#define INTERVAL_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_interval_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_interval_type(ADDRESS caddr);
  float __cfml_python_MOD_get_interval_maxb(ADDRESS obj_var);
  void __cfml_python_MOD_set_interval_maxb(ADDRESS obj_var, float* new_value);
  float __cfml_python_MOD_get_interval_mina(ADDRESS obj_var);
  void __cfml_python_MOD_set_interval_mina(ADDRESS obj_var, float* new_value);
}
#endif // SWIG

class interval_type {

public:
  interval_type();
  ~interval_type();

  float get_interval_maxb();

  void set_interval_maxb(float new_value);

  float get_interval_mina();

  void set_interval_mina(float new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* INTERVAL_TYPE_H_ */
