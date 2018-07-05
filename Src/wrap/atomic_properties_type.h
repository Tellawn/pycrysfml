/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOMIC_PROPERTIES_TYPE_H_
#define ATOMIC_PROPERTIES_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atomic_properties_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atomic_properties_type(ADDRESS caddr);
}
#endif // SWIG

class atomic_properties_type {

public:
  atomic_properties_type();
  ~atomic_properties_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOMIC_PROPERTIES_TYPE_H_ */
