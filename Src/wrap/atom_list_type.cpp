/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "atom_list_type.h"

// Constructor:
atom_list_type::atom_list_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_atom_list_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
atom_list_type::~atom_list_type() {
  __cppwrappers_MOD_deallocate1_atom_list_type(data_ptr); // Deallocate Fortran derived type
}

void atom_list_type::set_form_factors(scattering_species_type* scf, int* ok, std::string *mess, const float* lambda, const int* lun, scattering_species_type* add_scatt) {
  int mess_len__ = 0;
  if (mess) mess_len__ = mess->length();
  // Declare memory to store output character data
  char mess_c__[mess_len__+1];
  mess_c__[mess_len__] = '\0';
  __cfml_structure_factors_MOD_set_form_factors(data_ptr, scf->data_ptr, ok, mess ? mess_c__ : NULL, lambda, lun, add_scatt ? add_scatt->data_ptr : NULL, mess_len__);
  if (mess) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=mess_len__-1; mess_c__[i]==' '; i--) mess_c__[i] = '\0';
    mess->assign(mess_c__);
  }
}

void atom_list_type::get_atom_list_element(atom_type* elem, int ind) {
  __cfml_python_MOD_get_atom_list_element(data_ptr, elem->data_ptr, &ind);
}

void atom_list_type::set_atom_list_element(atom_type* elem, int ind) {
  __cfml_python_MOD_set_atom_list_element(data_ptr, elem->data_ptr, &ind);
}

int atom_list_type::get_atom_list_natoms() {
  return __cfml_python_MOD_get_atom_list_natoms(data_ptr);
}

void atom_list_type::set_atom_list_natoms(int new_value) {
  __cfml_python_MOD_set_atom_list_natoms(data_ptr, &new_value);
}

