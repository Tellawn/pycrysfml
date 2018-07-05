/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef BASIC_NUMC_TYPE_H_
#define BASIC_NUMC_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_basic_numc_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_basic_numc_type(ADDRESS caddr);
}
#endif // SWIG

class basic_numc_type {

public:
  basic_numc_type();
  ~basic_numc_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* BASIC_NUMC_TYPE_H_ */
