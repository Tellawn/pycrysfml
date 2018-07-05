/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef POINT_LIST_TYPE_H_
#define POINT_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_point_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_point_list_type(ADDRESS caddr);
}
#endif // SWIG

class point_list_type {

public:
  point_list_type();
  ~point_list_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* POINT_LIST_TYPE_H_ */
