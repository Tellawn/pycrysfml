/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef GENERIC_NUMOR_TYPE_H_
#define GENERIC_NUMOR_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_generic_numor_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_generic_numor_type(ADDRESS caddr);
}
#endif // SWIG

class generic_numor_type {

public:
  generic_numor_type();
  ~generic_numor_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* GENERIC_NUMOR_TYPE_H_ */
