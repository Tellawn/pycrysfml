/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef GROUP_K_TYPE_H_
#define GROUP_K_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "space_group_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_group_k_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_group_k_type(ADDRESS caddr);
  void __cfml_propagation_vectors_MOD_set_gk(ADDRESS gk, ADDRESS spgk, const int* ext);
}
#endif // SWIG

class group_k_type {

public:
  group_k_type();
  ~group_k_type();

/*! \param[in] ext OPTIONAL
*/
  void set_gk(space_group_type* spgk, const int* ext=NULL);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* GROUP_K_TYPE_H_ */
