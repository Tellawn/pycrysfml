/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef WYCK_INFO_TYPE_H_
#define WYCK_INFO_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_wyck_info_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_wyck_info_type(ADDRESS caddr);
}
#endif // SWIG

class wyck_info_type {

public:
  wyck_info_type();
  ~wyck_info_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* WYCK_INFO_TYPE_H_ */
