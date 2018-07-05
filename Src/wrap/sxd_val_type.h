/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef SXD_VAL_TYPE_H_
#define SXD_VAL_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_sxd_val_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_sxd_val_type(ADDRESS caddr);
}
#endif // SWIG

class sxd_val_type {

public:
  sxd_val_type();
  ~sxd_val_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* SXD_VAL_TYPE_H_ */
