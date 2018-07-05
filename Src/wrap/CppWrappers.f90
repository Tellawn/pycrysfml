MODULE CppWrappers

USE cfml_symmetry_tables
USE cfml_molecular_crystals
USE cfml_crystal_metrics
USE cfml_scattering_chemical_tables
USE cfml_keywords_code_parser
USE cfml_io_formats
USE cfml_python
USE cfml_ill_instrm_data
USE cfml_maps_calculations
USE cfml_powderprofiles_tof
USE cfml_geometry_sxtal
USE cfml_geometry_calc
USE cfml_propagation_vectors
USE cfml_reflections_utilities
USE cfml_atom_typedef
USE cfml_bvspar
USE cfml_optimization_general
USE cfml_magnetic_structure_factors
USE cfml_magnetic_symmetry
USE cfml_crystallographic_symmetry
USE cfml_structure_factors
USE cfml_polarimetry
USE cfml_fft
USE cfml_diffraction_patterns
USE cfml_bvs_energy_calc
USE ISO_C_BINDING

CONTAINS

 SUBROUTINE allocate1_atoms_conf_list_type(atoms_conf_list_type_cptr)
    TYPE (C_PTR) :: atoms_conf_list_type_cptr

    TYPE (atoms_conf_list_type), POINTER :: atoms_conf_list_type_fptr

    ALLOCATE( atoms_conf_list_type_fptr )
    atoms_conf_list_type_cptr = C_LOC(atoms_conf_list_type_fptr)
  END SUBROUTINE allocate1_atoms_conf_list_type

 SUBROUTINE deallocate1_atoms_conf_list_type(atoms_conf_list_type_cptr)
    TYPE (C_PTR), VALUE :: atoms_conf_list_type_cptr

    TYPE (atoms_conf_list_type), POINTER :: atoms_conf_list_type_fptr

    CALL C_F_POINTER(atoms_conf_list_type_cptr, atoms_conf_list_type_fptr)
    DEALLOCATE( atoms_conf_list_type_fptr )
  END SUBROUTINE deallocate1_atoms_conf_list_type

 SUBROUTINE allocate1_magsymm_k_type(magsymm_k_type_cptr)
    TYPE (C_PTR) :: magsymm_k_type_cptr

    TYPE (magsymm_k_type), POINTER :: magsymm_k_type_fptr

    ALLOCATE( magsymm_k_type_fptr )
    magsymm_k_type_cptr = C_LOC(magsymm_k_type_fptr)
  END SUBROUTINE allocate1_magsymm_k_type

 SUBROUTINE deallocate1_magsymm_k_type(magsymm_k_type_cptr)
    TYPE (C_PTR), VALUE :: magsymm_k_type_cptr

    TYPE (magsymm_k_type), POINTER :: magsymm_k_type_fptr

    CALL C_F_POINTER(magsymm_k_type_cptr, magsymm_k_type_fptr)
    DEALLOCATE( magsymm_k_type_fptr )
  END SUBROUTINE deallocate1_magsymm_k_type

 SUBROUTINE allocate1_magh_list_type(magh_list_type_cptr)
    TYPE (C_PTR) :: magh_list_type_cptr

    TYPE (magh_list_type), POINTER :: magh_list_type_fptr

    ALLOCATE( magh_list_type_fptr )
    magh_list_type_cptr = C_LOC(magh_list_type_fptr)
  END SUBROUTINE allocate1_magh_list_type

 SUBROUTINE deallocate1_magh_list_type(magh_list_type_cptr)
    TYPE (C_PTR), VALUE :: magh_list_type_cptr

    TYPE (magh_list_type), POINTER :: magh_list_type_fptr

    CALL C_F_POINTER(magh_list_type_cptr, magh_list_type_fptr)
    DEALLOCATE( magh_list_type_fptr )
  END SUBROUTINE deallocate1_magh_list_type

 SUBROUTINE allocate1_magnetic_form_type(magnetic_form_type_cptr)
    TYPE (C_PTR) :: magnetic_form_type_cptr

    TYPE (magnetic_form_type), POINTER :: magnetic_form_type_fptr

    ALLOCATE( magnetic_form_type_fptr )
    magnetic_form_type_cptr = C_LOC(magnetic_form_type_fptr)
  END SUBROUTINE allocate1_magnetic_form_type

 SUBROUTINE deallocate1_magnetic_form_type(magnetic_form_type_cptr)
    TYPE (C_PTR), VALUE :: magnetic_form_type_cptr

    TYPE (magnetic_form_type), POINTER :: magnetic_form_type_fptr

    CALL C_F_POINTER(magnetic_form_type_cptr, magnetic_form_type_fptr)
    DEALLOCATE( magnetic_form_type_fptr )
  END SUBROUTINE deallocate1_magnetic_form_type

 SUBROUTINE allocate1_atom_list_type(atom_list_type_cptr)
    TYPE (C_PTR) :: atom_list_type_cptr

    TYPE (atom_list_type), POINTER :: atom_list_type_fptr

    ALLOCATE( atom_list_type_fptr )
    atom_list_type_cptr = C_LOC(atom_list_type_fptr)
  END SUBROUTINE allocate1_atom_list_type

 SUBROUTINE deallocate1_atom_list_type(atom_list_type_cptr)
    TYPE (C_PTR), VALUE :: atom_list_type_cptr

    TYPE (atom_list_type), POINTER :: atom_list_type_fptr

    CALL C_F_POINTER(atom_list_type_cptr, atom_list_type_fptr)
    DEALLOCATE( atom_list_type_fptr )
  END SUBROUTINE deallocate1_atom_list_type

 SUBROUTINE allocate1_atom_equiv_type(atom_equiv_type_cptr)
    TYPE (C_PTR) :: atom_equiv_type_cptr

    TYPE (atom_equiv_type), POINTER :: atom_equiv_type_fptr

    ALLOCATE( atom_equiv_type_fptr )
    atom_equiv_type_cptr = C_LOC(atom_equiv_type_fptr)
  END SUBROUTINE allocate1_atom_equiv_type

 SUBROUTINE deallocate1_atom_equiv_type(atom_equiv_type_cptr)
    TYPE (C_PTR), VALUE :: atom_equiv_type_cptr

    TYPE (atom_equiv_type), POINTER :: atom_equiv_type_fptr

    CALL C_F_POINTER(atom_equiv_type_cptr, atom_equiv_type_fptr)
    DEALLOCATE( atom_equiv_type_fptr )
  END SUBROUTINE deallocate1_atom_equiv_type

 SUBROUTINE allocate1_sxtal_orient_type(sxtal_orient_type_cptr)
    TYPE (C_PTR) :: sxtal_orient_type_cptr

    TYPE (sxtal_orient_type), POINTER :: sxtal_orient_type_fptr

    ALLOCATE( sxtal_orient_type_fptr )
    sxtal_orient_type_cptr = C_LOC(sxtal_orient_type_fptr)
  END SUBROUTINE allocate1_sxtal_orient_type

 SUBROUTINE deallocate1_sxtal_orient_type(sxtal_orient_type_cptr)
    TYPE (C_PTR), VALUE :: sxtal_orient_type_cptr

    TYPE (sxtal_orient_type), POINTER :: sxtal_orient_type_fptr

    CALL C_F_POINTER(sxtal_orient_type_cptr, sxtal_orient_type_fptr)
    DEALLOCATE( sxtal_orient_type_fptr )
  END SUBROUTINE deallocate1_sxtal_orient_type

 SUBROUTINE allocate1_diffractometer_type(diffractometer_type_cptr)
    TYPE (C_PTR) :: diffractometer_type_cptr

    TYPE (diffractometer_type), POINTER :: diffractometer_type_fptr

    ALLOCATE( diffractometer_type_fptr )
    diffractometer_type_cptr = C_LOC(diffractometer_type_fptr)
  END SUBROUTINE allocate1_diffractometer_type

 SUBROUTINE deallocate1_diffractometer_type(diffractometer_type_cptr)
    TYPE (C_PTR), VALUE :: diffractometer_type_cptr

    TYPE (diffractometer_type), POINTER :: diffractometer_type_fptr

    CALL C_F_POINTER(diffractometer_type_cptr, diffractometer_type_fptr)
    DEALLOCATE( diffractometer_type_fptr )
  END SUBROUTINE deallocate1_diffractometer_type

 SUBROUTINE allocate1_magnetic_space_group_type(magnetic_space_group_type_cptr)
    TYPE (C_PTR) :: magnetic_space_group_type_cptr

    TYPE (magnetic_space_group_type), POINTER :: magnetic_space_group_type_fptr

    ALLOCATE( magnetic_space_group_type_fptr )
    magnetic_space_group_type_cptr = C_LOC(magnetic_space_group_type_fptr)
  END SUBROUTINE allocate1_magnetic_space_group_type

 SUBROUTINE deallocate1_magnetic_space_group_type(magnetic_space_group_type_cptr)
    TYPE (C_PTR), VALUE :: magnetic_space_group_type_cptr

    TYPE (magnetic_space_group_type), POINTER :: magnetic_space_group_type_fptr

    CALL C_F_POINTER(magnetic_space_group_type_cptr, magnetic_space_group_type_fptr)
    DEALLOCATE( magnetic_space_group_type_fptr )
  END SUBROUTINE deallocate1_magnetic_space_group_type

 SUBROUTINE allocate1_reflect_type(reflect_type_cptr)
    TYPE (C_PTR) :: reflect_type_cptr

    TYPE (reflect_type), POINTER :: reflect_type_fptr

    ALLOCATE( reflect_type_fptr )
    reflect_type_cptr = C_LOC(reflect_type_fptr)
  END SUBROUTINE allocate1_reflect_type

 SUBROUTINE deallocate1_reflect_type(reflect_type_cptr)
    TYPE (C_PTR), VALUE :: reflect_type_cptr

    TYPE (reflect_type), POINTER :: reflect_type_fptr

    CALL C_F_POINTER(reflect_type_cptr, reflect_type_fptr)
    DEALLOCATE( reflect_type_fptr )
  END SUBROUTINE deallocate1_reflect_type

 SUBROUTINE allocate1_polar_calc_list_type(polar_calc_list_type_cptr)
    TYPE (C_PTR) :: polar_calc_list_type_cptr

    TYPE (polar_calc_list_type), POINTER :: polar_calc_list_type_fptr

    ALLOCATE( polar_calc_list_type_fptr )
    polar_calc_list_type_cptr = C_LOC(polar_calc_list_type_fptr)
  END SUBROUTINE allocate1_polar_calc_list_type

 SUBROUTINE deallocate1_polar_calc_list_type(polar_calc_list_type_cptr)
    TYPE (C_PTR), VALUE :: polar_calc_list_type_cptr

    TYPE (polar_calc_list_type), POINTER :: polar_calc_list_type_fptr

    CALL C_F_POINTER(polar_calc_list_type_cptr, polar_calc_list_type_fptr)
    DEALLOCATE( polar_calc_list_type_fptr )
  END SUBROUTINE deallocate1_polar_calc_list_type

 SUBROUTINE allocate1_diffraction_pattern_type(diffraction_pattern_type_cptr)
    TYPE (C_PTR) :: diffraction_pattern_type_cptr

    TYPE (diffraction_pattern_type), POINTER :: diffraction_pattern_type_fptr

    ALLOCATE( diffraction_pattern_type_fptr )
    diffraction_pattern_type_cptr = C_LOC(diffraction_pattern_type_fptr)
  END SUBROUTINE allocate1_diffraction_pattern_type

 SUBROUTINE deallocate1_diffraction_pattern_type(diffraction_pattern_type_cptr)
    TYPE (C_PTR), VALUE :: diffraction_pattern_type_cptr

    TYPE (diffraction_pattern_type), POINTER :: diffraction_pattern_type_fptr

    CALL C_F_POINTER(diffraction_pattern_type_cptr, diffraction_pattern_type_fptr)
    DEALLOCATE( diffraction_pattern_type_fptr )
  END SUBROUTINE deallocate1_diffraction_pattern_type

 SUBROUTINE allocate1_twofold_axes_type(twofold_axes_type_cptr)
    TYPE (C_PTR) :: twofold_axes_type_cptr

    TYPE (twofold_axes_type), POINTER :: twofold_axes_type_fptr

    ALLOCATE( twofold_axes_type_fptr )
    twofold_axes_type_cptr = C_LOC(twofold_axes_type_fptr)
  END SUBROUTINE allocate1_twofold_axes_type

 SUBROUTINE deallocate1_twofold_axes_type(twofold_axes_type_cptr)
    TYPE (C_PTR), VALUE :: twofold_axes_type_cptr

    TYPE (twofold_axes_type), POINTER :: twofold_axes_type_fptr

    CALL C_F_POINTER(twofold_axes_type_cptr, twofold_axes_type_fptr)
    DEALLOCATE( twofold_axes_type_fptr )
  END SUBROUTINE deallocate1_twofold_axes_type

 SUBROUTINE allocate1_molecule_type(molecule_type_cptr)
    TYPE (C_PTR) :: molecule_type_cptr

    TYPE (molecule_type), POINTER :: molecule_type_fptr

    ALLOCATE( molecule_type_fptr )
    molecule_type_cptr = C_LOC(molecule_type_fptr)
  END SUBROUTINE allocate1_molecule_type

 SUBROUTINE deallocate1_molecule_type(molecule_type_cptr)
    TYPE (C_PTR), VALUE :: molecule_type_cptr

    TYPE (molecule_type), POINTER :: molecule_type_fptr

    CALL C_F_POINTER(molecule_type_cptr, molecule_type_fptr)
    DEALLOCATE( molecule_type_fptr )
  END SUBROUTINE deallocate1_molecule_type

 SUBROUTINE allocate1_cube_info_type(cube_info_type_cptr)
    TYPE (C_PTR) :: cube_info_type_cptr

    TYPE (cube_info_type), POINTER :: cube_info_type_fptr

    ALLOCATE( cube_info_type_fptr )
    cube_info_type_cptr = C_LOC(cube_info_type_fptr)
  END SUBROUTINE allocate1_cube_info_type

 SUBROUTINE deallocate1_cube_info_type(cube_info_type_cptr)
    TYPE (C_PTR), VALUE :: cube_info_type_cptr

    TYPE (cube_info_type), POINTER :: cube_info_type_fptr

    CALL C_F_POINTER(cube_info_type_cptr, cube_info_type_fptr)
    DEALLOCATE( cube_info_type_fptr )
  END SUBROUTINE deallocate1_cube_info_type

 SUBROUTINE allocate1_ns_sym_oper_type(ns_sym_oper_type_cptr)
    TYPE (C_PTR) :: ns_sym_oper_type_cptr

    TYPE (ns_sym_oper_type), POINTER :: ns_sym_oper_type_fptr

    ALLOCATE( ns_sym_oper_type_fptr )
    ns_sym_oper_type_cptr = C_LOC(ns_sym_oper_type_fptr)
  END SUBROUTINE allocate1_ns_sym_oper_type

 SUBROUTINE deallocate1_ns_sym_oper_type(ns_sym_oper_type_cptr)
    TYPE (C_PTR), VALUE :: ns_sym_oper_type_cptr

    TYPE (ns_sym_oper_type), POINTER :: ns_sym_oper_type_fptr

    CALL C_F_POINTER(ns_sym_oper_type_cptr, ns_sym_oper_type_fptr)
    DEALLOCATE( ns_sym_oper_type_fptr )
  END SUBROUTINE deallocate1_ns_sym_oper_type

 SUBROUTINE allocate1_table_equiv_type(table_equiv_type_cptr)
    TYPE (C_PTR) :: table_equiv_type_cptr

    TYPE (table_equiv_type), POINTER :: table_equiv_type_fptr

    ALLOCATE( table_equiv_type_fptr )
    table_equiv_type_cptr = C_LOC(table_equiv_type_fptr)
  END SUBROUTINE allocate1_table_equiv_type

 SUBROUTINE deallocate1_table_equiv_type(table_equiv_type_cptr)
    TYPE (C_PTR), VALUE :: table_equiv_type_cptr

    TYPE (table_equiv_type), POINTER :: table_equiv_type_fptr

    CALL C_F_POINTER(table_equiv_type_cptr, table_equiv_type_fptr)
    DEALLOCATE( table_equiv_type_fptr )
  END SUBROUTINE deallocate1_table_equiv_type

 SUBROUTINE allocate1_angle_restraint_type(angle_restraint_type_cptr)
    TYPE (C_PTR) :: angle_restraint_type_cptr

    TYPE (angle_restraint_type), POINTER :: angle_restraint_type_fptr

    ALLOCATE( angle_restraint_type_fptr )
    angle_restraint_type_cptr = C_LOC(angle_restraint_type_fptr)
  END SUBROUTINE allocate1_angle_restraint_type

 SUBROUTINE deallocate1_angle_restraint_type(angle_restraint_type_cptr)
    TYPE (C_PTR), VALUE :: angle_restraint_type_cptr

    TYPE (angle_restraint_type), POINTER :: angle_restraint_type_fptr

    CALL C_F_POINTER(angle_restraint_type_cptr, angle_restraint_type_fptr)
    DEALLOCATE( angle_restraint_type_fptr )
  END SUBROUTINE deallocate1_angle_restraint_type

 SUBROUTINE allocate1_polar_info_type(polar_info_type_cptr)
    TYPE (C_PTR) :: polar_info_type_cptr

    TYPE (polar_info_type), POINTER :: polar_info_type_fptr

    ALLOCATE( polar_info_type_fptr )
    polar_info_type_cptr = C_LOC(polar_info_type_fptr)
  END SUBROUTINE allocate1_polar_info_type

 SUBROUTINE deallocate1_polar_info_type(polar_info_type_cptr)
    TYPE (C_PTR), VALUE :: polar_info_type_cptr

    TYPE (polar_info_type), POINTER :: polar_info_type_fptr

    CALL C_F_POINTER(polar_info_type_cptr, polar_info_type_fptr)
    DEALLOCATE( polar_info_type_fptr )
  END SUBROUTINE deallocate1_polar_info_type

 SUBROUTINE allocate1_polar_calcmulti_list_type(polar_calcmulti_list_type_cptr)
    TYPE (C_PTR) :: polar_calcmulti_list_type_cptr

    TYPE (polar_calcmulti_list_type), POINTER :: polar_calcmulti_list_type_fptr

    ALLOCATE( polar_calcmulti_list_type_fptr )
    polar_calcmulti_list_type_cptr = C_LOC(polar_calcmulti_list_type_fptr)
  END SUBROUTINE allocate1_polar_calcmulti_list_type

 SUBROUTINE deallocate1_polar_calcmulti_list_type(polar_calcmulti_list_type_cptr)
    TYPE (C_PTR), VALUE :: polar_calcmulti_list_type_cptr

    TYPE (polar_calcmulti_list_type), POINTER :: polar_calcmulti_list_type_fptr

    CALL C_F_POINTER(polar_calcmulti_list_type_cptr, polar_calcmulti_list_type_fptr)
    DEALLOCATE( polar_calcmulti_list_type_fptr )
  END SUBROUTINE deallocate1_polar_calcmulti_list_type

 SUBROUTINE allocate1_calibration_detector_type(calibration_detector_type_cptr)
    TYPE (C_PTR) :: calibration_detector_type_cptr

    TYPE (calibration_detector_type), POINTER :: calibration_detector_type_fptr

    ALLOCATE( calibration_detector_type_fptr )
    calibration_detector_type_cptr = C_LOC(calibration_detector_type_fptr)
  END SUBROUTINE allocate1_calibration_detector_type

 SUBROUTINE deallocate1_calibration_detector_type(calibration_detector_type_cptr)
    TYPE (C_PTR), VALUE :: calibration_detector_type_cptr

    TYPE (calibration_detector_type), POINTER :: calibration_detector_type_fptr

    CALL C_F_POINTER(calibration_detector_type_cptr, calibration_detector_type_fptr)
    DEALLOCATE( calibration_detector_type_fptr )
  END SUBROUTINE deallocate1_calibration_detector_type

 SUBROUTINE allocate1_magnetic_group_type(magnetic_group_type_cptr)
    TYPE (C_PTR) :: magnetic_group_type_cptr

    TYPE (magnetic_group_type), POINTER :: magnetic_group_type_fptr

    ALLOCATE( magnetic_group_type_fptr )
    magnetic_group_type_cptr = C_LOC(magnetic_group_type_fptr)
  END SUBROUTINE allocate1_magnetic_group_type

 SUBROUTINE deallocate1_magnetic_group_type(magnetic_group_type_cptr)
    TYPE (C_PTR), VALUE :: magnetic_group_type_cptr

    TYPE (magnetic_group_type), POINTER :: magnetic_group_type_fptr

    CALL C_F_POINTER(magnetic_group_type_cptr, magnetic_group_type_fptr)
    DEALLOCATE( magnetic_group_type_fptr )
  END SUBROUTINE deallocate1_magnetic_group_type

 SUBROUTINE allocate1_wyck_pos_type(wyck_pos_type_cptr)
    TYPE (C_PTR) :: wyck_pos_type_cptr

    TYPE (wyck_pos_type), POINTER :: wyck_pos_type_fptr

    ALLOCATE( wyck_pos_type_fptr )
    wyck_pos_type_cptr = C_LOC(wyck_pos_type_fptr)
  END SUBROUTINE allocate1_wyck_pos_type

 SUBROUTINE deallocate1_wyck_pos_type(wyck_pos_type_cptr)
    TYPE (C_PTR), VALUE :: wyck_pos_type_cptr

    TYPE (wyck_pos_type), POINTER :: wyck_pos_type_fptr

    CALL C_F_POINTER(wyck_pos_type_cptr, wyck_pos_type_fptr)
    DEALLOCATE( wyck_pos_type_fptr )
  END SUBROUTINE deallocate1_wyck_pos_type

 SUBROUTINE allocate1_spgr_info_type(spgr_info_type_cptr)
    TYPE (C_PTR) :: spgr_info_type_cptr

    TYPE (spgr_info_type), POINTER :: spgr_info_type_fptr

    ALLOCATE( spgr_info_type_fptr )
    spgr_info_type_cptr = C_LOC(spgr_info_type_fptr)
  END SUBROUTINE allocate1_spgr_info_type

 SUBROUTINE deallocate1_spgr_info_type(spgr_info_type_cptr)
    TYPE (C_PTR), VALUE :: spgr_info_type_cptr

    TYPE (spgr_info_type), POINTER :: spgr_info_type_fptr

    CALL C_F_POINTER(spgr_info_type_cptr, spgr_info_type_fptr)
    DEALLOCATE( spgr_info_type_fptr )
  END SUBROUTINE deallocate1_spgr_info_type

 SUBROUTINE allocate1_bvel_par_type(bvel_par_type_cptr)
    TYPE (C_PTR) :: bvel_par_type_cptr

    TYPE (bvel_par_type), POINTER :: bvel_par_type_fptr

    ALLOCATE( bvel_par_type_fptr )
    bvel_par_type_cptr = C_LOC(bvel_par_type_fptr)
  END SUBROUTINE allocate1_bvel_par_type

 SUBROUTINE deallocate1_bvel_par_type(bvel_par_type_cptr)
    TYPE (C_PTR), VALUE :: bvel_par_type_cptr

    TYPE (bvel_par_type), POINTER :: bvel_par_type_fptr

    CALL C_F_POINTER(bvel_par_type_cptr, bvel_par_type_fptr)
    DEALLOCATE( bvel_par_type_fptr )
  END SUBROUTINE deallocate1_bvel_par_type

 SUBROUTINE allocate1_magh_type(magh_type_cptr)
    TYPE (C_PTR) :: magh_type_cptr

    TYPE (magh_type), POINTER :: magh_type_fptr

    ALLOCATE( magh_type_fptr )
    magh_type_cptr = C_LOC(magh_type_fptr)
  END SUBROUTINE allocate1_magh_type

 SUBROUTINE deallocate1_magh_type(magh_type_cptr)
    TYPE (C_PTR), VALUE :: magh_type_cptr

    TYPE (magh_type), POINTER :: magh_type_fptr

    CALL C_F_POINTER(magh_type_cptr, magh_type_fptr)
    DEALLOCATE( magh_type_fptr )
  END SUBROUTINE deallocate1_magh_type

 SUBROUTINE allocate1_sbvs_par_type(sbvs_par_type_cptr)
    TYPE (C_PTR) :: sbvs_par_type_cptr

    TYPE (sbvs_par_type), POINTER :: sbvs_par_type_fptr

    ALLOCATE( sbvs_par_type_fptr )
    sbvs_par_type_cptr = C_LOC(sbvs_par_type_fptr)
  END SUBROUTINE allocate1_sbvs_par_type

 SUBROUTINE deallocate1_sbvs_par_type(sbvs_par_type_cptr)
    TYPE (C_PTR), VALUE :: sbvs_par_type_cptr

    TYPE (sbvs_par_type), POINTER :: sbvs_par_type_fptr

    CALL C_F_POINTER(sbvs_par_type_cptr, sbvs_par_type_fptr)
    DEALLOCATE( sbvs_par_type_fptr )
  END SUBROUTINE deallocate1_sbvs_par_type

 SUBROUTINE allocate1_opt_conditions_type(opt_conditions_type_cptr)
    TYPE (C_PTR) :: opt_conditions_type_cptr

    TYPE (opt_conditions_type), POINTER :: opt_conditions_type_fptr

    ALLOCATE( opt_conditions_type_fptr )
    opt_conditions_type_cptr = C_LOC(opt_conditions_type_fptr)
  END SUBROUTINE allocate1_opt_conditions_type

 SUBROUTINE deallocate1_opt_conditions_type(opt_conditions_type_cptr)
    TYPE (C_PTR), VALUE :: opt_conditions_type_cptr

    TYPE (opt_conditions_type), POINTER :: opt_conditions_type_fptr

    CALL C_F_POINTER(opt_conditions_type_cptr, opt_conditions_type_fptr)
    DEALLOCATE( opt_conditions_type_fptr )
  END SUBROUTINE deallocate1_opt_conditions_type

 SUBROUTINE allocate1_points_interval_type(points_interval_type_cptr)
    TYPE (C_PTR) :: points_interval_type_cptr

    TYPE (points_interval_type), POINTER :: points_interval_type_fptr

    ALLOCATE( points_interval_type_fptr )
    points_interval_type_cptr = C_LOC(points_interval_type_fptr)
  END SUBROUTINE allocate1_points_interval_type

 SUBROUTINE deallocate1_points_interval_type(points_interval_type_cptr)
    TYPE (C_PTR), VALUE :: points_interval_type_cptr

    TYPE (points_interval_type), POINTER :: points_interval_type_fptr

    CALL C_F_POINTER(points_interval_type_cptr, points_interval_type_fptr)
    DEALLOCATE( points_interval_type_fptr )
  END SUBROUTINE deallocate1_points_interval_type

 SUBROUTINE allocate1_matom_type(matom_type_cptr)
    TYPE (C_PTR) :: matom_type_cptr

    TYPE (matom_type), POINTER :: matom_type_fptr

    ALLOCATE( matom_type_fptr )
    matom_type_cptr = C_LOC(matom_type_fptr)
  END SUBROUTINE allocate1_matom_type

 SUBROUTINE deallocate1_matom_type(matom_type_cptr)
    TYPE (C_PTR), VALUE :: matom_type_cptr

    TYPE (matom_type), POINTER :: matom_type_fptr

    CALL C_F_POINTER(matom_type_cptr, matom_type_fptr)
    DEALLOCATE( matom_type_fptr )
  END SUBROUTINE deallocate1_matom_type

 SUBROUTINE allocate1_group_k_type(group_k_type_cptr)
    TYPE (C_PTR) :: group_k_type_cptr

    TYPE (group_k_type), POINTER :: group_k_type_fptr

    ALLOCATE( group_k_type_fptr )
    group_k_type_cptr = C_LOC(group_k_type_fptr)
  END SUBROUTINE allocate1_group_k_type

 SUBROUTINE deallocate1_group_k_type(group_k_type_cptr)
    TYPE (C_PTR), VALUE :: group_k_type_cptr

    TYPE (group_k_type), POINTER :: group_k_type_fptr

    CALL C_F_POINTER(group_k_type_cptr, group_k_type_fptr)
    DEALLOCATE( group_k_type_fptr )
  END SUBROUTINE deallocate1_group_k_type

 SUBROUTINE allocate1_bvs_par_type(bvs_par_type_cptr)
    TYPE (C_PTR) :: bvs_par_type_cptr

    TYPE (bvs_par_type), POINTER :: bvs_par_type_fptr

    ALLOCATE( bvs_par_type_fptr )
    bvs_par_type_cptr = C_LOC(bvs_par_type_fptr)
  END SUBROUTINE allocate1_bvs_par_type

 SUBROUTINE deallocate1_bvs_par_type(bvs_par_type_cptr)
    TYPE (C_PTR), VALUE :: bvs_par_type_cptr

    TYPE (bvs_par_type), POINTER :: bvs_par_type_fptr

    CALL C_F_POINTER(bvs_par_type_cptr, bvs_par_type_fptr)
    DEALLOCATE( bvs_par_type_fptr )
  END SUBROUTINE deallocate1_bvs_par_type

 SUBROUTINE allocate1_lattice_centring_type(lattice_centring_type_cptr)
    TYPE (C_PTR) :: lattice_centring_type_cptr

    TYPE (lattice_centring_type), POINTER :: lattice_centring_type_fptr

    ALLOCATE( lattice_centring_type_fptr )
    lattice_centring_type_cptr = C_LOC(lattice_centring_type_fptr)
  END SUBROUTINE allocate1_lattice_centring_type

 SUBROUTINE deallocate1_lattice_centring_type(lattice_centring_type_cptr)
    TYPE (C_PTR), VALUE :: lattice_centring_type_cptr

    TYPE (lattice_centring_type), POINTER :: lattice_centring_type_fptr

    CALL C_F_POINTER(lattice_centring_type_cptr, lattice_centring_type_fptr)
    DEALLOCATE( lattice_centring_type_fptr )
  END SUBROUTINE deallocate1_lattice_centring_type

 SUBROUTINE allocate1_basic_numi_type(basic_numi_type_cptr)
    TYPE (C_PTR) :: basic_numi_type_cptr

    TYPE (basic_numi_type), POINTER :: basic_numi_type_fptr

    ALLOCATE( basic_numi_type_fptr )
    basic_numi_type_cptr = C_LOC(basic_numi_type_fptr)
  END SUBROUTINE allocate1_basic_numi_type

 SUBROUTINE deallocate1_basic_numi_type(basic_numi_type_cptr)
    TYPE (C_PTR), VALUE :: basic_numi_type_cptr

    TYPE (basic_numi_type), POINTER :: basic_numi_type_fptr

    CALL C_F_POINTER(basic_numi_type_cptr, basic_numi_type_fptr)
    DEALLOCATE( basic_numi_type_fptr )
  END SUBROUTINE deallocate1_basic_numi_type

 SUBROUTINE allocate1_wyckoff_type(wyckoff_type_cptr)
    TYPE (C_PTR) :: wyckoff_type_cptr

    TYPE (wyckoff_type), POINTER :: wyckoff_type_fptr

    ALLOCATE( wyckoff_type_fptr )
    wyckoff_type_cptr = C_LOC(wyckoff_type_fptr)
  END SUBROUTINE allocate1_wyckoff_type

 SUBROUTINE deallocate1_wyckoff_type(wyckoff_type_cptr)
    TYPE (C_PTR), VALUE :: wyckoff_type_cptr

    TYPE (wyckoff_type), POINTER :: wyckoff_type_fptr

    CALL C_F_POINTER(wyckoff_type_cptr, wyckoff_type_fptr)
    DEALLOCATE( wyckoff_type_fptr )
  END SUBROUTINE deallocate1_wyckoff_type

 SUBROUTINE allocate1_file_list_type(file_list_type_cptr)
    TYPE (C_PTR) :: file_list_type_cptr

    TYPE (file_list_type), POINTER :: file_list_type_fptr

    ALLOCATE( file_list_type_fptr )
    file_list_type_cptr = C_LOC(file_list_type_fptr)
  END SUBROUTINE allocate1_file_list_type

 SUBROUTINE deallocate1_file_list_type(file_list_type_cptr)
    TYPE (C_PTR), VALUE :: file_list_type_cptr

    TYPE (file_list_type), POINTER :: file_list_type_fptr

    CALL C_F_POINTER(file_list_type_cptr, file_list_type_fptr)
    DEALLOCATE( file_list_type_fptr )
  END SUBROUTINE deallocate1_file_list_type

 SUBROUTINE allocate1_maghd_type(maghd_type_cptr)
    TYPE (C_PTR) :: maghd_type_cptr

    TYPE (maghd_type), POINTER :: maghd_type_fptr

    ALLOCATE( maghd_type_fptr )
    maghd_type_cptr = C_LOC(maghd_type_fptr)
  END SUBROUTINE allocate1_maghd_type

 SUBROUTINE deallocate1_maghd_type(maghd_type_cptr)
    TYPE (C_PTR), VALUE :: maghd_type_cptr

    TYPE (maghd_type), POINTER :: maghd_type_fptr

    CALL C_F_POINTER(maghd_type_cptr, maghd_type_fptr)
    DEALLOCATE( maghd_type_fptr )
  END SUBROUTINE deallocate1_maghd_type

 SUBROUTINE allocate1_atom_type(atom_type_cptr)
    TYPE (C_PTR) :: atom_type_cptr

    TYPE (atom_type), POINTER :: atom_type_fptr

    ALLOCATE( atom_type_fptr )
    atom_type_cptr = C_LOC(atom_type_fptr)
  END SUBROUTINE allocate1_atom_type

 SUBROUTINE deallocate1_atom_type(atom_type_cptr)
    TYPE (C_PTR), VALUE :: atom_type_cptr

    TYPE (atom_type), POINTER :: atom_type_fptr

    CALL C_F_POINTER(atom_type_cptr, atom_type_fptr)
    DEALLOCATE( atom_type_fptr )
  END SUBROUTINE deallocate1_atom_type

 SUBROUTINE allocate1_powder_numor_type(powder_numor_type_cptr)
    TYPE (C_PTR) :: powder_numor_type_cptr

    TYPE (powder_numor_type), POINTER :: powder_numor_type_fptr

    ALLOCATE( powder_numor_type_fptr )
    powder_numor_type_cptr = C_LOC(powder_numor_type_fptr)
  END SUBROUTINE allocate1_powder_numor_type

 SUBROUTINE deallocate1_powder_numor_type(powder_numor_type_cptr)
    TYPE (C_PTR), VALUE :: powder_numor_type_cptr

    TYPE (powder_numor_type), POINTER :: powder_numor_type_fptr

    CALL C_F_POINTER(powder_numor_type_cptr, powder_numor_type_fptr)
    DEALLOCATE( powder_numor_type_fptr )
  END SUBROUTINE deallocate1_powder_numor_type

 SUBROUTINE allocate1_wyck_info_type(wyck_info_type_cptr)
    TYPE (C_PTR) :: wyck_info_type_cptr

    TYPE (wyck_info_type), POINTER :: wyck_info_type_fptr

    ALLOCATE( wyck_info_type_fptr )
    wyck_info_type_cptr = C_LOC(wyck_info_type_fptr)
  END SUBROUTINE allocate1_wyck_info_type

 SUBROUTINE deallocate1_wyck_info_type(wyck_info_type_cptr)
    TYPE (C_PTR), VALUE :: wyck_info_type_cptr

    TYPE (wyck_info_type), POINTER :: wyck_info_type_fptr

    CALL C_F_POINTER(wyck_info_type_cptr, wyck_info_type_fptr)
    DEALLOCATE( wyck_info_type_fptr )
  END SUBROUTINE deallocate1_wyck_info_type

 SUBROUTINE allocate1_reflection_list_type(reflection_list_type_cptr)
    TYPE (C_PTR) :: reflection_list_type_cptr

    TYPE (reflection_list_type), POINTER :: reflection_list_type_fptr

    ALLOCATE( reflection_list_type_fptr )
    reflection_list_type_cptr = C_LOC(reflection_list_type_fptr)
  END SUBROUTINE allocate1_reflection_list_type

 SUBROUTINE deallocate1_reflection_list_type(reflection_list_type_cptr)
    TYPE (C_PTR), VALUE :: reflection_list_type_cptr

    TYPE (reflection_list_type), POINTER :: reflection_list_type_fptr

    CALL C_F_POINTER(reflection_list_type_cptr, reflection_list_type_fptr)
    DEALLOCATE( reflection_list_type_fptr )
  END SUBROUTINE deallocate1_reflection_list_type

 SUBROUTINE allocate1_reflct_array_list(reflct_array_list_cptr)
    TYPE (C_PTR) :: reflct_array_list_cptr

    TYPE (reflct_array_list), POINTER :: reflct_array_list_fptr

    ALLOCATE( reflct_array_list_fptr )
    reflct_array_list_cptr = C_LOC(reflct_array_list_fptr)
  END SUBROUTINE allocate1_reflct_array_list

 SUBROUTINE deallocate1_reflct_array_list(reflct_array_list_cptr)
    TYPE (C_PTR), VALUE :: reflct_array_list_cptr

    TYPE (reflct_array_list), POINTER :: reflct_array_list_fptr

    CALL C_F_POINTER(reflct_array_list_cptr, reflct_array_list_fptr)
    DEALLOCATE( reflct_array_list_fptr )
  END SUBROUTINE deallocate1_reflct_array_list

 SUBROUTINE allocate1_polar_calc_svs_list_type(polar_calc_svs_list_type_cptr)
    TYPE (C_PTR) :: polar_calc_svs_list_type_cptr

    TYPE (polar_calc_svs_list_type), POINTER :: polar_calc_svs_list_type_fptr

    ALLOCATE( polar_calc_svs_list_type_fptr )
    polar_calc_svs_list_type_cptr = C_LOC(polar_calc_svs_list_type_fptr)
  END SUBROUTINE allocate1_polar_calc_svs_list_type

 SUBROUTINE deallocate1_polar_calc_svs_list_type(polar_calc_svs_list_type_cptr)
    TYPE (C_PTR), VALUE :: polar_calc_svs_list_type_cptr

    TYPE (polar_calc_svs_list_type), POINTER :: polar_calc_svs_list_type_fptr

    CALL C_F_POINTER(polar_calc_svs_list_type_cptr, polar_calc_svs_list_type_fptr)
    DEALLOCATE( polar_calc_svs_list_type_fptr )
  END SUBROUTINE deallocate1_polar_calc_svs_list_type

 SUBROUTINE allocate1_torsion_restraint_type(torsion_restraint_type_cptr)
    TYPE (C_PTR) :: torsion_restraint_type_cptr

    TYPE (torsion_restraint_type), POINTER :: torsion_restraint_type_fptr

    ALLOCATE( torsion_restraint_type_fptr )
    torsion_restraint_type_cptr = C_LOC(torsion_restraint_type_fptr)
  END SUBROUTINE allocate1_torsion_restraint_type

 SUBROUTINE deallocate1_torsion_restraint_type(torsion_restraint_type_cptr)
    TYPE (C_PTR), VALUE :: torsion_restraint_type_cptr

    TYPE (torsion_restraint_type), POINTER :: torsion_restraint_type_fptr

    CALL C_F_POINTER(torsion_restraint_type_cptr, torsion_restraint_type_fptr)
    DEALLOCATE( torsion_restraint_type_fptr )
  END SUBROUTINE deallocate1_torsion_restraint_type

 SUBROUTINE allocate1_xray_form_type(xray_form_type_cptr)
    TYPE (C_PTR) :: xray_form_type_cptr

    TYPE (xray_form_type), POINTER :: xray_form_type_fptr

    ALLOCATE( xray_form_type_fptr )
    xray_form_type_cptr = C_LOC(xray_form_type_fptr)
  END SUBROUTINE allocate1_xray_form_type

 SUBROUTINE deallocate1_xray_form_type(xray_form_type_cptr)
    TYPE (C_PTR), VALUE :: xray_form_type_cptr

    TYPE (xray_form_type), POINTER :: xray_form_type_fptr

    CALL C_F_POINTER(xray_form_type_cptr, xray_form_type_fptr)
    DEALLOCATE( xray_form_type_fptr )
  END SUBROUTINE deallocate1_xray_form_type

 SUBROUTINE allocate1_scattering_species_type(scattering_species_type_cptr)
    TYPE (C_PTR) :: scattering_species_type_cptr

    TYPE (scattering_species_type), POINTER :: scattering_species_type_fptr

    ALLOCATE( scattering_species_type_fptr )
    scattering_species_type_cptr = C_LOC(scattering_species_type_fptr)
  END SUBROUTINE allocate1_scattering_species_type

 SUBROUTINE deallocate1_scattering_species_type(scattering_species_type_cptr)
    TYPE (C_PTR), VALUE :: scattering_species_type_cptr

    TYPE (scattering_species_type), POINTER :: scattering_species_type_fptr

    CALL C_F_POINTER(scattering_species_type_cptr, scattering_species_type_fptr)
    DEALLOCATE( scattering_species_type_fptr )
  END SUBROUTINE deallocate1_scattering_species_type

 SUBROUTINE allocate1_magnetic_domain_type(magnetic_domain_type_cptr)
    TYPE (C_PTR) :: magnetic_domain_type_cptr

    TYPE (magnetic_domain_type), POINTER :: magnetic_domain_type_fptr

    ALLOCATE( magnetic_domain_type_fptr )
    magnetic_domain_type_cptr = C_LOC(magnetic_domain_type_fptr)
  END SUBROUTINE allocate1_magnetic_domain_type

 SUBROUTINE deallocate1_magnetic_domain_type(magnetic_domain_type_cptr)
    TYPE (C_PTR), VALUE :: magnetic_domain_type_cptr

    TYPE (magnetic_domain_type), POINTER :: magnetic_domain_type_fptr

    CALL C_F_POINTER(magnetic_domain_type_cptr, magnetic_domain_type_fptr)
    DEALLOCATE( magnetic_domain_type_fptr )
  END SUBROUTINE deallocate1_magnetic_domain_type

 SUBROUTINE allocate1_crystal_cell_type(crystal_cell_type_cptr)
    TYPE (C_PTR) :: crystal_cell_type_cptr

    TYPE (crystal_cell_type), POINTER :: crystal_cell_type_fptr

    ALLOCATE( crystal_cell_type_fptr )
    crystal_cell_type_cptr = C_LOC(crystal_cell_type_fptr)
  END SUBROUTINE allocate1_crystal_cell_type

 SUBROUTINE deallocate1_crystal_cell_type(crystal_cell_type_cptr)
    TYPE (C_PTR), VALUE :: crystal_cell_type_cptr

    TYPE (crystal_cell_type), POINTER :: crystal_cell_type_fptr

    CALL C_F_POINTER(crystal_cell_type_cptr, crystal_cell_type_fptr)
    DEALLOCATE( crystal_cell_type_fptr )
  END SUBROUTINE deallocate1_crystal_cell_type

 SUBROUTINE allocate1_polar_calc_svs_type(polar_calc_svs_type_cptr)
    TYPE (C_PTR) :: polar_calc_svs_type_cptr

    TYPE (polar_calc_svs_type), POINTER :: polar_calc_svs_type_fptr

    ALLOCATE( polar_calc_svs_type_fptr )
    polar_calc_svs_type_cptr = C_LOC(polar_calc_svs_type_fptr)
  END SUBROUTINE allocate1_polar_calc_svs_type

 SUBROUTINE deallocate1_polar_calc_svs_type(polar_calc_svs_type_cptr)
    TYPE (C_PTR), VALUE :: polar_calc_svs_type_cptr

    TYPE (polar_calc_svs_type), POINTER :: polar_calc_svs_type_fptr

    CALL C_F_POINTER(polar_calc_svs_type_cptr, polar_calc_svs_type_fptr)
    DEALLOCATE( polar_calc_svs_type_fptr )
  END SUBROUTINE deallocate1_polar_calc_svs_type

 SUBROUTINE allocate1_reflection_type(reflection_type_cptr)
    TYPE (C_PTR) :: reflection_type_cptr

    TYPE (reflection_type), POINTER :: reflection_type_fptr

    ALLOCATE( reflection_type_fptr )
    reflection_type_cptr = C_LOC(reflection_type_fptr)
  END SUBROUTINE allocate1_reflection_type

 SUBROUTINE deallocate1_reflection_type(reflection_type_cptr)
    TYPE (C_PTR), VALUE :: reflection_type_cptr

    TYPE (reflection_type), POINTER :: reflection_type_fptr

    CALL C_F_POINTER(reflection_type_cptr, reflection_type_fptr)
    DEALLOCATE( reflection_type_fptr )
  END SUBROUTINE deallocate1_reflection_type

 SUBROUTINE allocate1_ill_data_record_type(ill_data_record_type_cptr)
    TYPE (C_PTR) :: ill_data_record_type_cptr

    TYPE (ill_data_record_type), POINTER :: ill_data_record_type_fptr

    ALLOCATE( ill_data_record_type_fptr )
    ill_data_record_type_cptr = C_LOC(ill_data_record_type_fptr)
  END SUBROUTINE allocate1_ill_data_record_type

 SUBROUTINE deallocate1_ill_data_record_type(ill_data_record_type_cptr)
    TYPE (C_PTR), VALUE :: ill_data_record_type_cptr

    TYPE (ill_data_record_type), POINTER :: ill_data_record_type_fptr

    CALL C_F_POINTER(ill_data_record_type_cptr, ill_data_record_type_fptr)
    DEALLOCATE( ill_data_record_type_fptr )
  END SUBROUTINE deallocate1_ill_data_record_type

 SUBROUTINE allocate1_maghd_list_type(maghd_list_type_cptr)
    TYPE (C_PTR) :: maghd_list_type_cptr

    TYPE (maghd_list_type), POINTER :: maghd_list_type_fptr

    ALLOCATE( maghd_list_type_fptr )
    maghd_list_type_cptr = C_LOC(maghd_list_type_fptr)
  END SUBROUTINE allocate1_maghd_list_type

 SUBROUTINE deallocate1_maghd_list_type(maghd_list_type_cptr)
    TYPE (C_PTR), VALUE :: maghd_list_type_cptr

    TYPE (maghd_list_type), POINTER :: maghd_list_type_fptr

    CALL C_F_POINTER(maghd_list_type_cptr, maghd_list_type_fptr)
    DEALLOCATE( maghd_list_type_fptr )
  END SUBROUTINE deallocate1_maghd_list_type

 SUBROUTINE allocate1_coordination_type(coordination_type_cptr)
    TYPE (C_PTR) :: coordination_type_cptr

    TYPE (coordination_type), POINTER :: coordination_type_fptr

    ALLOCATE( coordination_type_fptr )
    coordination_type_cptr = C_LOC(coordination_type_fptr)
  END SUBROUTINE allocate1_coordination_type

 SUBROUTINE deallocate1_coordination_type(coordination_type_cptr)
    TYPE (C_PTR), VALUE :: coordination_type_cptr

    TYPE (coordination_type), POINTER :: coordination_type_fptr

    CALL C_F_POINTER(coordination_type_cptr, coordination_type_fptr)
    DEALLOCATE( coordination_type_fptr )
  END SUBROUTINE deallocate1_coordination_type

 SUBROUTINE allocate1_generic_numor_type(generic_numor_type_cptr)
    TYPE (C_PTR) :: generic_numor_type_cptr

    TYPE (generic_numor_type), POINTER :: generic_numor_type_fptr

    ALLOCATE( generic_numor_type_fptr )
    generic_numor_type_cptr = C_LOC(generic_numor_type_fptr)
  END SUBROUTINE allocate1_generic_numor_type

 SUBROUTINE deallocate1_generic_numor_type(generic_numor_type_cptr)
    TYPE (C_PTR), VALUE :: generic_numor_type_cptr

    TYPE (generic_numor_type), POINTER :: generic_numor_type_fptr

    CALL C_F_POINTER(generic_numor_type_cptr, generic_numor_type_fptr)
    DEALLOCATE( generic_numor_type_fptr )
  END SUBROUTINE deallocate1_generic_numor_type

 SUBROUTINE allocate1_anomalous_sc_type(anomalous_sc_type_cptr)
    TYPE (C_PTR) :: anomalous_sc_type_cptr

    TYPE (anomalous_sc_type), POINTER :: anomalous_sc_type_fptr

    ALLOCATE( anomalous_sc_type_fptr )
    anomalous_sc_type_cptr = C_LOC(anomalous_sc_type_fptr)
  END SUBROUTINE allocate1_anomalous_sc_type

 SUBROUTINE deallocate1_anomalous_sc_type(anomalous_sc_type_cptr)
    TYPE (C_PTR), VALUE :: anomalous_sc_type_cptr

    TYPE (anomalous_sc_type), POINTER :: anomalous_sc_type_fptr

    CALL C_F_POINTER(anomalous_sc_type_cptr, anomalous_sc_type_fptr)
    DEALLOCATE( anomalous_sc_type_fptr )
  END SUBROUTINE deallocate1_anomalous_sc_type

 SUBROUTINE allocate1_polar_obsmulti_list_type(polar_obsmulti_list_type_cptr)
    TYPE (C_PTR) :: polar_obsmulti_list_type_cptr

    TYPE (polar_obsmulti_list_type), POINTER :: polar_obsmulti_list_type_fptr

    ALLOCATE( polar_obsmulti_list_type_fptr )
    polar_obsmulti_list_type_cptr = C_LOC(polar_obsmulti_list_type_fptr)
  END SUBROUTINE allocate1_polar_obsmulti_list_type

 SUBROUTINE deallocate1_polar_obsmulti_list_type(polar_obsmulti_list_type_cptr)
    TYPE (C_PTR), VALUE :: polar_obsmulti_list_type_cptr

    TYPE (polar_obsmulti_list_type), POINTER :: polar_obsmulti_list_type_fptr

    CALL C_F_POINTER(polar_obsmulti_list_type_cptr, polar_obsmulti_list_type_fptr)
    DEALLOCATE( polar_obsmulti_list_type_fptr )
  END SUBROUTINE deallocate1_polar_obsmulti_list_type

 SUBROUTINE allocate1_polar_obs_list_type(polar_obs_list_type_cptr)
    TYPE (C_PTR) :: polar_obs_list_type_cptr

    TYPE (polar_obs_list_type), POINTER :: polar_obs_list_type_fptr

    ALLOCATE( polar_obs_list_type_fptr )
    polar_obs_list_type_cptr = C_LOC(polar_obs_list_type_fptr)
  END SUBROUTINE allocate1_polar_obs_list_type

 SUBROUTINE deallocate1_polar_obs_list_type(polar_obs_list_type_cptr)
    TYPE (C_PTR), VALUE :: polar_obs_list_type_cptr

    TYPE (polar_obs_list_type), POINTER :: polar_obs_list_type_fptr

    CALL C_F_POINTER(polar_obs_list_type_cptr, polar_obs_list_type_fptr)
    DEALLOCATE( polar_obs_list_type_fptr )
  END SUBROUTINE deallocate1_polar_obs_list_type

 SUBROUTINE allocate1_point_list_type(point_list_type_cptr)
    TYPE (C_PTR) :: point_list_type_cptr

    TYPE (point_list_type), POINTER :: point_list_type_fptr

    ALLOCATE( point_list_type_fptr )
    point_list_type_cptr = C_LOC(point_list_type_fptr)
  END SUBROUTINE allocate1_point_list_type

 SUBROUTINE deallocate1_point_list_type(point_list_type_cptr)
    TYPE (C_PTR), VALUE :: point_list_type_cptr

    TYPE (point_list_type), POINTER :: point_list_type_fptr

    CALL C_F_POINTER(point_list_type_cptr, point_list_type_fptr)
    DEALLOCATE( point_list_type_fptr )
  END SUBROUTINE deallocate1_point_list_type

 SUBROUTINE allocate1_ns_space_group_type(ns_space_group_type_cptr)
    TYPE (C_PTR) :: ns_space_group_type_cptr

    TYPE (ns_space_group_type), POINTER :: ns_space_group_type_fptr

    ALLOCATE( ns_space_group_type_fptr )
    ns_space_group_type_cptr = C_LOC(ns_space_group_type_fptr)
  END SUBROUTINE allocate1_ns_space_group_type

 SUBROUTINE deallocate1_ns_space_group_type(ns_space_group_type_cptr)
    TYPE (C_PTR), VALUE :: ns_space_group_type_cptr

    TYPE (ns_space_group_type), POINTER :: ns_space_group_type_fptr

    CALL C_F_POINTER(ns_space_group_type_cptr, ns_space_group_type_fptr)
    DEALLOCATE( ns_space_group_type_fptr )
  END SUBROUTINE deallocate1_ns_space_group_type

 SUBROUTINE allocate1_molecular_crystal_type(molecular_crystal_type_cptr)
    TYPE (C_PTR) :: molecular_crystal_type_cptr

    TYPE (molecular_crystal_type), POINTER :: molecular_crystal_type_fptr

    ALLOCATE( molecular_crystal_type_fptr )
    molecular_crystal_type_cptr = C_LOC(molecular_crystal_type_fptr)
  END SUBROUTINE allocate1_molecular_crystal_type

 SUBROUTINE deallocate1_molecular_crystal_type(molecular_crystal_type_cptr)
    TYPE (C_PTR), VALUE :: molecular_crystal_type_cptr

    TYPE (molecular_crystal_type), POINTER :: molecular_crystal_type_fptr

    CALL C_F_POINTER(molecular_crystal_type_cptr, molecular_crystal_type_fptr)
    DEALLOCATE( molecular_crystal_type_fptr )
  END SUBROUTINE deallocate1_molecular_crystal_type

 SUBROUTINE allocate1_chem_info_type(chem_info_type_cptr)
    TYPE (C_PTR) :: chem_info_type_cptr

    TYPE (chem_info_type), POINTER :: chem_info_type_fptr

    ALLOCATE( chem_info_type_fptr )
    chem_info_type_cptr = C_LOC(chem_info_type_fptr)
  END SUBROUTINE allocate1_chem_info_type

 SUBROUTINE deallocate1_chem_info_type(chem_info_type_cptr)
    TYPE (C_PTR), VALUE :: chem_info_type_cptr

    TYPE (chem_info_type), POINTER :: chem_info_type_fptr

    CALL C_F_POINTER(chem_info_type_cptr, chem_info_type_fptr)
    DEALLOCATE( chem_info_type_fptr )
  END SUBROUTINE deallocate1_chem_info_type

 SUBROUTINE allocate1_sym_oper_type(sym_oper_type_cptr)
    TYPE (C_PTR) :: sym_oper_type_cptr

    TYPE (sym_oper_type), POINTER :: sym_oper_type_fptr

    ALLOCATE( sym_oper_type_fptr )
    sym_oper_type_cptr = C_LOC(sym_oper_type_fptr)
  END SUBROUTINE allocate1_sym_oper_type

 SUBROUTINE deallocate1_sym_oper_type(sym_oper_type_cptr)
    TYPE (C_PTR), VALUE :: sym_oper_type_cptr

    TYPE (sym_oper_type), POINTER :: sym_oper_type_fptr

    CALL C_F_POINTER(sym_oper_type_cptr, sym_oper_type_fptr)
    DEALLOCATE( sym_oper_type_fptr )
  END SUBROUTINE deallocate1_sym_oper_type

 SUBROUTINE allocate1_job_info_type(job_info_type_cptr)
    TYPE (C_PTR) :: job_info_type_cptr

    TYPE (job_info_type), POINTER :: job_info_type_fptr

    ALLOCATE( job_info_type_fptr )
    job_info_type_cptr = C_LOC(job_info_type_fptr)
  END SUBROUTINE allocate1_job_info_type

 SUBROUTINE deallocate1_job_info_type(job_info_type_cptr)
    TYPE (C_PTR), VALUE :: job_info_type_cptr

    TYPE (job_info_type), POINTER :: job_info_type_fptr

    CALL C_F_POINTER(job_info_type_cptr, job_info_type_fptr)
    DEALLOCATE( job_info_type_fptr )
  END SUBROUTINE deallocate1_job_info_type

 SUBROUTINE allocate1_distance_restraint_type(distance_restraint_type_cptr)
    TYPE (C_PTR) :: distance_restraint_type_cptr

    TYPE (distance_restraint_type), POINTER :: distance_restraint_type_fptr

    ALLOCATE( distance_restraint_type_fptr )
    distance_restraint_type_cptr = C_LOC(distance_restraint_type_fptr)
  END SUBROUTINE allocate1_distance_restraint_type

 SUBROUTINE deallocate1_distance_restraint_type(distance_restraint_type_cptr)
    TYPE (C_PTR), VALUE :: distance_restraint_type_cptr

    TYPE (distance_restraint_type), POINTER :: distance_restraint_type_fptr

    CALL C_F_POINTER(distance_restraint_type_cptr, distance_restraint_type_fptr)
    DEALLOCATE( distance_restraint_type_fptr )
  END SUBROUTINE deallocate1_distance_restraint_type

 SUBROUTINE allocate1_sxd_val_type(sxd_val_type_cptr)
    TYPE (C_PTR) :: sxd_val_type_cptr

    TYPE (sxd_val_type), POINTER :: sxd_val_type_fptr

    ALLOCATE( sxd_val_type_fptr )
    sxd_val_type_cptr = C_LOC(sxd_val_type_fptr)
  END SUBROUTINE allocate1_sxd_val_type

 SUBROUTINE deallocate1_sxd_val_type(sxd_val_type_cptr)
    TYPE (C_PTR), VALUE :: sxd_val_type_cptr

    TYPE (sxd_val_type), POINTER :: sxd_val_type_fptr

    CALL C_F_POINTER(sxd_val_type_cptr, sxd_val_type_fptr)
    DEALLOCATE( sxd_val_type_fptr )
  END SUBROUTINE deallocate1_sxd_val_type

 SUBROUTINE allocate1_atoms_cell_type(atoms_cell_type_cptr)
    TYPE (C_PTR) :: atoms_cell_type_cptr

    TYPE (atoms_cell_type), POINTER :: atoms_cell_type_fptr

    ALLOCATE( atoms_cell_type_fptr )
    atoms_cell_type_cptr = C_LOC(atoms_cell_type_fptr)
  END SUBROUTINE allocate1_atoms_cell_type

 SUBROUTINE deallocate1_atoms_cell_type(atoms_cell_type_cptr)
    TYPE (C_PTR), VALUE :: atoms_cell_type_cptr

    TYPE (atoms_cell_type), POINTER :: atoms_cell_type_fptr

    CALL C_F_POINTER(atoms_cell_type_cptr, atoms_cell_type_fptr)
    DEALLOCATE( atoms_cell_type_fptr )
  END SUBROUTINE deallocate1_atoms_cell_type

 SUBROUTINE allocate1_polar_calc_type(polar_calc_type_cptr)
    TYPE (C_PTR) :: polar_calc_type_cptr

    TYPE (polar_calc_type), POINTER :: polar_calc_type_fptr

    ALLOCATE( polar_calc_type_fptr )
    polar_calc_type_cptr = C_LOC(polar_calc_type_fptr)
  END SUBROUTINE allocate1_polar_calc_type

 SUBROUTINE deallocate1_polar_calc_type(polar_calc_type_cptr)
    TYPE (C_PTR), VALUE :: polar_calc_type_cptr

    TYPE (polar_calc_type), POINTER :: polar_calc_type_fptr

    CALL C_F_POINTER(polar_calc_type_cptr, polar_calc_type_fptr)
    DEALLOCATE( polar_calc_type_fptr )
  END SUBROUTINE deallocate1_polar_calc_type

 SUBROUTINE allocate1_interval_type(interval_type_cptr)
    TYPE (C_PTR) :: interval_type_cptr

    TYPE (interval_type), POINTER :: interval_type_fptr

    ALLOCATE( interval_type_fptr )
    interval_type_cptr = C_LOC(interval_type_fptr)
  END SUBROUTINE allocate1_interval_type

 SUBROUTINE deallocate1_interval_type(interval_type_cptr)
    TYPE (C_PTR), VALUE :: interval_type_cptr

    TYPE (interval_type), POINTER :: interval_type_fptr

    CALL C_F_POINTER(interval_type_cptr, interval_type_fptr)
    DEALLOCATE( interval_type_fptr )
  END SUBROUTINE deallocate1_interval_type

 SUBROUTINE allocate1_atomic_properties_type(atomic_properties_type_cptr)
    TYPE (C_PTR) :: atomic_properties_type_cptr

    TYPE (atomic_properties_type), POINTER :: atomic_properties_type_fptr

    ALLOCATE( atomic_properties_type_fptr )
    atomic_properties_type_cptr = C_LOC(atomic_properties_type_fptr)
  END SUBROUTINE allocate1_atomic_properties_type

 SUBROUTINE deallocate1_atomic_properties_type(atomic_properties_type_cptr)
    TYPE (C_PTR), VALUE :: atomic_properties_type_cptr

    TYPE (atomic_properties_type), POINTER :: atomic_properties_type_fptr

    CALL C_F_POINTER(atomic_properties_type_cptr, atomic_properties_type_fptr)
    DEALLOCATE( atomic_properties_type_fptr )
  END SUBROUTINE deallocate1_atomic_properties_type

 SUBROUTINE allocate1_xray_wavelength_type(xray_wavelength_type_cptr)
    TYPE (C_PTR) :: xray_wavelength_type_cptr

    TYPE (xray_wavelength_type), POINTER :: xray_wavelength_type_fptr

    ALLOCATE( xray_wavelength_type_fptr )
    xray_wavelength_type_cptr = C_LOC(xray_wavelength_type_fptr)
  END SUBROUTINE allocate1_xray_wavelength_type

 SUBROUTINE deallocate1_xray_wavelength_type(xray_wavelength_type_cptr)
    TYPE (C_PTR), VALUE :: xray_wavelength_type_cptr

    TYPE (xray_wavelength_type), POINTER :: xray_wavelength_type_fptr

    CALL C_F_POINTER(xray_wavelength_type_cptr, xray_wavelength_type_fptr)
    DEALLOCATE( xray_wavelength_type_fptr )
  END SUBROUTINE deallocate1_xray_wavelength_type

 SUBROUTINE allocate1_basic_numr_type(basic_numr_type_cptr)
    TYPE (C_PTR) :: basic_numr_type_cptr

    TYPE (basic_numr_type), POINTER :: basic_numr_type_fptr

    ALLOCATE( basic_numr_type_fptr )
    basic_numr_type_cptr = C_LOC(basic_numr_type_fptr)
  END SUBROUTINE allocate1_basic_numr_type

 SUBROUTINE deallocate1_basic_numr_type(basic_numr_type_cptr)
    TYPE (C_PTR), VALUE :: basic_numr_type_cptr

    TYPE (basic_numr_type), POINTER :: basic_numr_type_fptr

    CALL C_F_POINTER(basic_numr_type_cptr, basic_numr_type_fptr)
    DEALLOCATE( basic_numr_type_fptr )
  END SUBROUTINE deallocate1_basic_numr_type

 SUBROUTINE allocate1_atom_equiv_list_type(atom_equiv_list_type_cptr)
    TYPE (C_PTR) :: atom_equiv_list_type_cptr

    TYPE (atom_equiv_list_type), POINTER :: atom_equiv_list_type_fptr

    ALLOCATE( atom_equiv_list_type_fptr )
    atom_equiv_list_type_cptr = C_LOC(atom_equiv_list_type_fptr)
  END SUBROUTINE allocate1_atom_equiv_list_type

 SUBROUTINE deallocate1_atom_equiv_list_type(atom_equiv_list_type_cptr)
    TYPE (C_PTR), VALUE :: atom_equiv_list_type_cptr

    TYPE (atom_equiv_list_type), POINTER :: atom_equiv_list_type_fptr

    CALL C_F_POINTER(atom_equiv_list_type_cptr, atom_equiv_list_type_fptr)
    DEALLOCATE( atom_equiv_list_type_fptr )
  END SUBROUTINE deallocate1_atom_equiv_list_type

 SUBROUTINE allocate1_matom_list_type(matom_list_type_cptr)
    TYPE (C_PTR) :: matom_list_type_cptr

    TYPE (matom_list_type), POINTER :: matom_list_type_fptr

    ALLOCATE( matom_list_type_fptr )
    matom_list_type_cptr = C_LOC(matom_list_type_fptr)
  END SUBROUTINE allocate1_matom_list_type

 SUBROUTINE deallocate1_matom_list_type(matom_list_type_cptr)
    TYPE (C_PTR), VALUE :: matom_list_type_cptr

    TYPE (matom_list_type), POINTER :: matom_list_type_fptr

    CALL C_F_POINTER(matom_list_type_cptr, matom_list_type_fptr)
    DEALLOCATE( matom_list_type_fptr )
  END SUBROUTINE deallocate1_matom_list_type

 SUBROUTINE allocate1_nonatomic_parameter_list_type(nonatomic_parameter_list_type_cptr)
    TYPE (C_PTR) :: nonatomic_parameter_list_type_cptr

    TYPE (nonatomic_parameter_list_type), POINTER :: nonatomic_parameter_list_type_fptr

    ALLOCATE( nonatomic_parameter_list_type_fptr )
    nonatomic_parameter_list_type_cptr = C_LOC(nonatomic_parameter_list_type_fptr)
  END SUBROUTINE allocate1_nonatomic_parameter_list_type

 SUBROUTINE deallocate1_nonatomic_parameter_list_type(nonatomic_parameter_list_type_cptr)
    TYPE (C_PTR), VALUE :: nonatomic_parameter_list_type_cptr

    TYPE (nonatomic_parameter_list_type), POINTER :: nonatomic_parameter_list_type_fptr

    CALL C_F_POINTER(nonatomic_parameter_list_type_cptr, nonatomic_parameter_list_type_fptr)
    DEALLOCATE( nonatomic_parameter_list_type_fptr )
  END SUBROUTINE deallocate1_nonatomic_parameter_list_type

 SUBROUTINE allocate1_basic_numc_type(basic_numc_type_cptr)
    TYPE (C_PTR) :: basic_numc_type_cptr

    TYPE (basic_numc_type), POINTER :: basic_numc_type_fptr

    ALLOCATE( basic_numc_type_fptr )
    basic_numc_type_cptr = C_LOC(basic_numc_type_fptr)
  END SUBROUTINE allocate1_basic_numc_type

 SUBROUTINE deallocate1_basic_numc_type(basic_numc_type_cptr)
    TYPE (C_PTR), VALUE :: basic_numc_type_cptr

    TYPE (basic_numc_type), POINTER :: basic_numc_type_fptr

    CALL C_F_POINTER(basic_numc_type_cptr, basic_numc_type_fptr)
    DEALLOCATE( basic_numc_type_fptr )
  END SUBROUTINE deallocate1_basic_numc_type

 SUBROUTINE allocate1_deriv_tof_type(deriv_tof_type_cptr)
    TYPE (C_PTR) :: deriv_tof_type_cptr

    TYPE (deriv_tof_type), POINTER :: deriv_tof_type_fptr

    ALLOCATE( deriv_tof_type_fptr )
    deriv_tof_type_cptr = C_LOC(deriv_tof_type_fptr)
  END SUBROUTINE allocate1_deriv_tof_type

 SUBROUTINE deallocate1_deriv_tof_type(deriv_tof_type_cptr)
    TYPE (C_PTR), VALUE :: deriv_tof_type_cptr

    TYPE (deriv_tof_type), POINTER :: deriv_tof_type_fptr

    CALL C_F_POINTER(deriv_tof_type_cptr, deriv_tof_type_fptr)
    DEALLOCATE( deriv_tof_type_fptr )
  END SUBROUTINE deallocate1_deriv_tof_type

 SUBROUTINE allocate1_polar_obs_type(polar_obs_type_cptr)
    TYPE (C_PTR) :: polar_obs_type_cptr

    TYPE (polar_obs_type), POINTER :: polar_obs_type_fptr

    ALLOCATE( polar_obs_type_fptr )
    polar_obs_type_cptr = C_LOC(polar_obs_type_fptr)
  END SUBROUTINE allocate1_polar_obs_type

 SUBROUTINE deallocate1_polar_obs_type(polar_obs_type_cptr)
    TYPE (C_PTR), VALUE :: polar_obs_type_cptr

    TYPE (polar_obs_type), POINTER :: polar_obs_type_fptr

    CALL C_F_POINTER(polar_obs_type_cptr, polar_obs_type_fptr)
    DEALLOCATE( polar_obs_type_fptr )
  END SUBROUTINE deallocate1_polar_obs_type

 SUBROUTINE allocate1_nonatomic_parameter_type(nonatomic_parameter_type_cptr)
    TYPE (C_PTR) :: nonatomic_parameter_type_cptr

    TYPE (nonatomic_parameter_type), POINTER :: nonatomic_parameter_type_fptr

    ALLOCATE( nonatomic_parameter_type_fptr )
    nonatomic_parameter_type_cptr = C_LOC(nonatomic_parameter_type_fptr)
  END SUBROUTINE allocate1_nonatomic_parameter_type

 SUBROUTINE deallocate1_nonatomic_parameter_type(nonatomic_parameter_type_cptr)
    TYPE (C_PTR), VALUE :: nonatomic_parameter_type_cptr

    TYPE (nonatomic_parameter_type), POINTER :: nonatomic_parameter_type_fptr

    CALL C_F_POINTER(nonatomic_parameter_type_cptr, nonatomic_parameter_type_fptr)
    DEALLOCATE( nonatomic_parameter_type_fptr )
  END SUBROUTINE deallocate1_nonatomic_parameter_type

 SUBROUTINE allocate1_msym_oper_type(msym_oper_type_cptr)
    TYPE (C_PTR) :: msym_oper_type_cptr

    TYPE (msym_oper_type), POINTER :: msym_oper_type_fptr

    ALLOCATE( msym_oper_type_fptr )
    msym_oper_type_cptr = C_LOC(msym_oper_type_fptr)
  END SUBROUTINE allocate1_msym_oper_type

 SUBROUTINE deallocate1_msym_oper_type(msym_oper_type_cptr)
    TYPE (C_PTR), VALUE :: msym_oper_type_cptr

    TYPE (msym_oper_type), POINTER :: msym_oper_type_fptr

    CALL C_F_POINTER(msym_oper_type_cptr, msym_oper_type_fptr)
    DEALLOCATE( msym_oper_type_fptr )
  END SUBROUTINE deallocate1_msym_oper_type

 SUBROUTINE allocate1_polar_calcmulti_svs_list_type(polar_calcmulti_svs_list_type_cptr)
    TYPE (C_PTR) :: polar_calcmulti_svs_list_type_cptr

    TYPE (polar_calcmulti_svs_list_type), POINTER :: polar_calcmulti_svs_list_type_fptr

    ALLOCATE( polar_calcmulti_svs_list_type_fptr )
    polar_calcmulti_svs_list_type_cptr = C_LOC(polar_calcmulti_svs_list_type_fptr)
  END SUBROUTINE allocate1_polar_calcmulti_svs_list_type

 SUBROUTINE deallocate1_polar_calcmulti_svs_list_type(polar_calcmulti_svs_list_type_cptr)
    TYPE (C_PTR), VALUE :: polar_calcmulti_svs_list_type_cptr

    TYPE (polar_calcmulti_svs_list_type), POINTER :: polar_calcmulti_svs_list_type_fptr

    CALL C_F_POINTER(polar_calcmulti_svs_list_type_cptr, polar_calcmulti_svs_list_type_fptr)
    DEALLOCATE( polar_calcmulti_svs_list_type_fptr )
  END SUBROUTINE deallocate1_polar_calcmulti_svs_list_type

 SUBROUTINE allocate1_psd_val_type(psd_val_type_cptr)
    TYPE (C_PTR) :: psd_val_type_cptr

    TYPE (psd_val_type), POINTER :: psd_val_type_fptr

    ALLOCATE( psd_val_type_fptr )
    psd_val_type_cptr = C_LOC(psd_val_type_fptr)
  END SUBROUTINE allocate1_psd_val_type

 SUBROUTINE deallocate1_psd_val_type(psd_val_type_cptr)
    TYPE (C_PTR), VALUE :: psd_val_type_cptr

    TYPE (psd_val_type), POINTER :: psd_val_type_fptr

    CALL C_F_POINTER(psd_val_type_cptr, psd_val_type_fptr)
    DEALLOCATE( psd_val_type_fptr )
  END SUBROUTINE deallocate1_psd_val_type

 SUBROUTINE allocate1_sxtal_numor_type(sxtal_numor_type_cptr)
    TYPE (C_PTR) :: sxtal_numor_type_cptr

    TYPE (sxtal_numor_type), POINTER :: sxtal_numor_type_fptr

    ALLOCATE( sxtal_numor_type_fptr )
    sxtal_numor_type_cptr = C_LOC(sxtal_numor_type_fptr)
  END SUBROUTINE allocate1_sxtal_numor_type

 SUBROUTINE deallocate1_sxtal_numor_type(sxtal_numor_type_cptr)
    TYPE (C_PTR), VALUE :: sxtal_numor_type_cptr

    TYPE (sxtal_numor_type), POINTER :: sxtal_numor_type_fptr

    CALL C_F_POINTER(sxtal_numor_type_cptr, sxtal_numor_type_fptr)
    DEALLOCATE( sxtal_numor_type_fptr )
  END SUBROUTINE deallocate1_sxtal_numor_type

 SUBROUTINE allocate1_space_group_type(space_group_type_cptr)
    TYPE (C_PTR) :: space_group_type_cptr

    TYPE (space_group_type), POINTER :: space_group_type_fptr

    ALLOCATE( space_group_type_fptr )
    space_group_type_cptr = C_LOC(space_group_type_fptr)
  END SUBROUTINE allocate1_space_group_type

 SUBROUTINE deallocate1_space_group_type(space_group_type_cptr)
    TYPE (C_PTR), VALUE :: space_group_type_cptr

    TYPE (space_group_type), POINTER :: space_group_type_fptr

    CALL C_F_POINTER(space_group_type_cptr, space_group_type_fptr)
    DEALLOCATE( space_group_type_fptr )
  END SUBROUTINE deallocate1_space_group_type

 SUBROUTINE allocate1_zone_axis_type(zone_axis_type_cptr)
    TYPE (C_PTR) :: zone_axis_type_cptr

    TYPE (zone_axis_type), POINTER :: zone_axis_type_fptr

    ALLOCATE( zone_axis_type_fptr )
    zone_axis_type_cptr = C_LOC(zone_axis_type_fptr)
  END SUBROUTINE allocate1_zone_axis_type

 SUBROUTINE deallocate1_zone_axis_type(zone_axis_type_cptr)
    TYPE (C_PTR), VALUE :: zone_axis_type_cptr

    TYPE (zone_axis_type), POINTER :: zone_axis_type_fptr

    CALL C_F_POINTER(zone_axis_type_cptr, zone_axis_type_fptr)
    DEALLOCATE( zone_axis_type_fptr )
  END SUBROUTINE deallocate1_zone_axis_type

END MODULE CppWrappers
