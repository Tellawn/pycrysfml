/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef SPGR_INFO_TYPE_H_
#define SPGR_INFO_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_spgr_info_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_spgr_info_type(ADDRESS caddr);
}
#endif // SWIG

class spgr_info_type {

public:
  spgr_info_type();
  ~spgr_info_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* SPGR_INFO_TYPE_H_ */
