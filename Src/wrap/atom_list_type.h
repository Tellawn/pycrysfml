/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ATOM_LIST_TYPE_H_
#define ATOM_LIST_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "scattering_species_type.h"
#include "atom_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_atom_list_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_atom_list_type(ADDRESS caddr);
  void __cfml_structure_factors_MOD_set_form_factors(ADDRESS atm, ADDRESS scf, int* ok, char* mess, const float* lambda, const int* lun, ADDRESS add_scatt, int mess_len__);
  void __cfml_python_MOD_get_atom_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  void __cfml_python_MOD_set_atom_list_element(ADDRESS lst, ADDRESS elem, int* ind);
  int __cfml_python_MOD_get_atom_list_natoms(ADDRESS obj_var);
  void __cfml_python_MOD_set_atom_list_natoms(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class atom_list_type {

public:
  atom_list_type();
  ~atom_list_type();

/*! \param[in] lambda OPTIONAL
 *
 *  \param[in] lun OPTIONAL
 *
 *  \param[in] add_scatt OPTIONAL
*/
  void set_form_factors(scattering_species_type* scf, int* ok, std::string *mess, const float* lambda=NULL, const int* lun=NULL, scattering_species_type* add_scatt=NULL);

  void get_atom_list_element(atom_type* elem, int ind);

  void set_atom_list_element(atom_type* elem, int ind);

  int get_atom_list_natoms();

  void set_atom_list_natoms(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ATOM_LIST_TYPE_H_ */
