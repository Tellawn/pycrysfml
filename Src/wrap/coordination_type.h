/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef COORDINATION_TYPE_H_
#define COORDINATION_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_coordination_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_coordination_type(ADDRESS caddr);
}
#endif // SWIG

class coordination_type {

public:
  coordination_type();
  ~coordination_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* COORDINATION_TYPE_H_ */
