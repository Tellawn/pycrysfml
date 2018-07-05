/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef BVEL_PAR_TYPE_H_
#define BVEL_PAR_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_bvel_par_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_bvel_par_type(ADDRESS caddr);
}
#endif // SWIG

class bvel_par_type {

public:
  bvel_par_type();
  ~bvel_par_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* BVEL_PAR_TYPE_H_ */
