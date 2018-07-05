/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef REFLCT_ARRAY_LIST_H_
#define REFLCT_ARRAY_LIST_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_reflct_array_list(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_reflct_array_list(ADDRESS caddr);
}
#endif // SWIG

class reflct_array_list {

public:
  reflct_array_list();
  ~reflct_array_list();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* REFLCT_ARRAY_LIST_H_ */
