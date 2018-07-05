/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef TORSION_RESTRAINT_TYPE_H_
#define TORSION_RESTRAINT_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_torsion_restraint_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_torsion_restraint_type(ADDRESS caddr);
}
#endif // SWIG

class torsion_restraint_type {

public:
  torsion_restraint_type();
  ~torsion_restraint_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* TORSION_RESTRAINT_TYPE_H_ */
