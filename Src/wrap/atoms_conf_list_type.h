/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOMS_CONF_LIST_TYPE_H_
#define ATOMS_CONF_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atoms_conf_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atoms_conf_list_type(ADDRESS caddr);
  void __cfml_bvs_energy_calc_MOD_set_table_bvel_params(ADDRESS a, const int* n_bvel, const char* bvel, const int* soft);
  void __cfml_bvs_energy_calc_MOD_set_table_d0_b(ADDRESS a, const int* n_bvsm, const char* bvs_m, const int* soft);
}
#endif // SWIG

class atoms_conf_list_type {

public:
  atoms_conf_list_type();
  ~atoms_conf_list_type();

/*! \param[in] n_bvel OPTIONAL
 *
 *  \param[in] soft OPTIONAL
*/
  void set_table_bvel_params(const int* n_bvel=NULL, const int* soft=NULL);

/*! \param[in] n_bvsm OPTIONAL
 *
 *  \param[in] soft OPTIONAL
*/
  void set_table_d0_b(const int* n_bvsm=NULL, const int* soft=NULL);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOMS_CONF_LIST_TYPE_H_ */
