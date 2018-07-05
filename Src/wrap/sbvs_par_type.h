/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef SBVS_PAR_TYPE_H_
#define SBVS_PAR_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_sbvs_par_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_sbvs_par_type(ADDRESS caddr);
}
#endif // SWIG

class sbvs_par_type {

public:
  sbvs_par_type();
  ~sbvs_par_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* SBVS_PAR_TYPE_H_ */
