/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef JOB_INFO_TYPE_H_
#define JOB_INFO_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_job_info_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_job_info_type(ADDRESS caddr);
  void __cfml_python_MOD_get_job_info_title(ADDRESS obj_var, char* output_value, int output_value_len__);
  void __cfml_python_MOD_set_job_info_title(ADDRESS obj_var, const char* new_value, int new_value_len__);
  int __cfml_python_MOD_get_job_info_num_phases(ADDRESS obj_var);
  void __cfml_python_MOD_set_job_info_num_phases(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_job_info_num_patterns(ADDRESS obj_var);
  void __cfml_python_MOD_set_job_info_num_patterns(ADDRESS obj_var, int* new_value);
  int __cfml_python_MOD_get_job_info_num_cmd(ADDRESS obj_var);
  void __cfml_python_MOD_set_job_info_num_cmd(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class job_info_type {

public:
  job_info_type();
  ~job_info_type();

  void get_job_info_title(std::string *output_value);

  void set_job_info_title(const char* new_value);

  int get_job_info_num_phases();

  void set_job_info_num_phases(int new_value);

  int get_job_info_num_patterns();

  void set_job_info_num_patterns(int new_value);

  int get_job_info_num_cmd();

  void set_job_info_num_cmd(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* JOB_INFO_TYPE_H_ */
