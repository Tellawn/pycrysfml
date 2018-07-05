/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef POLAR_INFO_TYPE_H_
#define POLAR_INFO_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_polar_info_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_polar_info_type(ADDRESS caddr);
}
#endif // SWIG

class polar_info_type {

public:
  polar_info_type();
  ~polar_info_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* POLAR_INFO_TYPE_H_ */
