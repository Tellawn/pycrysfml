/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ILL_DATA_RECORD_TYPE_H_
#define ILL_DATA_RECORD_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_ill_data_record_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_ill_data_record_type(ADDRESS caddr);
}
#endif // SWIG

class ill_data_record_type {

public:
  ill_data_record_type();
  ~ill_data_record_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ILL_DATA_RECORD_TYPE_H_ */
