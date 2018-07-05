/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGNETIC_GROUP_TYPE_H_
#define MAGNETIC_GROUP_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "space_group_type.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_magnetic_group_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_magnetic_group_type(ADDRESS caddr);
  void __cfml_python_MOD_get_magnetic_group_tinv(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_magnetic_group_tinv(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_magnetic_group_shubnikov(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_magnetic_group_shubnikov(ADDRESS obj_var, const char* new_value, int new_value_len__);
  void __cfml_python_MOD_get_magnetic_group_spg(ADDRESS obj_var, ADDRESS output_value);
  void __cfml_python_MOD_set_magnetic_group_spg(ADDRESS obj_var, ADDRESS new_value);
}
#endif // SWIG

class magnetic_group_type {

public:
  magnetic_group_type();
  ~magnetic_group_type();

/*! \param[out] output_value ARRAY
*/
  void get_magnetic_group_tinv(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_magnetic_group_tinv(const std::vector<int>* new_value);

  void get_magnetic_group_shubnikov(std::string *output_value);

  void set_magnetic_group_shubnikov(const char* new_value);

  void get_magnetic_group_spg(space_group_type* output_value);

  void set_magnetic_group_spg(space_group_type* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGNETIC_GROUP_TYPE_H_ */
