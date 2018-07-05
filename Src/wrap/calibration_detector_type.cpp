/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "calibration_detector_type.h"

// Constructor:
calibration_detector_type::calibration_detector_type() {
  data_ptr = NULL;
  __cppwrappers_MOD_allocate1_calibration_detector_type(&data_ptr); // Allocate Fortran derived type
  initialized = false;
}

// Destructor:
calibration_detector_type::~calibration_detector_type() {
  __cppwrappers_MOD_deallocate1_calibration_detector_type(data_ptr); // Deallocate Fortran derived type
}

