/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef ZONE_AXIS_TYPE_H_
#define ZONE_AXIS_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_zone_axis_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_zone_axis_type(ADDRESS caddr);
  int __cfml_python_MOD_get_zone_axis_nlayer(ADDRESS obj_var);
  void __cfml_python_MOD_set_zone_axis_nlayer(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_zone_axis_rx(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_zone_axis_rx(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_zone_axis_ry(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_zone_axis_ry(ADDRESS obj_var, const int new_value[]);
  void __cfml_python_MOD_get_zone_axis_uvw(ADDRESS obj_var, int output_value[]);
  void __cfml_python_MOD_set_zone_axis_uvw(ADDRESS obj_var, const int new_value[]);
}
#endif // SWIG

class zone_axis_type {

public:
  zone_axis_type();
  ~zone_axis_type();

  int get_zone_axis_nlayer();

  void set_zone_axis_nlayer(int new_value);

/*! \param[out] output_value ARRAY
*/
  void get_zone_axis_rx(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_zone_axis_rx(const std::vector<int>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_zone_axis_ry(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_zone_axis_ry(const std::vector<int>* new_value);

/*! \param[out] output_value ARRAY
*/
  void get_zone_axis_uvw(std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
  void set_zone_axis_uvw(const std::vector<int>* new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* ZONE_AXIS_TYPE_H_ */
