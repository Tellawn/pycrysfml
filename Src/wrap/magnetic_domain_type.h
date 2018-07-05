/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#ifndef MAGNETIC_DOMAIN_TYPE_H_
#define MAGNETIC_DOMAIN_TYPE_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "FortranMatrix.h"

extern "C" {
  void __cppwrappers_MOD_allocate1_magnetic_domain_type(ADDRESS *caddr);
  void __cppwrappers_MOD_deallocate1_magnetic_domain_type(ADDRESS caddr);
  int __cfml_python_MOD_get_magnetic_domain_chir(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_domain_chir(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_domain_pop_std(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_magnetic_domain_pop_std(ADDRESS obj_var, float* new_value);
  void __cfml_python_MOD_get_magnetic_domain_mpop(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_magnetic_domain_mpop(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_magnetic_domain_nd(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_domain_nd(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_domain_lpop(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_magnetic_domain_lpop(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_domain_pop(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_magnetic_domain_pop(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_magnetic_domain_twin(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_domain_twin(ADDRESS obj_var, int* new_value);
  void __cfml_python_MOD_get_magnetic_domain_dmat(ADDRESS obj_var, int* output_value);
  void __cfml_python_MOD_set_magnetic_domain_dmat(ADDRESS obj_var, const int* new_value);
  void __cfml_python_MOD_get_magnetic_domain_dt(ADDRESS obj_var, float* output_value);
  void __cfml_python_MOD_set_magnetic_domain_dt(ADDRESS obj_var, float* new_value);
  int __cfml_python_MOD_get_magnetic_domain_trans(ADDRESS obj_var);
  void __cfml_python_MOD_set_magnetic_domain_trans(ADDRESS obj_var, int* new_value);
}
#endif // SWIG

class magnetic_domain_type {

public:
  magnetic_domain_type();
  ~magnetic_domain_type();

  int get_magnetic_domain_chir();

  void set_magnetic_domain_chir(int new_value);

  void get_magnetic_domain_pop_std(FortranMatrix<float> *output_value);

  void set_magnetic_domain_pop_std(const FortranMatrix<float> *new_value);

  void get_magnetic_domain_mpop(FortranMatrix<float> *output_value);

  void set_magnetic_domain_mpop(const FortranMatrix<float> *new_value);

  int get_magnetic_domain_nd();

  void set_magnetic_domain_nd(int new_value);

  void get_magnetic_domain_lpop(FortranMatrix<int> *output_value);

  void set_magnetic_domain_lpop(const FortranMatrix<int> *new_value);

  void get_magnetic_domain_pop(FortranMatrix<float> *output_value);

  void set_magnetic_domain_pop(const FortranMatrix<float> *new_value);

  int get_magnetic_domain_twin();

  void set_magnetic_domain_twin(int new_value);

  void get_magnetic_domain_dmat(int* output_value);

  void set_magnetic_domain_dmat(const int* new_value);

  void get_magnetic_domain_dt(FortranMatrix<float> *output_value);

  void set_magnetic_domain_dt(const FortranMatrix<float> *new_value);

  int get_magnetic_domain_trans();

  void set_magnetic_domain_trans(int new_value);

  ADDRESS data_ptr;

private:
  bool initialized;
};

#endif /* MAGNETIC_DOMAIN_TYPE_H_ */
