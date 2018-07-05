/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MOLECULE_TYPE_H_
#define MOLECULE_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_molecule_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_molecule_type(ADDRESS caddr);
}
#endif // SWIG

class molecule_type {

public:
  molecule_type();
  ~molecule_type();

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MOLECULE_TYPE_H_ */
