/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef PSD_VAL_TYPE_H_
#define PSD_VAL_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_psd_val_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_psd_val_type(ADDRESS caddr);
}
#endif // SWIG

class psd_val_type {

public:
  psd_val_type();
  ~psd_val_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* PSD_VAL_TYPE_H_ */
