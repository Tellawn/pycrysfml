/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef WYCK_POS_TYPE_H_
#define WYCK_POS_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_wyck_pos_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_wyck_pos_type(ADDRESS caddr);
  int __cfml_python_MOD_get_wyck_pos_norb(ADDRESS obj_var);
  void __cfml_python_MOD_set_wyck_pos_norb(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_wyck_pos_str_orig(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_wyck_pos_str_orig(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_wyck_pos_multp(ADDRESS obj_var);
  void __cfml_python_MOD_set_wyck_pos_multp(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_wyck_pos_site(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_wyck_pos_site(ADDRESS obj_var, const char* new_value, int new_value_len__);
}
#endif // SWIG

class wyck_pos_type {

public:
  wyck_pos_type();
  ~wyck_pos_type();

  int get_wyck_pos_norb();

  void set_wyck_pos_norb(int new_value);

  void get_wyck_pos_str_orig(std::string *output_value);

  void set_wyck_pos_str_orig(const char* new_value);

  int get_wyck_pos_multp();

  void set_wyck_pos_multp(int new_value);

  void get_wyck_pos_site(std::string *output_value);

  void set_wyck_pos_site(const char* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* WYCK_POS_TYPE_H_ */
