/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef CHEM_INFO_TYPE_H_
#define CHEM_INFO_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_chem_info_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_chem_info_type(ADDRESS caddr);
}
#endif // SWIG

class chem_info_type {

public:
  chem_info_type();
  ~chem_info_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* CHEM_INFO_TYPE_H_ */
