/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef BVS_PAR_TYPE_H_
#define BVS_PAR_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_bvs_par_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_bvs_par_type(ADDRESS caddr);
}
#endif // SWIG

class bvs_par_type {

public:
  bvs_par_type();
  ~bvs_par_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* BVS_PAR_TYPE_H_ */
