/* This source file automatically generated on 2018-07-03 using
FortWrap wrapper generator version 1.0.4 */

#ifndef FORTFUNCS_H_
#define FORTFUNCS_H_


#ifndef SWIG // Protect declarations from SWIG
#include <cstdlib>
#include <string>
#include <vector>
#include "InterfaceDefs.h"
#include "atoms_conf_list_type.h"
#include "magsymm_k_type.h"
#include "magh_list_type.h"
#include "atom_list_type.h"
#include "opt_conditions_type.h"
#include "diffraction_pattern_type.h"
#include "twofold_axes_type.h"
#include "molecule_type.h"
#include "magnetic_space_group_type.h"
#include "magnetic_group_type.h"
#include "ns_sym_oper_type.h"
#include "magh_type.h"
#include "polar_calc_type.h"
#include "matom_type.h"
#include "group_k_type.h"
#include "reflect_type.h"
#include "wyckoff_type.h"
#include "sxtal_numor_type.h"
#include "maghd_type.h"
#include "atom_type.h"
#include "reflection_list_type.h"
#include "reflct_array_list.h"
#include "space_group_type.h"
#include "file_list_type.h"
#include "scattering_species_type.h"
#include "magnetic_domain_type.h"
#include "crystal_cell_type.h"
#include "reflection_type.h"
#include "generic_numor_type.h"
#include "point_list_type.h"
#include "msym_oper_type.h"
#include "molecular_crystal_type.h"
#include "calibration_detector_type.h"
#include "sym_oper_type.h"
#include "job_info_type.h"
#include "atoms_cell_type.h"
#include "interval_type.h"
#include "matom_list_type.h"
#include "nonatomic_parameter_list_type.h"
#include "deriv_tof_type.h"
#include "FortranMatrix.h"
#include "ns_space_group_type.h"
#include "lattice_centring_type.h"
#include "zone_axis_type.h"

#define None 0
struct complex{
	double real;
	double imaginary;
};
extern "C" {
int __cfml_atom_typedef_MOD_equiv_atm(const char* nam1, const char* nam2, const char* nameat, int nam1_len__, int nam2_len__, int nameat_len__);
void __cfml_atom_typedef_MOD_allocate_atoms_cell(int* nasu, int* mul, float* dmax, ADDRESS ac);
void __cfml_atom_typedef_MOD_allocate_atom_list(int* n, ADDRESS a, int* fail);
void __cfml_atom_typedef_MOD_allocate_matom_list(int* n, ADDRESS a, const float* mfield, const float dirf[]);
void __cfml_atom_typedef_MOD_atlist1_extencell_atlist2(ADDRESS spg, ADDRESS a, ADDRESS c, int* conven);
void __cfml_atom_typedef_MOD_atoms_cell_to_list(ADDRESS ac, ADDRESS a);
void __cfml_atom_typedef_MOD_atom_list_to_cell(ADDRESS a, ADDRESS ac);
void __cfml_atom_typedef_MOD_atom_uequi_list(ADDRESS cell, ADDRESS ac);
void __cfml_atom_typedef_MOD_copy_atom_list(ADDRESS a, ADDRESS ac);
void __cfml_atom_typedef_MOD_deallocate_atoms_cell(ADDRESS ac);
void __cfml_atom_typedef_MOD_deallocate_atom_list(ADDRESS a);
void __cfml_atom_typedef_MOD_deallocate_matom_list(ADDRESS a);
void __cfml_atom_typedef_MOD_get_atom_2nd_tensor_ctr(const float x[], float tensval[], ADDRESS spgr, int* codini, int icodes[], float multip[], const int* ord, const int* ss, const int* ipr);
void __cfml_atom_typedef_MOD_init_atom_type(ADDRESS a);
void __cfml_atom_typedef_MOD_init_matom_type(ADDRESS a);
void __cfml_atom_typedef_MOD_init_err_atmd(void);
void __cfml_atom_typedef_MOD_multi(int* lun, int* iprin, int* conven, ADDRESS spg, ADDRESS a, ADDRESS ac);
void __cfml_atom_typedef_MOD_read_bin_atom_list(ADDRESS ats, int* lun, int* ok);
void __cfml_atom_typedef_MOD_write_atom_list(ADDRESS ats, const int* level, const int* lun, ADDRESS cell);
void __cfml_atom_typedef_MOD_write_bin_atom_list(ADDRESS ats, int* lun);
void __cfml_bvspar_MOD_deallocate_ap_table(void);
void __cfml_bvspar_MOD_deallocate_bvel_table(void);
void __cfml_bvspar_MOD_deallocate_bvs_table(void);
void __cfml_bvspar_MOD_deallocate_sbvs_table(void);
void __cfml_bvspar_MOD_set_atomic_properties(void);
void __cfml_bvspar_MOD_set_bvel_table(void);
void __cfml_bvspar_MOD_set_bvs_table(void);
void __cfml_bvspar_MOD_set_sbvs_table(void);
void __cfml_bvspar_MOD_set_common_oxidation_states_table(void);
void __cfml_bvspar_MOD_set_oxidation_states_table(void);
void __cfml_bvspar_MOD_set_pauling_electronegativity(void);
void __cfml_bond_tables_MOD_init_err_bond(void);
void __cfml_bond_tables_MOD_remove_bonds_table(void);
void __cfml_bond_tables_MOD_set_bonds_table(void);
void __cfml_scattering_chemical_tables_MOD_get_atomic_mass(const char* atm, float* mass, int atm_len__);
void __cfml_scattering_chemical_tables_MOD_get_atomic_vol(const char* atm, float* vol, int atm_len__);
void __cfml_scattering_chemical_tables_MOD_get_chemsymb(const char* label, char* chemsymb, int* z, int label_len__, int chemsymb_len__);
void __cfml_scattering_chemical_tables_MOD_get_covalent_radius(const char* nam, float* rad, int nam_len__);
void __cfml_scattering_chemical_tables_MOD_get_fermi_length(const char* nam, float* b, int nam_len__);
void __cfml_scattering_chemical_tables_MOD_get_inc_xs(const char* nam, float* u, int nam_len__);
void __cfml_scattering_chemical_tables_MOD_get_abs_xs(const char* nam, float* u, int nam_len__);
void __cfml_scattering_chemical_tables_MOD_get_ionic_radius(const char* nam, int* valence, float* rad, int nam_len__);
void __cfml_scattering_chemical_tables_MOD_remove_chem_info(void);
void __cfml_scattering_chemical_tables_MOD_remove_delta_fp_fpp(void);
void __cfml_scattering_chemical_tables_MOD_remove_magnetic_form(void);
void __cfml_scattering_chemical_tables_MOD_remove_xray_form(void);
void __cfml_scattering_chemical_tables_MOD_set_chem_info(void);
void __cfml_scattering_chemical_tables_MOD_set_delta_fp_fpp(void);
void __cfml_scattering_chemical_tables_MOD_set_magnetic_form(void);
void __cfml_scattering_chemical_tables_MOD_set_xray_form(void);
void __cfml_bvs_energy_calc_MOD_allocate_atoms_conf_list(int* n, ADDRESS a);
void __cfml_bvs_energy_calc_MOD_calc_bvs(ADDRESS a, const int* ipr, const int* n_bvsm, const char* bvs_m, const char* filecod, int filecod_len__);
void __cfml_bvs_energy_calc_MOD_calc_map_bvel(ADDRESS a, ADDRESS spg, ADDRESS cell, const char* filecod, int* ndimx, int* ndimy, int* ndimz, const char* atname, float* drmax, const float* delta, float* vol, float* emin, int* npix, const int* outp, float* bvel_map, int filecod_len__, int atname_len__);
void __cfml_bvs_energy_calc_MOD_calc_map_bvs(ADDRESS a, ADDRESS spg, ADDRESS cell, const char* filecod, int* ndimx, int* ndimy, int* ndimz, const char* atname, float* drmax, const float* delta, float* vol, int filecod_len__, int atname_len__);
void __cfml_bvs_energy_calc_MOD_cost_bvs(ADDRESS a, float* gii, float* erep, const char* gic, int gic_len__);
void __cfml_bvs_energy_calc_MOD_cost_bvs_coulombrep(ADDRESS a, float* gii, float* erep);
void __cfml_bvs_energy_calc_MOD_deallocate_atoms_conf_list(ADDRESS a);
void __cfml_bvs_energy_calc_MOD_ewald(float* lattvec, float* vol, ADDRESS ac, double* e);
void __cfml_bvs_energy_calc_MOD_init_err_conf(void);
void __cfml_bvs_energy_calc_MOD_species_on_list(ADDRESS a, const int* mulg, const float* tol, const int* covalent, const int* softbvs);
float __cfml_crystal_metrics_MOD_cell_volume_sigma(ADDRESS cell);
float __cfml_crystal_metrics_MOD_u_equiv(ADDRESS cell, const float th_u[]);
void __cfml_crystal_metrics_MOD_get_basis_from_uvw(float* dmin, const int u[], ADDRESS cell, ADDRESS zoneb, int* ok, const char* mode, int mode_len__);
void __cfml_crystal_metrics_MOD_get_conventional_cell(ADDRESS twofold, ADDRESS cell, int* tr, char* message, int* ok, const float* told, int message_len__);
void __cfml_crystal_metrics_MOD_get_primitive_cell(const char* lat_type, ADDRESS centred_cell, ADDRESS primitive_cell, float* transfm, int lat_type_len__);
void __cfml_crystal_metrics_MOD_init_err_crys(void);
void __cfml_crystal_metrics_MOD_read_bin_crystal_cell(ADDRESS celda, int* lun, int* ok);
void __cfml_crystal_metrics_MOD_set_crystal_cell(const float cellv[], const float angl[], ADDRESS celda, const char* cartype, const float scell[], const float sangl[], int cartype_len__);
void __cfml_crystal_metrics_MOD_volume_sigma_from_cell(const float cell[], const float ang[], const float sigc[], const float siga[], float* volume, float* sigv);
void __cfml_crystal_metrics_MOD_write_bin_crystal_cell(ADDRESS celda, int* lun);
void __cfml_crystal_metrics_MOD_write_crystal_cell(ADDRESS celda, const int* lun);
float __cfml_diffraction_patterns_MOD_calc_fwhm_peak(ADDRESS pat, float* xi, float* yi, float* ybi, const float* rlim);
void __cfml_diffraction_patterns_MOD_allocate_diffraction_pattern(ADDRESS pat, const int* npts);
void __cfml_diffraction_patterns_MOD_calc_background(ADDRESS pat, int* ncyc, int* np, const float* xmin, const float* xmax);
void __cfml_diffraction_patterns_MOD_delete_noisy_points(ADDRESS pat, int* noisyp, const int* fileinfo);
void __cfml_diffraction_patterns_MOD_init_err_diffpatt(void);
void __cfml_diffraction_patterns_MOD_purge_diffraction_pattern(ADDRESS pat, const char* mode, int mode_len__);
void __cfml_diffraction_patterns_MOD_read_background_file(const char* bck_file, const char* bck_mode, ADDRESS dif_pat, int bck_file_len__, int bck_mode_len__);
void __cfml_diffraction_patterns_MOD_write_pattern_freeformat(const char* filename, ADDRESS pat, const int* excl, const float* xmin, const float* xmax, int filename_len__);
void __cfml_diffraction_patterns_MOD_write_pattern_instrm5(const char* filename, ADDRESS pat, const int* excl, const float* xmin, const float* xmax, const char* var, int filename_len__, int var_len__);
void __cfml_diffraction_patterns_MOD_write_pattern_xysig(const char* filename, ADDRESS pat, const int* excl, const float* xmin, const float* xmax, int filename_len__);
void __cfml_export_vtk_MOD_unitcell_to_pdbfile(ADDRESS cell, ADDRESS spaceg, ADDRESS atom_list, const char* filename, int filename_len__);
float __cfml_extinction_correction_MOD_ag_theta(float* cos2t);
float __cfml_extinction_correction_MOD_al_theta(float* cos2t);
float __cfml_extinction_correction_MOD_bg_theta(float* cos2t);
float __cfml_extinction_correction_MOD_bl_theta(float* cos2t);
void __cfml_extinction_correction_MOD_becker_coppens(int* iext, float* f2, const float cext[], float* r, float* g, float* ys, float* dydr, float* dydg);
void __cfml_extinction_correction_MOD_shelx_extinction(int* job, int* iext, float* lambda, float* ssnn, const float hkl[], float* f2, const float extc[], float* ys, float der[], float* derf2);
void __cfml_extinction_correction_MOD_correct_flippingratios(int* iext, float* lambda, float* q, const float extc[], float* ssnn, const float hkl[], float* an, float* bn, float* am, float* bm, float* yp, float* ym, float* ypm, float* dyp, float* dym, float* dypm, float* dymag);
void __cfml_io_formats_MOD_file_to_filelist(const char* file_dat, ADDRESS file_list, int file_dat_len__);
void __cfml_io_formats_MOD_init_err_form(void);
void __cfml_io_formats_MOD_read_uvals(const char* line, ADDRESS atomo, const char* ulabel, int line_len__, int ulabel_len__);
void __cfml_io_formats_MOD_write_cif_powder_profile(const char* filename, int* code, int filename_len__);
void __cfml_io_formats_MOD_write_cif_template(const char* filename, int* type_data, const char* code, ADDRESS cell, ADDRESS spg, ADDRESS a, int filename_len__, int code_len__);
void __cfml_io_formats_MOD_write_shx_template(const char* filename, int* code, const char* title, float* lambda, int* z, ADDRESS celda, ADDRESS space, ADDRESS atomos, int filename_len__, int title_len__);
void __cfml_geometry_calc_MOD_allocate_coordination_type(int* nasu, int* numops, float* dmax, int* max_coor);
void __cfml_geometry_calc_MOD_allocate_point_list(int* n, ADDRESS pl, int* ier);
void __cfml_geometry_calc_MOD_angle_and_sigma(ADDRESS cellp, const float* derm, const float x1[], const float x0[], const float x2[], const float s1[], const float s0[], const float s2[], float* ang, float* s);
void __cfml_geometry_calc_MOD_calc_dist_angle(float* dmax, float* dangl, ADDRESS cell, ADDRESS spg, ADDRESS a, const int* lun);
void __cfml_geometry_calc_MOD_calc_dist_angle_sigma(float* dmax, float* dangl, ADDRESS cell, ADDRESS spg, ADDRESS a, const int* lun, const int* lun_cons, const int* lun_cif, const char* filrest, const float* rdmax, const float* ramin, int filrest_len__);
void __cfml_geometry_calc_MOD_deallocate_coordination_type(void);
void __cfml_geometry_calc_MOD_deallocate_point_list(ADDRESS pl);
void __cfml_geometry_calc_MOD_distance_and_sigma(ADDRESS cellp, const float* derm, const float x0[], const float x1[], const float s0[], const float s1[], float* dis, float* s);
void __cfml_geometry_calc_MOD_get_anglen_axis_from_rotmat(float* r, float axis[], float* angle);
void __cfml_geometry_calc_MOD_get_euler_from_fract(const float x1[], const float x2[], const float x3[], float* mt, float* phi, float* theta, float* chi, float* eum, const char* code, int code_len__);
void __cfml_geometry_calc_MOD_get_matrix_moving_v_to_u(const float v[], const float u[], float* r, float w[], float* ang);
void __cfml_geometry_calc_MOD_get_omegachiphi(float* mt, float* omega, float* chi, float* phi, const char* code, int code_len__);
void __cfml_geometry_calc_MOD_get_phithechi(float* mt, float* phi, float* theta, float* chi, const char* code, int code_len__);
void __cfml_geometry_calc_MOD_get_transf_list(float* trans, const float ox[], ADDRESS pl, ADDRESS npl, int* ifail);
void __cfml_geometry_calc_MOD_init_err_geom(void);
void __cfml_geometry_calc_MOD_p1_dist(float* dmax, ADDRESS cell, ADDRESS spg, ADDRESS ac, const int* lun);
void __cfml_geometry_calc_MOD_print_distances(int* lun, float* dmax, ADDRESS cell, ADDRESS spg, ADDRESS a);
void __cfml_geometry_calc_MOD_set_rotation_matrix(const float ang[], float* rot);
void __cfml_geometry_calc_MOD_set_tdist_coordination(int* max_coor, float* dmax, ADDRESS cell, ADDRESS spg, ADDRESS a);
void __cfml_geometry_calc_MOD_set_tdist_partial_coordination(int* list, int* max_coor, float* dmax, ADDRESS cell, ADDRESS spg, ADDRESS a);
void __cfml_geometry_calc_MOD_torsion_and_sigma(ADDRESS cellp, const float x1[], const float x2[], const float x3[], const float x4[], const float sx1[], const float sx2[], const float sx3[], const float sx4[], float* tor, float* s);
int __cfml_globaldeps_MOD_directory_exists(const char* dirname, int dirname_len__);
void __cfml_globaldeps_MOD_write_date_time(const int* lun, char* dtim, int dtim_len__);
void __cfml_ill_instrm_data_MOD_define_uncompress_program(const char* progname, int progname_len__);
void __cfml_ill_instrm_data_MOD_get_absolute_data_path(int* numor, const char* instrm, char* path, const int* iyear, const int* icycle, char* actual_path, int instrm_len__, int path_len__, int actual_path_len__);
void __cfml_ill_instrm_data_MOD_get_next_yearcycle(char* yearcycle, const int* reset_to_most_recent, int yearcycle_len__);
void __cfml_ill_instrm_data_MOD_init_err_illdata(void);
void __cfml_ill_instrm_data_MOD_initialize_data_directory(void);
void __cfml_ill_instrm_data_MOD_read_current_instrm(const char* filenam, int filenam_len__);
void __cfml_ill_instrm_data_MOD_set_current_orient(float* wave, float* ub, float* setting);
void __cfml_ill_instrm_data_MOD_set_default_instrument(const char* typ, const float wav[], int typ_len__);
void __cfml_ill_instrm_data_MOD_set_ill_data_directory(const char* filedir, int filedir_len__);
void __cfml_ill_instrm_data_MOD_set_instrm_directory(const char* working_dir, const char* instrm, const int* iyear, const int* icycle, int working_dir_len__, int instrm_len__);
void __cfml_ill_instrm_data_MOD_set_instrm_geometry_directory(const char* env_var, int env_var_len__);
void __cfml_ill_instrm_data_MOD_update_current_instrm_ub(const char* filenam, float* ub, float* wave, int filenam_len__);
void __cfml_ill_instrm_data_MOD_write_current_instrm_data(const int* lun, const char* fil, int fil_len__);
void __cfml_ill_instrm_data_MOD_write_generic_numor(ADDRESS num, const int* lun);
void __cfml_ill_instrm_data_MOD_read_calibration_file(const char* filecal, const char* instrm, ADDRESS cal, int filecal_len__, int instrm_len__);
void __cfml_io_messages_MOD_error_message(const char* mess, const int* iunit, const char* routine, const int* fatal, int mess_len__, int routine_len__);
void __cfml_io_messages_MOD_info_message(const char* mess, const int* iunit, int mess_len__);
void __cfml_io_messages_MOD_print_message(const char* mess, int mess_len__);
void __cfml_io_messages_MOD_wait_message(const char* mess, int mess_len__);
void __cfml_io_messages_MOD_write_scroll_text(const char* mess, int mess_len__);
void __cfml_magnetic_symmetry_MOD_calc_induced_sk(ADDRESS cell, ADDRESS spg, float* mfield, const float dir_mfield[], ADDRESS atm, const int* ipr);
void __cfml_magnetic_symmetry_MOD_cleanup_symmetry_operators(ADDRESS mspg);
void __cfml_magnetic_symmetry_MOD_init_magsymm_k_type(ADDRESS mgp);
void __cfml_magnetic_symmetry_MOD_get_moment_ctr(const float xnr[], float moment[], ADDRESS spgr, int* codini, float codes[], const int* ord, const int* ss, const float* att, const int* ipr);
void __cfml_magnetic_symmetry_MOD_set_magnetic_space_group(const char* symb, const char* setting, ADDRESS mspg, const char* parent, const int* mcif, const int* keepd, const int* trn_to, int symb_len__, int setting_len__, int parent_len__);
void __cfml_magnetic_symmetry_MOD_set_shubnikov_group(const char* shubk, ADDRESS sg, ADDRESS mgp, int shubk_len__);
void __cfml_magnetic_symmetry_MOD_setting_change_maggroup(const char* setting, ADDRESS mspg, ADDRESS mspgn, const int* trn_to, int setting_len__);
void __cfml_magnetic_symmetry_MOD_write_magnetic_structure(int* ipr, ADDRESS mgp, ADDRESS am, ADDRESS mag_dom, ADDRESS cell);
void __cfml_magnetic_symmetry_MOD_write_mcif(int* ipr, ADDRESS mcell, ADDRESS msgp, ADDRESS am, ADDRESS cell);
void __cfml_magnetic_symmetry_MOD_write_shubnikov_group(ADDRESS sg, const int* iunit);
int __cfml_maps_calculations_MOD_index_cube(const int iv[], int* mc);
float __cfml_maps_calculations_MOD_vpoint_in_cube(float* r, float* s, float* t, float* x000, float* x001, float* x010, float* x011, float* x100, float* x101, float* x110, float* x111);
float __cfml_maps_calculations_MOD_vpoint_in_line(float* r, float* x0, float* x1);
float __cfml_maps_calculations_MOD_vpoint_in_square(float* r, float* s, float* x00, float* x01, float* x10, float* x11);
void __cfml_maps_calculations_MOD_init_err_maps(void);
void __cfml_maps_calculations_MOD_set_cube_info(void);
float __cfml_math_3d_MOD_veclength(float* a, const float b[]);
void __cfml_math_3d_MOD_init_err_math3d(void);
void __cfml_math_3d_MOD_set_eps(float* neweps);
void __cfml_math_3d_MOD_set_eps_default(void);
void __cfml_math_3d_MOD_get_plane_from_3points(const float p1[], const float p2[], const float p3[], float* a, float* b, float* c, float* d);
void __cfml_math_3d_MOD_matrix_diageigen(float* a, float v[], float* c);
void __cfml_math_3d_MOD_matrix_inverse(float* a, float* b, int* ifail);
void __cfml_math_3d_MOD_resolv_sist_1x2(const int w[], float* t, float ts[], float x[], int ix[]);
void __cfml_math_3d_MOD_resolv_sist_1x3(const int w[], float* t, float ts[], float x[], int ix[]);
void __cfml_math_3d_MOD_resolv_sist_2x2(int* w, const float t[], float ts[], float x[], int ix[]);
void __cfml_math_3d_MOD_resolv_sist_2x3(int* w, const float t[], float ts[], float x[], int ix[]);
void __cfml_math_3d_MOD_resolv_sist_3x3(int* w, const float t[], float ts[], float x[], int ix[]);
float __cfml_math_general_MOD_bessj(int* n, float* x);
int __cfml_math_general_MOD_pgcd(int* a, int* b);
int __cfml_math_general_MOD_ppcm(int* a, int* b);
void __cfml_math_general_MOD_init_err_mathgen(void);
void __cfml_math_general_MOD_set_epsg(float* neweps);
void __cfml_math_general_MOD_set_epsg_default(void);
void __cfml_molecular_crystals_MOD_cartesian_to_fractional(ADDRESS molecule, ADDRESS cell, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_cartesian_to_spherical(ADDRESS molecule, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_cartesian_to_zmatrix(ADDRESS molecule, ADDRESS newmolecule, ADDRESS cell, const float* d_min, const float* d_max);
void __cfml_molecular_crystals_MOD_fix_reference(ADDRESS molecule, ADDRESS newmolecule, const int* natom_o, const int* natom_x, const int* natom_xy);
void __cfml_molecular_crystals_MOD_fix_orient_cartesian(ADDRESS molecule, ADDRESS newmolecule, const int* natom_o, const int* natom_x, const int* natom_xy, float* mat);
void __cfml_molecular_crystals_MOD_fractional_to_cartesian(ADDRESS molecule, ADDRESS cell, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_fractional_to_spherical(ADDRESS molecule, ADDRESS cell, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_fractional_to_zmatrix(ADDRESS molecule, ADDRESS cell, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_init_err_molec(void);
void __cfml_molecular_crystals_MOD_init_molecule(ADDRESS molecule, const int* natm);
void __cfml_molecular_crystals_MOD_init_mol_crys(ADDRESS molx, const int* natm, const int* nmol);
void __cfml_molecular_crystals_MOD_molcrys_to_atomlist(ADDRESS molcrys, ADDRESS atm);
void __cfml_molecular_crystals_MOD_molec_to_atomlist(ADDRESS molec, ADDRESS atm, const char* coor_type, ADDRESS cell, int coor_type_len__);
void __cfml_molecular_crystals_MOD_set_euler_matrix(const char* rt, float* phi, float* theta, float* chi, float* eu, int rt_len__);
void __cfml_molecular_crystals_MOD_spherical_to_cartesian(ADDRESS molecule, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_spherical_to_fractional(ADDRESS molecule, ADDRESS cell, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_spherical_to_zmatrix(ADDRESS molecule, ADDRESS newmolecule, ADDRESS cell);
void __cfml_molecular_crystals_MOD_write_molecular_crystal(ADDRESS molcrys, const int* lun);
void __cfml_molecular_crystals_MOD_write_molecule(ADDRESS molecule, const int* lun);
void __cfml_molecular_crystals_MOD_zmatrix_to_cartesian(ADDRESS molecule, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_zmatrix_to_fractional(ADDRESS molecule, ADDRESS cell, ADDRESS newmolecule);
void __cfml_molecular_crystals_MOD_zmatrix_to_spherical(ADDRESS molecule, ADDRESS newmolecule);
void __cfml_magnetic_structure_factors_MOD_calc_mag_interaction_vector(ADDRESS reflex, ADDRESS cell);
void __cfml_magnetic_structure_factors_MOD_calc_magnetic_strf_miv(ADDRESS cell, ADDRESS mgp, ADDRESS atm, ADDRESS mh);
void __cfml_magnetic_structure_factors_MOD_calc_magnetic_strf_miv_dom(ADDRESS cell, ADDRESS mgp, ADDRESS atm, ADDRESS mag_dom, ADDRESS mh);
void __cfml_magnetic_structure_factors_MOD_calc_magnetic_strf_tensor(ADDRESS spg, ADDRESS atm, ADDRESS mh);
void __cfml_magnetic_structure_factors_MOD_gen_satellites(ADDRESS cell, ADDRESS grp, float* smax, ADDRESS h, const int* ord, const int* powder, ADDRESS hkl);
void __cfml_magnetic_structure_factors_MOD_init_err_msfac(void);
void __cfml_magnetic_structure_factors_MOD_init_mag_structure_factors(ADDRESS reflex, ADDRESS atm, ADDRESS grp, const int* lun);
void __cfml_magnetic_structure_factors_MOD_mag_structure_factors(ADDRESS cell, ADDRESS atm, ADDRESS grp, ADDRESS reflex);
void __cfml_magnetic_structure_factors_MOD_write_mag_structure_factors(int* lun, ADDRESS reflex, ADDRESS grp);
void __cfml_optimization_general_MOD_init_err_optim(void);
void __cfml_optimization_general_MOD_init_opt_conditions(ADDRESS opt);
void __cfml_optimization_general_MOD_write_optimization_conditions(int* ipr, ADDRESS c);
void __cfml_polarimetry_MOD_write_polar_info(ADDRESS polari, ADDRESS mag_dom, const int* lun, const char* info, int info_len__);
void __cfml_polarimetry_MOD_write_polar_line(ADDRESS polari, const int* lun);
void __cfml_powderprofiles_finger_MOD_init_prof_val(void);
void __cfml_powderprofiles_finger_MOD_prof_val(float* eta, float* gamma, float* asym1, float* asym2, float* twoth, float* twoth0, float* dprdt, float* dprdg, float* dprde, float* dprds, float* dprdd, float* profval, int* use_asym, int* use_hps);
void __cfml_powderprofiles_tof_MOD_tof_carpenter(float* dt, float* d, float* alfa, float* beta, float* gamma, float* eta, float* kappa, float* tof_theta, float* tof_peak, ADDRESS deriv);
void __cfml_powderprofiles_tof_MOD_tof_jorgensen(float* dt, float* alfa, float* beta, float* sigma, float* tof_peak, ADDRESS deriv);
void __cfml_powderprofiles_tof_MOD_tof_jorgensen_vondreele(float* dt, float* alfa, float* beta, float* gamma, float* eta, float* tof_peak, ADDRESS deriv);
int __cfml_propagation_vectors_MOD_hk_equiv(const float h[], const float k[], ADDRESS spacegk, const int* friedel);
int __cfml_propagation_vectors_MOD_k_equiv(const float h[], const float k[], const char* latyp, int latyp_len__);
int __cfml_propagation_vectors_MOD_k_equiv_minus_k(const float vec[], const char* lat, int lat_len__);
void __cfml_propagation_vectors_MOD_k_star(const float k[], ADDRESS spacegroup, ADDRESS gk, const int* ext);
void __cfml_propagation_vectors_MOD_write_group_k(ADDRESS gk, const int* lun);
void __cfml_random_generators_MOD_init_err_random(void);
void __cfml_random_generators_MOD_random_beta(float* aa, float* bb, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_binomial1(int* n, float* p, int* first, int* ival);
void __cfml_random_generators_MOD_random_binomial2(int* n, float* pp, int* first, int* ival);
void __cfml_random_generators_MOD_random_cauchy(float* fn_val);
void __cfml_random_generators_MOD_random_chisq(int* ndf, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_exponential(float* fn_val);
void __cfml_random_generators_MOD_random_gamma(float* s, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_gamma1(float* s, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_gamma2(float* s, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_inv_gauss(float* h, float* b, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_mvnorm(int* n, const float h[], float* d, float* f, int* first, float x[], int* ier);
void __cfml_random_generators_MOD_random_neg_binomial(float* sk, float* p, int* ival);
void __cfml_random_generators_MOD_random_normal(float* fn_val);
void __cfml_random_generators_MOD_random_order(int order[], int* n);
void __cfml_random_generators_MOD_random_poisson(float* mt, int* genpoi);
void __cfml_random_generators_MOD_random_t(int* m, float* fn_val);
void __cfml_random_generators_MOD_random_von_mises(float* k, int* first, float* fn_val);
void __cfml_random_generators_MOD_random_weibull(float* a, float* fn_val);
void __cfml_random_generators_MOD_seed_random_number(const int* i_input, const int* i_output);
void __cfml_keywords_code_parser_MOD_allocate_vparam(int* n);
void __cfml_keywords_code_parser_MOD_get_restang_line(const char* line, ADDRESS fatom, int line_len__);
void __cfml_keywords_code_parser_MOD_get_restdis_line(const char* line, ADDRESS fatom, int line_len__);
void __cfml_keywords_code_parser_MOD_get_resttor_line(const char* line, ADDRESS fatom, int line_len__);
void __cfml_keywords_code_parser_MOD_init_err_refcodes(void);
void __cfml_keywords_code_parser_MOD_init_refcodes(ADDRESS fatom, ADDRESS fmatom, ADDRESS mag_dom, ADDRESS molcrys, ADDRESS molec, ADDRESS model);
void __cfml_keywords_code_parser_MOD_read_refgcodes_file(ADDRESS file_dat, int* n_ini, int* n_end, ADDRESS model, const char* sys, const int* iphas, int sys_len__);
void __cfml_keywords_code_parser_MOD_vstate_to_modelpar(ADDRESS model, const char* mode, int mode_len__);
void __cfml_keywords_code_parser_MOD_write_info_refgcodes(ADDRESS model, const int* iunit);
void __cfml_keywords_code_parser_MOD_write_info_refparams(const int* iunit);
void __cfml_keywords_code_parser_MOD_write_restraints_obscalc(ADDRESS a, const int* iunit);
int __cfml_reflections_utilities_MOD_get_maxnumref(float* sintlmax, float* volcell, const float* sintlmin, const int* mult);
int __cfml_reflections_utilities_MOD_mhkl_absent(const int h[], ADDRESS shubg);
void __cfml_reflections_utilities_MOD_init_err_refl(void);
void __cfml_reflections_utilities_MOD_init_reflist(ADDRESS reflex, const int* n);
void __cfml_reflections_utilities_MOD_write_asu(ADDRESS spacegroup, const int* iunit);
void __cfml_reflections_utilities_MOD_write_reflist_info(ADDRESS rfl, const int* iunit, const char* mode, int mode_len__);
void __cfml_geometry_sxtal_MOD_angs_4c_bisecting(float* wave, const float z1[], float* tth, float* om, float* ch, float* ph, int* ierr);
void __cfml_geometry_sxtal_MOD_calang(const float h[], float* tteta, float* om, float* ch, float* ph, int* ierr, const float* wav, float* ubm, const int* geom);
void __cfml_geometry_sxtal_MOD_calc_om_chi_phi(const float vhkl[], const float vlab1[], float* psi, float* ub, float* om, float* ch, float* ph, int* ierr);
void __cfml_geometry_sxtal_MOD_calc_psi(const float vhkl[], const float vlab1[], float* om, float* ch, float* ph, float* ub, float* psi, int* ierr);
void __cfml_geometry_sxtal_MOD_cell_fr_ub(float* ub, const int* ipr, float dcel[], float rcel[]);
void __cfml_geometry_sxtal_MOD_chi_mat(float* chi, float* dum);
void __cfml_geometry_sxtal_MOD_psd_convert(int* mpsd, float* gamm, float* gamp, float* nup, float* xobs, float* zobs, float* cath, float* anod, int* ierr);
void __cfml_geometry_sxtal_MOD_d19psd(int* mpsd, float* ga, float* nu, float* cath, float* anod, int* ierr);
void __cfml_geometry_sxtal_MOD_dspace(float* wave, const float vhkl[], const float cell[], float* ds, float* th, int* ierr);
void __cfml_geometry_sxtal_MOD_equatorial_chi_phi(const float z1[], float* ch, float* ph);
void __cfml_geometry_sxtal_MOD_fixdnu(float* wave, const float z1[], float* nu, float* ch, float* ph, float* ga, float* om, int* ierr);
void __cfml_geometry_sxtal_MOD_flat_cone_vertdet(float* wave, const float z1[], float* ub, float vrho[], float* rho, float* ch, float* ph, float* ga, float* om, float* nu, int* ierr);
void __cfml_geometry_sxtal_MOD_genb(ADDRESS c, float* b);
void __cfml_geometry_sxtal_MOD_genub(float* b, const float h1[], const float h2[], const float h1o[], const float h2o[], float* ub, int* ierr);
void __cfml_geometry_sxtal_MOD_get_angs_nb(float* wave, const float z1[], float* ga, float* om, float* nu, int* ierr);
void __cfml_geometry_sxtal_MOD_get_dspacing_theta(float* wave, const float z1[], float* ds, float* th, int* ierr);
void __cfml_geometry_sxtal_MOD_get_gaomnu_frchiphi(float* wave, const float z1[], float* ch, float* ph, float* ga, float* om, float* nu, int* ierr);
void __cfml_geometry_sxtal_MOD_get_ub_from_hkl_hkl_omega(float* wave, ADDRESS cell, const float h1[], const float h2[], float* omega, float* ub, int* ok, char* mess, int mess_len__);
void __cfml_geometry_sxtal_MOD_get_ub_from_uvw_hkl_omega(float* wave, ADDRESS cell, ADDRESS zone_axis, const float h1[], float* omega, float* ub, int* ok, char* mess, int mess_len__);
void __cfml_geometry_sxtal_MOD_get_waveganu_frz4(const float z4[], float* wave, float* ga, float* nu, int* ierr);
void __cfml_geometry_sxtal_MOD_get_z1_d9angls(float* wave, float* ttheta, float* om, float* ch, float* ph, float z1[]);
void __cfml_geometry_sxtal_MOD_get_z1_from_pixel(int* npx, int* npz, int* ifr, ADDRESS snum, float z1[]);
void __cfml_geometry_sxtal_MOD_normal(float v[], int* ierr);
void __cfml_geometry_sxtal_MOD_phi_mat(float* phi, float* dum);
void __cfml_geometry_sxtal_MOD_psi_mat(float* psi, float* dum);
void __cfml_geometry_sxtal_MOD_refvec(const float vhkl[], float* ub, float vs[], float vz[], int* ierr);
void __cfml_geometry_sxtal_MOD_s4cnb(const float angl_4c[], float angl_nb[], int* ierr);
void __cfml_geometry_sxtal_MOD_set_psd(const float* dist, const float* cg, const float* ag, const int* nh, const int* nv, const int* ip);
void __cfml_geometry_sxtal_MOD_snb4c(const float angl_nb[], float angl_4c[]);
void __cfml_geometry_sxtal_MOD_sxdpsd(int* mpsd, float* gamm, float* wave, float* nup, float* gamp, float* xobs, float* zobs, float* xcel, float* time, float* zcel, int* ierr);
void __cfml_geometry_sxtal_MOD_triple(float v1[], float v2[], float* tv, int* ierr);
void __cfml_geometry_sxtal_MOD_z1frfc(float* wave, float* tth, float* om, float* ch, float* ph, float z1[]);
void __cfml_geometry_sxtal_MOD_z1frmd(float* wave, float* ch, float* ph, float* ga, float* om, float* nu, float z1[]);
void __cfml_geometry_sxtal_MOD_z1frnb(float* wave, float* ga, float* om, float* nu, float z1[]);
void __cfml_geometry_sxtal_MOD_z1frz2(const float z2[], float* ph, float z1[]);
void __cfml_geometry_sxtal_MOD_z1frz3(const float z3[], float* ch, float* ph, float z1[]);
void __cfml_geometry_sxtal_MOD_z1frz4(const float z4[], float* om, float* ch, float* ph, float z1[]);
void __cfml_geometry_sxtal_MOD_z2frz1(const float z1[], float* ph, float z2[]);
void __cfml_geometry_sxtal_MOD_z3frz1(const float z1[], float* ch, float* ph, float z3[]);
void __cfml_geometry_sxtal_MOD_z4frgn(float* wave, float* ga, float* nu, float z4[]);
void __cfml_geometry_sxtal_MOD_z4frz1(const float z1[], float* om, float* ch, float* ph, float z4[]);
void __cfml_structure_factors_MOD_additional_scattering_factors(ADDRESS fil, ADDRESS add_scatt, int* ok, char* mess, int mess_len__);
void __cfml_structure_factors_MOD_allocate_scattering_species(int* n, ADDRESS scf);
void __cfml_structure_factors_MOD_calc_strfactor(const char* mode, const char* rad, int* nn, float* sn, ADDRESS atm, ADDRESS grp, float* sf2, float* deriv, complex* fc, int mode_len__, int rad_len__);
void __cfml_structure_factors_MOD_calc_hkl_strfactor(const char* mode, const char* rad, const int hn[], float* sn, ADDRESS atm, ADDRESS grp, float* sf2, float* deriv, complex* fc, int mode_len__, int rad_len__);
void __cfml_structure_factors_MOD_init_calc_hkl_strfactors(ADDRESS atm, const char* mode, const float* lambda, const int* lun, int mode_len__);
void __cfml_structure_factors_MOD_init_calc_strfactors(ADDRESS reflex, ADDRESS atm, ADDRESS grp, const char* mode, const float* lambda, const int* lun, int mode_len__);
void __cfml_structure_factors_MOD_init_structure_factors(ADDRESS reflex, ADDRESS atm, ADDRESS grp, const char* mode, const float* lambda, const int* lun, int mode_len__);
void __cfml_structure_factors_MOD_structure_factors(ADDRESS atm, ADDRESS grp, ADDRESS reflex, const char* mode, const float* lambda, int mode_len__);
void __cfml_structure_factors_MOD_write_structure_factors(int* lun, ADDRESS reflex, const char* mode, int mode_len__);
void __cfml_spherical_harmonics_MOD_cubic_harm_ang(int* l, int* m, float* theta, float* phi);
void __cfml_spherical_harmonics_MOD_cubic_harm_ucvec(int* l, int* m, const float u[]);
void __cfml_spherical_harmonics_MOD_int_slater_bessel(int* n, int* l, float* z, float* s);
void __cfml_spherical_harmonics_MOD_real_spher_harm_ang(int* l, int* m, int* p, float* theta, float* phi);
void __cfml_spherical_harmonics_MOD_real_spher_harm_ucvec(int* l, int* m, int* p, const float u[]);
void __cfml_spherical_harmonics_MOD_real_spher_harmcharge_ucvec(int* l, int* m, int* p, const float u[]);
void __cfml_spherical_harmonics_MOD_init_err_spher(void);
void __cfml_spherical_harmonics_MOD_pikout_lj_cubic(const char* group, int* lj, int* ncoef, const int* lun, int group_len__);
void __cfml_symmetry_tables_MOD_get_generators(const char* spg, char* gener, int spg_len__, int gener_len__);
void __cfml_symmetry_tables_MOD_remove_spgr_info(void);
void __cfml_symmetry_tables_MOD_remove_system_equiv(void);
void __cfml_symmetry_tables_MOD_remove_wyckoff_info(void);
void __cfml_symmetry_tables_MOD_set_spgr_info(void);
void __cfml_symmetry_tables_MOD_set_system_equiv(void);
void __cfml_symmetry_tables_MOD_set_wyckoff_info(void);
int __cfml_crystallographic_symmetry_MOD_axes_rotation(int* r);
int __cfml_crystallographic_symmetry_MOD_get_laue_num(const char* laueclass, int laueclass_len__);
int __cfml_crystallographic_symmetry_MOD_get_multip_pos(const float x[], ADDRESS spg);
float __cfml_crystallographic_symmetry_MOD_get_occ_site(const float pto[], ADDRESS spg);
int __cfml_crystallographic_symmetry_MOD_get_pointgroup_num(const char* pgname, int pgname_len__);
int __cfml_crystallographic_symmetry_MOD_lattice_trans(const float v[], const char* lat, int lat_len__);
int __cfml_crystallographic_symmetry_MOD_spgr_equal(ADDRESS spacegroup1, ADDRESS spacegroup2);
void __cfml_crystallographic_symmetry_MOD_allocate_lattice_centring(ADDRESS latt, int* n, const int* tinv);
void __cfml_crystallographic_symmetry_MOD_check_generator(const char* gen, int* ok, char* symbol, int gen_len__, int symbol_len__);
void __cfml_crystallographic_symmetry_MOD_decodmatmag(int* sim, char* xyzstring, int xyzstring_len__);
void __cfml_crystallographic_symmetry_MOD_get_laue_str(int* ilaue, char* str, int str_len__);
void __cfml_crystallographic_symmetry_MOD_get_pointgroup_str(int* ipg, char* str, int str_len__);
void __cfml_crystallographic_symmetry_MOD_get_seitz_symbol(int* iop, int* itim, const float tr[], char* seitz_symb, int seitz_symb_len__);
void __cfml_crystallographic_symmetry_MOD_get_shubnikov_operator_symbol(int* mat, int* rot, const float tr[], char* shop_symb, const int* mcif, int* invt, int shop_symb_len__);
void __cfml_crystallographic_symmetry_MOD_get_string_resolv(const float t[], const float x[], const int ix[], char* symb, int symb_len__);
void __cfml_crystallographic_symmetry_MOD_get_symel(int* sim, char* xyzstring, int xyzstring_len__);
void __cfml_crystallographic_symmetry_MOD_get_symkov(int* sim, char* xyzstring, int xyzstring_len__);
void __cfml_crystallographic_symmetry_MOD_get_trasfm_symbol(int* mat, const float tr[], char* abc_symb, const int* oposite, int abc_symb_len__);
void __cfml_crystallographic_symmetry_MOD_get_transl_symbol(const float tr[], char* transl_symb, int transl_symb_len__);
void __cfml_crystallographic_symmetry_MOD_init_err_symm(void);
void __cfml_crystallographic_symmetry_MOD_inverse_symm(int* r, const float t[], int* s, float u[]);
void __cfml_crystallographic_symmetry_MOD_latsym(const char* symb, const int* numl, const float* latc, int symb_len__);
void __cfml_crystallographic_symmetry_MOD_read_bin_spacegroup(ADDRESS spg, int* lun, int* ok);
void __cfml_crystallographic_symmetry_MOD_read_msymm(const char* info, int* sim, float* p_mag, const int* ctrl, int info_len__);
void __cfml_crystallographic_symmetry_MOD_read_symtrans_code(const char* code, int* n, float tr[], int code_len__);
void __cfml_crystallographic_symmetry_MOD_read_xsym(const char* info, int* istart, int* sim, float tt[], const int* ctrl, int info_len__);
void __cfml_crystallographic_symmetry_MOD_searchop(int* sim, int* i1, int* i2, int* isl);
void __cfml_crystallographic_symmetry_MOD_set_spacegroup(const char* spacegen, ADDRESS spacegroup, const char* gen, const int* ngen, const char* mode, const char* force_hall, int spacegen_len__, int mode_len__, int force_hall_len__);
void __cfml_crystallographic_symmetry_MOD_similar_transf_sg(float* mat, const float orig[], ADDRESS spg, ADDRESS spgn, const char* matkind, const char* fix_lat, int matkind_len__, int fix_lat_len__);
void __cfml_crystallographic_symmetry_MOD_sym_prod_st(const char* syma, const char* symb, char* symab, const int* modlat, int syma_len__, int symb_len__, int symab_len__);
void __cfml_crystallographic_symmetry_MOD_write_bin_spacegroup(ADDRESS spg, int* lun);
void __cfml_crystallographic_symmetry_MOD_write_magnetic_space_group(ADDRESS sg, const int* iunit, const int* full);
void __cfml_crystallographic_symmetry_MOD_write_spacegroup(ADDRESS spacegroup, const int* iunit, const int* full);
void __cfml_crystallographic_symmetry_MOD_write_sym(int* lun, int* indx, int* sim, const float tt[], float* p_mag, int* mag);
void __cfml_crystallographic_symmetry_MOD_write_symtrans_code(int* n, const float tr[], char* code, int code_len__);
void __cfml_crystallographic_symmetry_MOD_write_wyckoff(ADDRESS wyckoff, const char* spg, const int* lun, const int* sorting, int spg_len__);
void __cfml_crystallographic_symmetry_MOD_copy_ns_spg_to_spg(ADDRESS spgn, ADDRESS spg);
void __cfml_python_MOD_alloc_mhlist_array(ADDRESS list);
void __cfml_python_MOD_alloc_refllist_array(ADDRESS list);
void __cfml_python_MOD_reflct_array_ctor(ADDRESS array);
void __cfml_python_MOD_reflct_append(ADDRESS array, ADDRESS rflctn);
void __cfml_python_MOD_readxtal_structure_file(const char* filenam, ADDRESS cell, ADDRESS spg, ADDRESS a, const char* mode, const int* iphase, ADDRESS job_info, ADDRESS file_list, const char* cframe, int filenam_len__, int mode_len__, int cframe_len__);
float __cfml_python_MOD_hkls_r(const float h[], ADDRESS crystalcell);
void __cfml_python_MOD_hklgen_sxtal_reflection(ADDRESS crystalcell, ADDRESS spacegroup, float* stlmin, float* stlmax, int* num_ref, ADDRESS reflex, const int ord[], int* hlim);
void __cfml_python_MOD_hklgen_sxtal_list(ADDRESS crystalcell, ADDRESS spacegroup, float* stlmin, float* stlmax, int* num_ref, ADDRESS reflex, const int ord[], int* hlim);
void __cfml_python_MOD_hkluni_reflection(ADDRESS crystalcell, ADDRESS spacegroup, int* friedel, float* value1, float* value2, const char* code, int* num_ref, ADDRESS reflex, const int* no_order, int code_len__);
void __cfml_python_MOD_hkluni_refllist(ADDRESS crystalcell, ADDRESS spacegroup, int* friedel, float* value1, float* value2, const char* code, int* num_ref, ADDRESS reflex, const int* no_order, int code_len__);
void __cfml_python_MOD_read_mag_cfl_file(ADDRESS file_cfl, int* n_ini, int* n_end, ADDRESS mgp, ADDRESS am, ADDRESS sgo, ADDRESS mag_dom, ADDRESS cell);
void __cfml_python_MOD_read_mag_mcif_file(const char* file_mcif, ADDRESS mcell, ADDRESS mgp, ADDRESS am, int file_mcif_len__);
float __cfml_python_MOD_calcgaussian(float* x, float* h);
float __cfml_python_MOD_calchat(float* x, float* h);
float __cfml_python_MOD_calclorentzian(float* x, float* h);
float __cfml_python_MOD_calcpseudovoigt(float* x, float* h, float* eta);
void __cfml_python_MOD_gausspeak(const float x[], float* h, float output[]);
void __cfml_python_MOD_read_ill_data(const char* filename, ADDRESS dif_pat, const char* mode, int filename_len__, int mode_len__);
void __cfml_python_MOD_printbasis(ADDRESS matm);
void __cfml_python_MOD_atom_type_ctor(ADDRESS atom_type_param, int* locc_param, const int lvarf_param[], const char* utype_param, float* mbiso_param, float* occ_param, float* charge_param, const char* sfacsymb_param, const char* lab_param, const float mvarf_param[], float* moment_param, const int lu_param[], float* mocc_param, int* active_param, int* mult_param, const float x_std_param[], const float u_std_param[], int* nvar_param, const char* wyck_param, float* biso_std_param, int* lbiso_param, float* biso_param, const float varf_param[], const float u_param[], float* occ_std_param, const float x_param[], int* z_param, const float mu_param[], const int lx_param[], const char* chemsymb_param, const int ind_param[], const char* thtype_param, const char* atminfo_param, float* ueq_param, const float mx_param[], int utype_param_len__, int sfacsymb_param_len__, int lab_param_len__, int wyck_param_len__, int chemsymb_param_len__, int thtype_param_len__, int atminfo_param_len__);
void __cfml_python_MOD_matom_type_ctor(ADDRESS matom_type_param, const float mmphas_param[], int* locc_param, float* ski_std_param, const int lvarf_param[], const char* utype_param, float* mbiso_param, float* occ_param, int* lbas_param, float* charge_param, const char* sfacsymb_param, const int imat_param[], const int lmphas_param[], const float mphas_param[], float* spher_ski_param, float* skr_param, int* lskr_param, const char* lab_param, float* moment_param, const int lu_param[], float* mocc_param, int* active_param, float* ski_param, int* mult_param, float* spher_skr_std_param, const float x_std_param[], const float u_std_param[], int* lski_param, int* nvar_param, const char* wyck_param, float* biso_std_param, int* lbiso_param, const float mphas_std_param[], const float mvarf_param[], float* biso_param, const float varf_param[], const float u_param[], float* occ_std_param, const float x_param[], int* z_param, int* nvk_param, float* mbas_param, float* spher_ski_std_param, float* spher_skr_param, float* mski_param, float* skr_std_param, const float mu_param[], float* mskr_param, const int lx_param[], const char* chemsymb_param, float* cbas_param, const int ind_param[], float* cbas_std_param, const char* thtype_param, const char* atminfo_param, float* ueq_param, const float mx_param[], int utype_param_len__, int sfacsymb_param_len__, int lab_param_len__, int wyck_param_len__, int chemsymb_param_len__, int thtype_param_len__, int atminfo_param_len__);
void __cfml_python_MOD_crystal_cell_type_ctor(ADDRESS crystal_cell_type_param, const int lang_param[], float* rcellvol_param, const float cell_std_param[], const float ang_param[], float* bl_minv_param, float* gr_param, float* cr_orth_cel_param, float* bl_m_param, float* orth_cr_cel_param, const char* carttype_param, const float rang_param[], const float rcell_param[], const float cell_param[], float* gd_param, float* cellvol_param, const float ang_std_param[], const int lcell_param[], int carttype_param_len__);
void __cfml_python_MOD_get_twofold_axes_a(ADDRESS obj_var, float output_value[]);
void __cfml_python_MOD_set_twofold_axes_a(ADDRESS obj_var, const float new_value[]);
void __cfml_python_MOD_get_twofold_axes_c(ADDRESS obj_var, float output_value[]);
void __cfml_python_MOD_set_twofold_axes_c(ADDRESS obj_var, const float new_value[]);
void __cfml_python_MOD_get_twofold_axes_b(ADDRESS obj_var, float output_value[]);
void __cfml_python_MOD_set_twofold_axes_b(ADDRESS obj_var, const float new_value[]);
void __cfml_python_MOD_get_twofold_axes_maxes(ADDRESS obj_var, float output_value[]);
void __cfml_python_MOD_set_twofold_axes_maxes(ADDRESS obj_var, const float new_value[]);
int __cfml_python_MOD_get_twofold_axes_ntwo(ADDRESS obj_var);
void __cfml_python_MOD_set_twofold_axes_ntwo(ADDRESS obj_var, int* new_value);
void __cfml_python_MOD_get_twofold_axes_cross(ADDRESS obj_var, float output_value[]);
void __cfml_python_MOD_set_twofold_axes_cross(ADDRESS obj_var, const float new_value[]);
float __cfml_python_MOD_get_twofold_axes_tol(ADDRESS obj_var);
void __cfml_python_MOD_set_twofold_axes_tol(ADDRESS obj_var, float* new_value);
void __cfml_python_MOD_get_twofold_axes_rtwofold(ADDRESS obj_var, int* output_value);
void __cfml_python_MOD_set_twofold_axes_rtwofold(ADDRESS obj_var, int* new_value);
void __cfml_python_MOD_get_twofold_axes_caxes(ADDRESS obj_var, float* output_value);
void __cfml_python_MOD_set_twofold_axes_caxes(ADDRESS obj_var, float* new_value);
void __cfml_python_MOD_get_twofold_axes_dot(ADDRESS obj_var, int output_value[]);
void __cfml_python_MOD_set_twofold_axes_dot(ADDRESS obj_var, const int new_value[]);
void __cfml_python_MOD_get_twofold_axes_dtwofold(ADDRESS obj_var, int* output_value);
void __cfml_python_MOD_set_twofold_axes_dtwofold(ADDRESS obj_var, int* new_value);
void __cfml_python_MOD_twofold_axes_type_ctor(ADDRESS twofold_axes_type_param, const float a_param[], const float c_param[], const float b_param[], const float maxes_param[], int* ntwo_param, const float cross_param[], float* tol_param, int* rtwofold_param, float* caxes_param, const int dot_param[], int* dtwofold_param);
void __cfml_python_MOD_zone_axis_type_ctor(ADDRESS zone_axis_type_param, int* nlayer_param, const int rx_param[], const int ry_param[], const int uvw_param[]);
void __cfml_python_MOD_interval_type_ctor(ADDRESS interval_type_param, float* maxb_param, float* mina_param);
void __cfml_python_MOD_msym_oper_type_ctor(ADDRESS msym_oper_type_param, float* phas_param, int* rot_param);
void __cfml_python_MOD_magnetic_group_type_ctor(ADDRESS magnetic_group_type_param, const int tinv_param[], const char* shubnikov_param, ADDRESS spg_param, int shubnikov_param_len__);
void __cfml_python_MOD_reflect_type_ctor(ADDRESS reflect_type_param, const int h_param[], float* s_param, int* mult_param);
void __cfml_python_MOD_reflection_type_ctor(ADDRESS reflection_type_param, float* a_param, float* aa_param, float* b_param, float* bb_param, const int h_param[], float* sfo_param, float* s_param, float* fc_param, float* w_param, float* phase_param, int* mult_param, float* fo_param);
void __cfml_python_MOD_ns_sym_oper_type_ctor(ADDRESS ns_sym_oper_type_param, const float tr_param[], float* rot_param);
void __cfml_python_MOD_sym_oper_type_ctor(ADDRESS sym_oper_type_param, const float tr_param[], int* rot_param);
void __f2kcli_MOD_get_command(char* command, int* length, int* status, int command_len__);
void __f2kcli_MOD_get_command_argument(int* number, char* value, int* length, int* status, int value_len__);
void __f2kcli_MOD_get_environment_variable(const char* name, char* value, int* length, int* status, const int* trim_name, int name_len__, int value_len__);
}
#endif // SWIG

/*! \brief Wrapper class for Fortran routines that do not operate on a derived type
*/
class FortFuncs {

public:
static int equiv_atm(const char* nam1, const char* nam2, const char* nameat);

static void allocate_atoms_cell(int nasu, int mul, float dmax, atoms_cell_type* ac);

/*! \param[out] fail OPTIONAL
*/
static void allocate_atom_list(int n, atom_list_type* a, int* fail=NULL);

/*! \param[in] mfield OPTIONAL
*
*  \param[in] dirf OPTIONAL
*  ARRAY
*/
static void allocate_matom_list(int n, matom_list_type* a, const float* mfield=NULL, const std::vector<float>* dirf=NULL);

static void atlist1_extencell_atlist2(space_group_type* spg, atom_list_type* a, atom_list_type* c, int conven);

static void atoms_cell_to_list(atoms_cell_type* ac, atom_list_type* a);

static void atom_list_to_cell(atom_list_type* a, atoms_cell_type* ac);

static void atom_uequi_list(crystal_cell_type* cell, atom_list_type* ac);

static void copy_atom_list(atom_list_type* a, atom_list_type* ac);

static void deallocate_atoms_cell(atoms_cell_type* ac);

static void deallocate_atom_list(atom_list_type* a);

static void deallocate_matom_list(matom_list_type* a);

/*! \param[in] x ARRAY
*
*  \param tensval ARRAY
*
*  \param icodes ARRAY
*
*  \param multip ARRAY
*
*  \param[in] ord OPTIONAL
*
*  \param[in] ipr OPTIONAL
*/
static void get_atom_2nd_tensor_ctr(const std::vector<float>* x, std::vector<float>* tensval, space_group_type* spgr, int* codini, std::vector<int>* icodes, std::vector<float>* multip, const int* ord=NULL, const int* ipr=NULL);

static void init_atom_type(atom_type* a);

static void init_matom_type(matom_type* a);

static void init_err_atmd(void);

static void multi(int lun, int iprin, int conven, space_group_type* spg, atom_list_type* a, atoms_cell_type* ac);

static void read_bin_atom_list(atom_list_type* ats, int lun, int* ok);

/*! \param[in] level OPTIONAL
*
*  \param[in] lun OPTIONAL
*
*  \param[in] cell OPTIONAL
*/
static void write_atom_list(atom_list_type* ats, const int* level=NULL, const int* lun=NULL, crystal_cell_type* cell=NULL);

static void write_bin_atom_list(atom_list_type* ats, int lun);

static void deallocate_ap_table(void);

static void deallocate_bvel_table(void);

static void deallocate_bvs_table(void);

static void deallocate_sbvs_table(void);

static void set_atomic_properties(void);

static void set_bvel_table(void);

static void set_bvs_table(void);

static void set_sbvs_table(void);

static void set_common_oxidation_states_table(void);

static void set_oxidation_states_table(void);

static void set_pauling_electronegativity(void);

static void init_err_bond(void);

static void remove_bonds_table(void);

static void set_bonds_table(void);

static void get_atomic_mass(const char* atm, float* mass);

static void get_atomic_vol(const char* atm, float* vol);

/*! \param[out] z OPTIONAL
*/
static void get_chemsymb(const char* label, std::string *chemsymb, int* z=NULL);

static void get_covalent_radius(const char* nam, float* rad);

static void get_fermi_length(const char* nam, float* b);

static void get_inc_xs(const char* nam, float* u);

static void get_abs_xs(const char* nam, float* u);

static void get_ionic_radius(const char* nam, int valence, float* rad);

static void remove_chem_info(void);

static void remove_delta_fp_fpp(void);

static void remove_magnetic_form(void);

static void remove_xray_form(void);

static void set_chem_info(void);

static void set_delta_fp_fpp(void);

static void set_magnetic_form(void);

static void set_xray_form(void);

static void allocate_atoms_conf_list(int n, atoms_conf_list_type* a);

/*! \param[in] ipr OPTIONAL
*
*  \param[in] n_bvsm OPTIONAL
*
*  \param[in] filecod OPTIONAL
*/
static void calc_bvs(atoms_conf_list_type* a, const int* ipr=NULL, const int* n_bvsm=NULL, const char* filecod=NULL);

/*! \param[in] delta OPTIONAL
*
*  \param[out] vol OPTIONAL
*
*  \param[out] emin OPTIONAL
*
*  \param[out] npix OPTIONAL
*
*  \param[in] outp OPTIONAL
*/
static void calc_map_bvel(atoms_conf_list_type* a, space_group_type* spg, crystal_cell_type* cell, const char* filecod, int ndimx, int ndimy, int ndimz, const char* atname, float drmax, const float* delta=NULL, float* vol=NULL, float* emin=NULL, int* npix=NULL, const int* outp=NULL);

/*! \param[in] delta OPTIONAL
*
*  \param[out] vol OPTIONAL
*/
static void calc_map_bvs(atoms_conf_list_type* a, space_group_type* spg, crystal_cell_type* cell, const char* filecod, int ndimx, int ndimy, int ndimz, const char* atname, float drmax, const float* delta=NULL, float* vol=NULL);

/*! \param[out] erep OPTIONAL
*
*  \param[in] gic OPTIONAL
*/
static void cost_bvs(atoms_conf_list_type* a, float* gii, float* erep=NULL, const char* gic=NULL);

static void cost_bvs_coulombrep(atoms_conf_list_type* a, float* gii, float* erep);

static void deallocate_atoms_conf_list(atoms_conf_list_type* a);

static void ewald(const FortranMatrix<float> *lattvec, float vol, atoms_cell_type* ac, double* e);

static void init_err_conf(void);

/*! \param[in] mulg OPTIONAL
*
*  \param[in] tol OPTIONAL
*
*  \param[in] covalent OPTIONAL
*
*  \param[in] softbvs OPTIONAL
*/
static void species_on_list(atoms_conf_list_type* a, const int* mulg=NULL, const float* tol=NULL, const int* covalent=NULL, const int* softbvs=NULL);

static float cell_volume_sigma(crystal_cell_type* cell);

/*! \param[in] th_u ARRAY
*/
static float u_equiv(crystal_cell_type* cell, const std::vector<float>* th_u);

/*! \param[in] u ARRAY
*
*  \param[in] mode OPTIONAL
*/
static void get_basis_from_uvw(float dmin, const std::vector<int>* u, crystal_cell_type* cell, zone_axis_type* zoneb, int* ok, const char* mode=NULL);

/*! \param[in] told OPTIONAL
*/
static void get_conventional_cell(twofold_axes_type* twofold, crystal_cell_type* cell, FortranMatrix<int> *tr, std::string *message, int* ok, const float* told=NULL);

static void get_primitive_cell(const char* lat_type, crystal_cell_type* centred_cell, crystal_cell_type* primitive_cell, FortranMatrix<float> *transfm);

static void init_err_crys(void);

static void read_bin_crystal_cell(crystal_cell_type* celda, int lun, int* ok);

/*! \param[in] cellv ARRAY
*
*  \param[in] angl ARRAY
*
*  \param[in] cartype OPTIONAL
*
*  \param[in] scell OPTIONAL
*  ARRAY
*
*  \param[in] sangl OPTIONAL
*  ARRAY
*/
static void set_crystal_cell(const std::vector<float>* cellv, const std::vector<float>* angl, crystal_cell_type* celda, const char* cartype=NULL, const std::vector<float>* scell=NULL, const std::vector<float>* sangl=NULL);

/*! \param[in] cell ARRAY
*
*  \param[in] ang ARRAY
*
*  \param[in] sigc ARRAY
*
*  \param[in] siga ARRAY
*/
static void volume_sigma_from_cell(const std::vector<float>* cell, const std::vector<float>* ang, const std::vector<float>* sigc, const std::vector<float>* siga, float* volume, float* sigv);

static void write_bin_crystal_cell(crystal_cell_type* celda, int lun);

/*! \param[in] lun OPTIONAL
*/
static void write_crystal_cell(crystal_cell_type* celda, const int* lun=NULL);

/*! \param[in] rlim OPTIONAL
*/
static float calc_fwhm_peak(diffraction_pattern_type* pat, float xi, float yi, float ybi, const float* rlim=NULL);

/*! \param[in] npts OPTIONAL
*/
static void allocate_diffraction_pattern(diffraction_pattern_type* pat, const int* npts=NULL);

/*! \param[in] xmin OPTIONAL
*
*  \param[in] xmax OPTIONAL
*/
static void calc_background(diffraction_pattern_type* pat, int ncyc, int np, const float* xmin=NULL, const float* xmax=NULL);

/*! \param[in] fileinfo OPTIONAL
*/
static void delete_noisy_points(diffraction_pattern_type* pat, int* noisyp, const int* fileinfo=NULL);

static void init_err_diffpatt(void);

static void purge_diffraction_pattern(diffraction_pattern_type* pat, const char* mode);

static void read_background_file(const char* bck_file, const char* bck_mode, diffraction_pattern_type* dif_pat);

/*! \param[in] xmin OPTIONAL
*
*  \param[in] xmax OPTIONAL
*/
static void write_pattern_freeformat(const char* filename, diffraction_pattern_type* pat, const float* xmin=NULL, const float* xmax=NULL);

/*! \param[in] xmin OPTIONAL
*
*  \param[in] xmax OPTIONAL
*
*  \param[in] var OPTIONAL
*/
static void write_pattern_instrm5(const char* filename, diffraction_pattern_type* pat, const float* xmin=NULL, const float* xmax=NULL, const char* var=NULL);

/*! \param[in] xmin OPTIONAL
*
*  \param[in] xmax OPTIONAL
*/
static void write_pattern_xysig(const char* filename, diffraction_pattern_type* pat, const float* xmin=NULL, const float* xmax=NULL);

static void unitcell_to_pdbfile(crystal_cell_type* cell, space_group_type* spaceg, atom_list_type* atom_list, const char* filename);

static float ag_theta(float cos2t);

static float al_theta(float cos2t);

static float bg_theta(float cos2t);

static float bl_theta(float cos2t);

/*! \param[in] cext ARRAY
*
*  \param[out] dydr OPTIONAL
*
*  \param[out] dydg OPTIONAL
*/
static void becker_coppens(int iext, float f2, const std::vector<float>* cext, float r, float g, float* ys, float* dydr=NULL, float* dydg=NULL);

/*! \param[in] hkl ARRAY
*
*  \param[in] extc ARRAY
*
*  \param[out] der OPTIONAL
*  ARRAY
*
*  \param[out] derf2 OPTIONAL
*/
static void shelx_extinction(int job, int iext, float lambda, float ssnn, const std::vector<float>* hkl, float f2, const std::vector<float>* extc, float* ys, std::vector<float>* der=NULL, float* derf2=NULL);

/*! \param[in] extc ARRAY
*
*  \param[in] hkl ARRAY
*/
static void correct_flippingratios(int iext, float lambda, float q, const std::vector<float>* extc, float ssnn, const std::vector<float>* hkl, float an, float bn, float am, float bm, float* yp, float* ym, float* ypm);

static void file_to_filelist(const char* file_dat, file_list_type* file_list);

static void init_err_form(void);

static void read_uvals(const char* line, atom_type* atomo, const char* ulabel);

static void write_cif_powder_profile(const char* filename, int code);

static void write_cif_template(const char* filename, int type_data, const char* code, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a);

static void write_shx_template(const char* filename, int code, const char* title, float lambda, int z, crystal_cell_type* celda, space_group_type* space, atom_list_type* atomos);

static void allocate_coordination_type(int nasu, int numops, float dmax, int* max_coor);

static void allocate_point_list(int n, point_list_type* pl, int* ier);

/*! \param[in] x1 ARRAY
*
*  \param[in] x0 ARRAY
*
*  \param[in] x2 ARRAY
*
*  \param[in] s1 ARRAY
*
*  \param[in] s0 ARRAY
*
*  \param[in] s2 ARRAY
*/
static void angle_and_sigma(crystal_cell_type* cellp, const float* derm, const std::vector<float>* x1, const std::vector<float>* x0, const std::vector<float>* x2, const std::vector<float>* s1, const std::vector<float>* s0, const std::vector<float>* s2, float* ang, float* s);

/*! \param[in] lun OPTIONAL
*/
static void calc_dist_angle(float dmax, float dangl, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a, const int* lun=NULL);

/*! \param[in] lun OPTIONAL
*
*  \param[in] lun_cons OPTIONAL
*
*  \param[in] lun_cif OPTIONAL
*
*  \param[in] filrest OPTIONAL
*
*  \param[in] rdmax OPTIONAL
*
*  \param[in] ramin OPTIONAL
*/
static void calc_dist_angle_sigma(float dmax, float dangl, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a, const int* lun=NULL, const int* lun_cons=NULL, const int* lun_cif=NULL, const char* filrest=NULL, const float* rdmax=NULL, const float* ramin=NULL);

static void deallocate_coordination_type(void);

static void deallocate_point_list(point_list_type* pl);

/*! \param[in] x0 ARRAY
*
*  \param[in] x1 ARRAY
*
*  \param[in] s0 ARRAY
*
*  \param[in] s1 ARRAY
*/
static void distance_and_sigma(crystal_cell_type* cellp, const float* derm, const std::vector<float>* x0, const std::vector<float>* x1, const std::vector<float>* s0, const std::vector<float>* s1, float* dis, float* s);

/*! \param[out] axis ARRAY
*/
static void get_anglen_axis_from_rotmat(const FortranMatrix<float> *r, std::vector<float>* axis, float* angle);

/*! \param[in] x1 ARRAY
*
*  \param[in] x2 ARRAY
*
*  \param[in] x3 ARRAY
*
*  \param[out] eum OPTIONAL
*
*  \param[in] code OPTIONAL
*/
static void get_euler_from_fract(const std::vector<float>* x1, const std::vector<float>* x2, const std::vector<float>* x3, const FortranMatrix<float> *mt, float* phi, float* theta, float* chi, FortranMatrix<float> *eum=NULL, const char* code=NULL);

/*! \param[in] v ARRAY
*
*  \param[in] u ARRAY
*
*  \param[out] w OPTIONAL
*  ARRAY
*
*  \param[out] ang OPTIONAL
*/
static void get_matrix_moving_v_to_u(const std::vector<float>* v, const std::vector<float>* u, FortranMatrix<float> *r, std::vector<float>* w=NULL, float* ang=NULL);

/*! \param[in] code OPTIONAL
*/
static void get_omegachiphi(const FortranMatrix<float> *mt, float* omega, float* chi, float* phi, const char* code=NULL);

/*! \param[in] code OPTIONAL
*/
static void get_phithechi(const FortranMatrix<float> *mt, float* phi, float* theta, float* chi, const char* code=NULL);

/*! \param[in] ox ARRAY
*/
static void get_transf_list(const FortranMatrix<float> *trans, const std::vector<float>* ox, point_list_type* pl, point_list_type* npl, int* ifail);

static void init_err_geom(void);

/*! \param[in] lun OPTIONAL
*/
static void p1_dist(float dmax, crystal_cell_type* cell, space_group_type* spg, atoms_cell_type* ac, const int* lun=NULL);

static void print_distances(int lun, float dmax, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a);

/*! \param[in] ang ARRAY
*/
static void set_rotation_matrix(const std::vector<float>* ang, FortranMatrix<float> *rot);

static void set_tdist_coordination(int max_coor, float dmax, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a);

static void set_tdist_partial_coordination(int list, int max_coor, float dmax, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a);

/*! \param[in] x1 ARRAY
*
*  \param[in] x2 ARRAY
*
*  \param[in] x3 ARRAY
*
*  \param[in] x4 ARRAY
*
*  \param[in] sx1 ARRAY
*
*  \param[in] sx2 ARRAY
*
*  \param[in] sx3 ARRAY
*
*  \param[in] sx4 ARRAY
*/
static void torsion_and_sigma(crystal_cell_type* cellp, const std::vector<float>* x1, const std::vector<float>* x2, const std::vector<float>* x3, const std::vector<float>* x4, const std::vector<float>* sx1, const std::vector<float>* sx2, const std::vector<float>* sx3, const std::vector<float>* sx4, float* tor, float* s);

static int directory_exists(const char* dirname);

/*! \param[in] lun OPTIONAL
*
*  \param[out] dtim OPTIONAL
*/
static void write_date_time(const int* lun=NULL, std::string *dtim=NULL);

static void define_uncompress_program(const char* progname);

/*! \param[in] iyear OPTIONAL
*
*  \param[in] icycle OPTIONAL
*
*  \param[out] actual_path OPTIONAL
*/
static void get_absolute_data_path(int numor, const char* instrm, std::string *path, const int* iyear=NULL, const int* icycle=NULL, std::string *actual_path=NULL);

/*! \param[in] reset_to_most_recent OPTIONAL
*/
static void get_next_yearcycle(std::string *yearcycle, const int* reset_to_most_recent=NULL);

static void init_err_illdata(void);

static void initialize_data_directory(void);

static void read_current_instrm(const char* filenam);

/*! \param[in] setting OPTIONAL
*/
static void set_current_orient(float wave, const FortranMatrix<float> *ub, const FortranMatrix<float> *setting=NULL);

/*! \param[in] typ OPTIONAL
*
*  \param[in] wav OPTIONAL
*  ARRAY
*/
static void set_default_instrument(const char* typ=NULL, const std::vector<float>* wav=NULL);

static void set_ill_data_directory(const char* filedir);

/*! \param[in] working_dir OPTIONAL
*
*  \param[in] instrm OPTIONAL
*
*  \param[in] iyear OPTIONAL
*
*  \param[in] icycle OPTIONAL
*/
static void set_instrm_directory(const char* working_dir=NULL, const char* instrm=NULL, const int* iyear=NULL, const int* icycle=NULL);

/*! \param[in] env_var OPTIONAL
*/
static void set_instrm_geometry_directory(const char* env_var=NULL);

static void update_current_instrm_ub(const char* filenam, const FortranMatrix<float> *ub, float wave);

/*! \param[in] lun OPTIONAL
*
*  \param[in] fil OPTIONAL
*/
static void write_current_instrm_data(const int* lun=NULL, const char* fil=NULL);

/*! \param[in] lun OPTIONAL
*/
static void write_generic_numor(generic_numor_type* num, const int* lun=NULL);

static void read_calibration_file(const char* filecal, const char* instrm, calibration_detector_type* cal);

/*! \param[in] iunit OPTIONAL
*
*  \param[in] routine OPTIONAL
*
*  \param[in] fatal OPTIONAL
*/
static void error_message(const char* mess, const int* iunit=NULL, const char* routine=NULL, const int* fatal=NULL);

/*! \param[in] iunit OPTIONAL
*/
static void info_message(const char* mess, const int* iunit=NULL);

static void print_message(const char* mess);

/*! \param[in] mess OPTIONAL
*/
static void wait_message(const char* mess=NULL);

static void write_scroll_text(const char* mess);

/*! \param[in] dir_mfield ARRAY
*
*  \param[in] ipr OPTIONAL
*/
static void calc_induced_sk(crystal_cell_type* cell, space_group_type* spg, float mfield, const std::vector<float>* dir_mfield, matom_list_type* atm, const int* ipr=NULL);

static void cleanup_symmetry_operators(magnetic_space_group_type* mspg);

static void init_magsymm_k_type(magsymm_k_type* mgp);

/*! \param[in] xnr ARRAY
*
*  \param moment ARRAY
*
*  \param codes ARRAY
*
*  \param[in] ord OPTIONAL
*
*  \param[in] ipr OPTIONAL
*/
static void get_moment_ctr(const std::vector<float>* xnr, std::vector<float>* moment, magnetic_space_group_type* spgr, int* codini, std::vector<float>* codes, const int* ord=NULL, const int* ipr=NULL);

/*! \param[in] parent OPTIONAL
*
*  \param[in] mcif OPTIONAL
*
*  \param[in] keepd OPTIONAL
*
*  \param[in] trn_to OPTIONAL
*/
static void set_magnetic_space_group(const char* symb, const char* setting, magnetic_space_group_type* mspg, const char* parent=NULL, const int* mcif=NULL, const int* keepd=NULL, const int* trn_to=NULL);

static void set_shubnikov_group(const char* shubk, magnetic_group_type* sg, magsymm_k_type* mgp);

/*! \param[in] trn_to OPTIONAL
*/
static void setting_change_maggroup(const char* setting, magnetic_space_group_type* mspg, magnetic_space_group_type* mspgn, const int* trn_to=NULL);

/*! \param[in] mag_dom OPTIONAL
*
*  \param[in] cell OPTIONAL
*/
static void write_magnetic_structure(int ipr, magsymm_k_type* mgp, matom_list_type* am, magnetic_domain_type* mag_dom=NULL, crystal_cell_type* cell=NULL);

/*! \param[in] cell OPTIONAL
*/
static void write_mcif(int ipr, crystal_cell_type* mcell, magnetic_space_group_type* msgp, matom_list_type* am, crystal_cell_type* cell=NULL);

/*! \param[in] iunit OPTIONAL
*/
static void write_shubnikov_group(magnetic_group_type* sg, const int* iunit=NULL);

/*! \param[in] iv ARRAY
*/
static int index_cube(const std::vector<int>* iv, int mc);

static float vpoint_in_cube(float r, float s, float t, float x000, float x001, float x010, float x011, float x100, float x101, float x110, float x111);

static float vpoint_in_line(float r, float x0, float x1);

static float vpoint_in_square(float r, float s, float x00, float x01, float x10, float x11);

static void init_err_maps(void);

static void set_cube_info(void);

/*! \param[in] b ARRAY
*/
static float veclength(const FortranMatrix<float> *a, const std::vector<float>* b);

static void init_err_math3d(void);

static void set_eps(float neweps);

static void set_eps_default(void);

/*! \param[in] p1 ARRAY
*
*  \param[in] p2 ARRAY
*
*  \param[in] p3 ARRAY
*/
static void get_plane_from_3points(const std::vector<float>* p1, const std::vector<float>* p2, const std::vector<float>* p3, float* a, float* b, float* c, float* d);

/*! \param[out] v ARRAY
*/
static void matrix_diageigen(const FortranMatrix<float> *a, std::vector<float>* v, FortranMatrix<float> *c);

static void matrix_inverse(const FortranMatrix<float> *a, FortranMatrix<float> *b, int* ifail);

/*! \param[in] w ARRAY
*
*  \param[out] ts ARRAY
*
*  \param[out] x ARRAY
*
*  \param[out] ix ARRAY
*/
static void resolv_sist_1x2(const std::vector<int>* w, float t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix);

/*! \param[in] w ARRAY
*
*  \param[out] ts ARRAY
*
*  \param[out] x ARRAY
*
*  \param[out] ix ARRAY
*/
static void resolv_sist_1x3(const std::vector<int>* w, float t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix);

/*! \param[in] t ARRAY
*
*  \param[out] ts ARRAY
*
*  \param[out] x ARRAY
*
*  \param[out] ix ARRAY
*/
static void resolv_sist_2x2(const FortranMatrix<int> *w, const std::vector<float>* t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix);

/*! \param[in] t ARRAY
*
*  \param[out] ts ARRAY
*
*  \param[out] x ARRAY
*
*  \param[out] ix ARRAY
*/
static void resolv_sist_2x3(const FortranMatrix<int> *w, const std::vector<float>* t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix);

/*! \param[in] t ARRAY
*
*  \param[out] ts ARRAY
*
*  \param[out] x ARRAY
*
*  \param[out] ix ARRAY
*/
static void resolv_sist_3x3(const FortranMatrix<int> *w, const std::vector<float>* t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix);

static float bessj(int n, float x);

/*! \brief check the current limits
*/
static int pgcd(int a, int b);

static int ppcm(int a, int b);

static void init_err_mathgen(void);

static void set_epsg(float neweps);

static void set_epsg_default(void);

/*! \param[out] newmolecule OPTIONAL
*/
static void cartesian_to_fractional(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void cartesian_to_spherical(molecule_type* molecule, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*
*  \param[in] cell OPTIONAL
*
*  \param[in] d_min OPTIONAL
*
*  \param[in] d_max OPTIONAL
*/
static void cartesian_to_zmatrix(molecule_type* molecule, molecule_type* newmolecule=NULL, crystal_cell_type* cell=NULL, const float* d_min=NULL, const float* d_max=NULL);

/*! \param[out] newmolecule OPTIONAL
*
*  \param[in] natom_o OPTIONAL
*
*  \param[in] natom_x OPTIONAL
*
*  \param[in] natom_xy OPTIONAL
*/
static void fix_reference(molecule_type* molecule, molecule_type* newmolecule=NULL, const int* natom_o=NULL, const int* natom_x=NULL, const int* natom_xy=NULL);

/*! \param[out] newmolecule OPTIONAL
*
*  \param[in] natom_o OPTIONAL
*
*  \param[in] natom_x OPTIONAL
*
*  \param[in] natom_xy OPTIONAL
*
*  \param[out] mat OPTIONAL
*/
static void fix_orient_cartesian(molecule_type* molecule, molecule_type* newmolecule=NULL, const int* natom_o=NULL, const int* natom_x=NULL, const int* natom_xy=NULL, FortranMatrix<float> *mat=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void fractional_to_cartesian(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void fractional_to_spherical(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void fractional_to_zmatrix(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule=NULL);

static void init_err_molec(void);

/*! \param[in] natm OPTIONAL
*/
static void init_molecule(molecule_type* molecule, const int* natm=NULL);

/*! \param[in] natm OPTIONAL
*
*  \param[in] nmol OPTIONAL
*/
static void init_mol_crys(molecular_crystal_type* molx, const int* natm=NULL, const int* nmol=NULL);

static void molcrys_to_atomlist(molecular_crystal_type* molcrys, atom_list_type* atm);

/*! \param[in] coor_type OPTIONAL
*
*  \param[in] cell OPTIONAL
*/
static void molec_to_atomlist(molecule_type* molec, atom_list_type* atm, const char* coor_type=NULL, crystal_cell_type* cell=NULL);

static void set_euler_matrix(const char* rt, float phi, float theta, float chi, FortranMatrix<float> *eu);

/*! \param[out] newmolecule OPTIONAL
*/
static void spherical_to_cartesian(molecule_type* molecule, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void spherical_to_fractional(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*
*  \param[in] cell OPTIONAL
*/
static void spherical_to_zmatrix(molecule_type* molecule, molecule_type* newmolecule=NULL, crystal_cell_type* cell=NULL);

/*! \param[in] lun OPTIONAL
*/
static void write_molecular_crystal(molecular_crystal_type* molcrys, const int* lun=NULL);

/*! \param[in] lun OPTIONAL
*/
static void write_molecule(molecule_type* molecule, const int* lun=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void zmatrix_to_cartesian(molecule_type* molecule, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void zmatrix_to_fractional(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule=NULL);

/*! \param[out] newmolecule OPTIONAL
*/
static void zmatrix_to_spherical(molecule_type* molecule, molecule_type* newmolecule=NULL);

static void calc_mag_interaction_vector(magh_list_type* reflex, crystal_cell_type* cell);

static void calc_magnetic_strf_miv(crystal_cell_type* cell, magsymm_k_type* mgp, matom_list_type* atm, magh_type* mh);

static void calc_magnetic_strf_miv_dom(crystal_cell_type* cell, magsymm_k_type* mgp, matom_list_type* atm, magnetic_domain_type* mag_dom, maghd_type* mh);

static void calc_magnetic_strf_tensor(space_group_type* spg, matom_list_type* atm, magh_type* mh);

/*! \param[in] ord OPTIONAL
*
*  \param[in] powder OPTIONAL
*
*  \param[in] hkl OPTIONAL
*/
static void gen_satellites(crystal_cell_type* cell, magsymm_k_type* grp, float smax, magh_list_type* h, const int* ord=NULL, const int* powder=NULL, reflection_list_type* hkl=NULL);

static void init_err_msfac(void);

/*! \param[in] lun OPTIONAL
*/
static void init_mag_structure_factors(magh_list_type* reflex, matom_list_type* atm, magsymm_k_type* grp, const int* lun=NULL);

static void mag_structure_factors(crystal_cell_type* cell, matom_list_type* atm, magsymm_k_type* grp, magh_list_type* reflex);

static void write_mag_structure_factors(int lun, magh_list_type* reflex, magsymm_k_type* grp);

static void init_err_optim(void);

static void init_opt_conditions(opt_conditions_type* opt);

static void write_optimization_conditions(int ipr, opt_conditions_type* c);

/*! \param[in] lun OPTIONAL
*
*  \param[in] info OPTIONAL
*/
static void write_polar_info(polar_calc_type* polari, magnetic_domain_type* mag_dom, const int* lun=NULL, const char* info=NULL);

/*! \param[in] lun OPTIONAL
*/
static void write_polar_line(polar_calc_type* polari, const int* lun=NULL);

static void init_prof_val(void);

static void prof_val(float eta, float gamma, float asym1, float asym2, float twoth, float twoth0, float* dprdt, float* dprdg, float* dprde, float* dprds, float* dprdd, float* profval, int use_asym, int use_hps);

/*! \param[out] deriv OPTIONAL
*/
static void tof_carpenter(float dt, float d, float alfa, float beta, float gamma, float eta, float kappa, float tof_theta, float* tof_peak, deriv_tof_type* deriv=NULL);

/*! \param[out] deriv OPTIONAL
*/
static void tof_jorgensen(float dt, float alfa, float beta, float sigma, float* tof_peak, deriv_tof_type* deriv=NULL);

/*! \param[out] deriv OPTIONAL
*/
static void tof_jorgensen_vondreele(float dt, float alfa, float beta, float gamma, float eta, float* tof_peak, deriv_tof_type* deriv=NULL);

/*! \param[in] h ARRAY
*
*  \param[in] k ARRAY
*
*  \param[in] friedel OPTIONAL
*/
static int hk_equiv(const std::vector<float>* h, const std::vector<float>* k, group_k_type* spacegk, const int* friedel=NULL);

/*! \param[in] h ARRAY
*
*  \param[in] k ARRAY
*/
static int k_equiv(const std::vector<float>* h, const std::vector<float>* k, const char* latyp);

/*! \param[in] vec ARRAY
*/
static int k_equiv_minus_k(const std::vector<float>* vec, const char* lat);

/*! \param[in] k ARRAY
*
*  \param[in] ext OPTIONAL
*/
static void k_star(const std::vector<float>* k, space_group_type* spacegroup, group_k_type* gk, const int* ext=NULL);

/*! \param[in] lun OPTIONAL
*/
static void write_group_k(group_k_type* gk, const int* lun=NULL);

static void init_err_random(void);

static void random_beta(float aa, float bb, int first, float* fn_val);

static void random_binomial1(int n, float p, int first, int* ival);

static void random_binomial2(int n, float pp, int first, int* ival);

static void random_cauchy(float* fn_val);

static void random_chisq(int ndf, int first, float* fn_val);

static void random_exponential(float* fn_val);

static void random_gamma(float s, int first, float* fn_val);

static void random_gamma1(float s, int first, float* fn_val);

static void random_gamma2(float s, int first, float* fn_val);

static void random_inv_gauss(float h, float b, int first, float* fn_val);

/*! \param[in] h ARRAY
*
*  \param[out] x ARRAY
*/
static void random_mvnorm(const std::vector<float>* h, float d, float* f, int first, std::vector<float>* x, int* ier);

static void random_neg_binomial(float sk, float p, int* ival);

static void random_normal(float* fn_val);

/*! \param[out] order ARRAY
*/
static void random_order(std::vector<int>* order);

static void random_poisson(float mt, int* genpoi);

static void random_t(int m, float* fn_val);

static void random_von_mises(float k, int first, float* fn_val);

static void random_weibull(float a, float* fn_val);

/*! \param[in] i_input OPTIONAL
*
*  \param[in] i_output OPTIONAL
*/
static void seed_random_number(const int* i_input=NULL, const int* i_output=NULL);

static void allocate_vparam(int n);

static void get_restang_line(const char* line, atom_list_type* fatom);

static void get_restdis_line(const char* line, atom_list_type* fatom);

static void get_resttor_line(const char* line, atom_list_type* fatom);

static void init_err_refcodes(void);

/*! \param fatom OPTIONAL
*
*  \param fmatom OPTIONAL
*
*  \param mag_dom OPTIONAL
*
*  \param molcrys OPTIONAL
*
*  \param molec OPTIONAL
*
*  \param model OPTIONAL
*/
static void init_refcodes(atom_list_type* fatom=NULL, matom_list_type* fmatom=NULL, magnetic_domain_type* mag_dom=NULL, molecular_crystal_type* molcrys=NULL, molecule_type* molec=NULL, nonatomic_parameter_list_type* model=NULL);

/*! \param[in] sys OPTIONAL
*
*  \param[in] iphas OPTIONAL
*/
static void read_refgcodes_file(file_list_type* file_dat, int n_ini, int n_end, nonatomic_parameter_list_type* model, const char* sys=NULL, const int* iphas=NULL);

/*! \param[in] mode OPTIONAL
*/
static void vstate_to_modelpar(nonatomic_parameter_list_type* model, const char* mode=NULL);

/*! \param[in] iunit OPTIONAL
*/
static void write_info_refgcodes(nonatomic_parameter_list_type* model, const int* iunit=NULL);

/*! \param[in] iunit OPTIONAL
*/
static void write_info_refparams(const int* iunit=NULL);

/*! \param[in] iunit OPTIONAL
*/
static void write_restraints_obscalc(atom_list_type* a, const int* iunit=NULL);

/*! \param[in] sintlmin OPTIONAL
*
*  \param[in] mult OPTIONAL
*/
static int get_maxnumref(float sintlmax, float volcell, const float* sintlmin=NULL, const int* mult=NULL);

/*! \param[in] h ARRAY
*/
static int mhkl_absent(const std::vector<int>* h, magnetic_space_group_type* shubg);

static void init_err_refl(void);

/*! \param[in] n OPTIONAL
*/
static void init_reflist(reflection_list_type* reflex, const int* n=NULL);

/*! \param[in] iunit OPTIONAL
*/
static void write_asu(space_group_type* spacegroup, const int* iunit=NULL);

/*! \param[in] iunit OPTIONAL
*
*  \param[in] mode OPTIONAL
*/
static void write_reflist_info(reflection_list_type* rfl, const int* iunit=NULL, const char* mode=NULL);

/*! \param[in] z1 ARRAY
*/
static void angs_4c_bisecting(float wave, const std::vector<float>* z1, float* tth, float* om, float* ch, float* ph, int* ierr);

/*! \param[in] h ARRAY
*
*  \param[in] wav OPTIONAL
*
*  \param[in] ubm OPTIONAL
*
*  \param[in] geom OPTIONAL
*/
static void calang(const std::vector<float>* h, float* tteta, float* om, float* ch, float* ph, int* ierr, const float* wav=NULL, const FortranMatrix<float> *ubm=NULL, const int* geom=NULL);

/*! \param[in] vhkl ARRAY
*
*  \param[in] vlab1 ARRAY
*/
static void calc_om_chi_phi(const std::vector<float>* vhkl, const std::vector<float>* vlab1, float psi, const FortranMatrix<float> *ub, float* om, float* ch, float* ph, int* ierr);

/*! \param[in] vhkl ARRAY
*
*  \param[in] vlab1 ARRAY
*/
static void calc_psi(const std::vector<float>* vhkl, const std::vector<float>* vlab1, float om, float ch, float ph, const FortranMatrix<float> *ub, float* psi, int* ierr);

/*! \param[in] ipr OPTIONAL
*
*  \param[out] dcel OPTIONAL
*  ARRAY
*
*  \param[out] rcel OPTIONAL
*  ARRAY
*/
static void cell_fr_ub(const FortranMatrix<float> *ub, const int* ipr=NULL, std::vector<float>* dcel=NULL, std::vector<float>* rcel=NULL);

static void chi_mat(float chi, FortranMatrix<float> *dum);

static void psd_convert(int mpsd, float gamm, float* gamp, float* nup, float* xobs, float* zobs, float* cath, float* anod, int* ierr);

static void d19psd(int mpsd, float* ga, float* nu, float* cath, float* anod, int* ierr);

/*! \param[in] vhkl ARRAY
*
*  \param[in] cell ARRAY
*/
static void dspace(float wave, const std::vector<float>* vhkl, const std::vector<float>* cell, float* ds, float* th, int* ierr);

/*! \param[in] z1 ARRAY
*/
static void equatorial_chi_phi(const std::vector<float>* z1, float* ch, float* ph);

/*! \param[in] z1 ARRAY
*/
static void fixdnu(float wave, const std::vector<float>* z1, float nu, float* ch, float* ph, float* ga, float* om, int* ierr);

/*! \param[in] z1 ARRAY
*
*  \param vrho ARRAY
*/
static void flat_cone_vertdet(float wave, const std::vector<float>* z1, const FortranMatrix<float> *ub, std::vector<float>* vrho, float* rho, float* ch, float* ph, float* ga, float* om, float* nu, int* ierr);

static void genb(crystal_cell_type* c, FortranMatrix<float> *b);

/*! \param[in] h1 ARRAY
*
*  \param[in] h2 ARRAY
*
*  \param[in] h1o ARRAY
*
*  \param[in] h2o ARRAY
*/
static void genub(const FortranMatrix<float> *b, const std::vector<float>* h1, const std::vector<float>* h2, const std::vector<float>* h1o, const std::vector<float>* h2o, FortranMatrix<float> *ub, int* ierr);

/*! \param[in] z1 ARRAY
*/
static void get_angs_nb(float wave, const std::vector<float>* z1, float* ga, float* om, float* nu, int* ierr);

/*! \param[in] z1 ARRAY
*/
static void get_dspacing_theta(float wave, const std::vector<float>* z1, float* ds, float* th, int* ierr);

/*! \param[in] z1 ARRAY
*/
static void get_gaomnu_frchiphi(float wave, const std::vector<float>* z1, float ch, float ph, float* ga, float* om, float* nu, int* ierr);

/*! \param[in] h1 ARRAY
*
*  \param[in] h2 ARRAY
*/
static void get_ub_from_hkl_hkl_omega(float wave, crystal_cell_type* cell, const std::vector<float>* h1, const std::vector<float>* h2, float omega, FortranMatrix<float> *ub, int* ok, std::string *mess);

/*! \param[in] h1 ARRAY
*/
static void get_ub_from_uvw_hkl_omega(float wave, crystal_cell_type* cell, zone_axis_type* zone_axis, const std::vector<float>* h1, float omega, FortranMatrix<float> *ub, int* ok, std::string *mess);

/*! \param[in] z4 ARRAY
*/
static void get_waveganu_frz4(const std::vector<float>* z4, float* wave, float* ga, float* nu, int* ierr);

/*! \param[out] z1 ARRAY
*/
static void get_z1_d9angls(float wave, float ttheta, float om, float ch, float ph, std::vector<float>* z1);

/*! \param[out] z1 ARRAY
*/
static void get_z1_from_pixel(int npx, int npz, int ifr, sxtal_numor_type* snum, std::vector<float>* z1);

/*! \param v ARRAY
*/
static void normal(std::vector<float>* v, int* ierr);

static void phi_mat(float phi, FortranMatrix<float> *dum);

static void psi_mat(float psi, FortranMatrix<float> *dum);

/*! \param[in] vhkl ARRAY
*
*  \param[out] vs ARRAY
*
*  \param[out] vz ARRAY
*/
static void refvec(const std::vector<float>* vhkl, const FortranMatrix<float> *ub, std::vector<float>* vs, std::vector<float>* vz, int* ierr);

/*! \param[in] angl_4c ARRAY
*
*  \param[out] angl_nb ARRAY
*/
static void s4cnb(const std::vector<float>* angl_4c, std::vector<float>* angl_nb, int* ierr);

/*! \param[in] dist OPTIONAL
*
*  \param[in] cg OPTIONAL
*
*  \param[in] ag OPTIONAL
*
*  \param[in] nh OPTIONAL
*
*  \param[in] nv OPTIONAL
*
*  \param[in] ip OPTIONAL
*/
static void set_psd(const float* dist=NULL, const float* cg=NULL, const float* ag=NULL, const int* nh=NULL, const int* nv=NULL, const int* ip=NULL);

/*! \param[in] angl_nb ARRAY
*
*  \param[out] angl_4c ARRAY
*/
static void snb4c(const std::vector<float>* angl_nb, std::vector<float>* angl_4c);

static void sxdpsd(int mpsd, float gamm, float* wave, float* nup, float* gamp, float* xobs, float* zobs, float* xcel, float* time, float* zcel, int* ierr);

/*! \param v1 ARRAY
*
*  \param v2 ARRAY
*/
static void triple(std::vector<float>* v1, std::vector<float>* v2, FortranMatrix<float> *tv, int* ierr);

/*! \param[out] z1 ARRAY
*/
static void z1frfc(float wave, float tth, float om, float ch, float ph, std::vector<float>* z1);

/*! \param[out] z1 ARRAY
*/
static void z1frmd(float wave, float ch, float ph, float ga, float om, float nu, std::vector<float>* z1);

/*! \param[out] z1 ARRAY
*/
static void z1frnb(float wave, float ga, float om, float nu, std::vector<float>* z1);

/*! \param[in] z2 ARRAY
*
*  \param[out] z1 ARRAY
*/
static void z1frz2(const std::vector<float>* z2, float ph, std::vector<float>* z1);

/*! \param[in] z3 ARRAY
*
*  \param[out] z1 ARRAY
*/
static void z1frz3(const std::vector<float>* z3, float ch, float ph, std::vector<float>* z1);

/*! \param[in] z4 ARRAY
*
*  \param[out] z1 ARRAY
*/
static void z1frz4(const std::vector<float>* z4, float om, float ch, float ph, std::vector<float>* z1);

/*! \param[in] z1 ARRAY
*
*  \param[out] z2 ARRAY
*/
static void z2frz1(const std::vector<float>* z1, float ph, std::vector<float>* z2);

/*! \param[in] z1 ARRAY
*
*  \param[out] z3 ARRAY
*/
static void z3frz1(const std::vector<float>* z1, float ch, float ph, std::vector<float>* z3);

/*! \param[out] z4 ARRAY
*/
static void z4frgn(float wave, float ga, float nu, std::vector<float>* z4);

/*! \param[in] z1 ARRAY
*
*  \param[out] z4 ARRAY
*/
static void z4frz1(const std::vector<float>* z1, float om, float ch, float ph, std::vector<float>* z4);

static void additional_scattering_factors(file_list_type* fil, scattering_species_type* add_scatt, int* ok, std::string *mess);

static void allocate_scattering_species(int n, scattering_species_type* scf);

static void calc_strfactor(const char* mode, const char* rad, int nn, float sn, atom_list_type* atm, space_group_type* grp, float* sf2);

/*! \param[in] hn ARRAY
*/
static void calc_hkl_strfactor(const char* mode, const char* rad, const std::vector<int>* hn, float sn, atom_list_type* atm, space_group_type* grp, float* sf2);

/*! \param[in] mode OPTIONAL
*
*  \param[in] lambda OPTIONAL
*
*  \param[in] lun OPTIONAL
*/
static void init_calc_hkl_strfactors(atom_list_type* atm, const char* mode=NULL, const float* lambda=NULL, const int* lun=NULL);

/*! \param[in] mode OPTIONAL
*
*  \param[in] lambda OPTIONAL
*
*  \param[in] lun OPTIONAL
*/
static void init_calc_strfactors(reflection_list_type* reflex, atom_list_type* atm, space_group_type* grp, const char* mode=NULL, const float* lambda=NULL, const int* lun=NULL);

/*! \param[in] mode OPTIONAL
*
*  \param[in] lambda OPTIONAL
*
*  \param[in] lun OPTIONAL
*/
static void init_structure_factors(reflection_list_type* reflex, atom_list_type* atm, space_group_type* grp, const char* mode=NULL, const float* lambda=NULL, const int* lun=NULL);

/*! \param[in] mode OPTIONAL
*
*  \param[in] lambda OPTIONAL
*/
static void structure_factors(atom_list_type* atm, space_group_type* grp, reflection_list_type* reflex, const char* mode=NULL, const float* lambda=NULL);

/*! \param[in] mode OPTIONAL
*/
static void write_structure_factors(int lun, reflection_list_type* reflex, const char* mode=NULL);

static void cubic_harm_ang(int l, int m, float theta, float phi);

/*! \param[in] u ARRAY
*/
static void cubic_harm_ucvec(int l, int m, const std::vector<float>* u);

static void int_slater_bessel(int n, int l, float z, float s);

static void real_spher_harm_ang(int l, int m, int p, float theta, float phi);

/*! \param[in] u ARRAY
*/
static void real_spher_harm_ucvec(int l, int m, int p, const std::vector<float>* u);

/*! \param[in] u ARRAY
*/
static void real_spher_harmcharge_ucvec(int l, int m, int p, const std::vector<float>* u);

static void init_err_spher(void);

/*! \param[in] lun OPTIONAL
*/
static void pikout_lj_cubic(const char* group, FortranMatrix<int> *lj, int* ncoef, const int* lun=NULL);

static void get_generators(const char* spg, std::string *gener);

static void remove_spgr_info(void);

static void remove_system_equiv(void);

static void remove_wyckoff_info(void);

static void set_spgr_info(void);

static void set_system_equiv(void);

static void set_wyckoff_info(void);

static int axes_rotation(const FortranMatrix<int> *r);

static int get_laue_num(const char* laueclass);

/*! \param[in] x ARRAY
*/
static int get_multip_pos(const std::vector<float>* x, space_group_type* spg);

/*! \param[in] pto ARRAY
*/
static float get_occ_site(const std::vector<float>* pto, space_group_type* spg);

static int get_pointgroup_num(const char* pgname);

/*! \param[in] v ARRAY
*/
static int lattice_trans(const std::vector<float>* v, const char* lat);

static int spgr_equal(space_group_type* spacegroup1, space_group_type* spacegroup2);

/*! \param[in] tinv OPTIONAL
*/
static void allocate_lattice_centring(lattice_centring_type* latt, int n, const int* tinv=NULL);

/*! \param[out] symbol OPTIONAL
*/
static void check_generator(const char* gen, int* ok, std::string *symbol=NULL);

static void decodmatmag(const FortranMatrix<int> *sim, std::string *xyzstring);

static void get_laue_str(int ilaue, std::string *str);

static void get_pointgroup_str(int ipg, std::string *str);

/*! \param[in] tr ARRAY
*/
static void get_seitz_symbol(int iop, int itim, const std::vector<float>* tr, std::string *seitz_symb);

/*! \param[in] tr ARRAY
*
*  \param[in] mcif OPTIONAL
*
*  \param[out] invt OPTIONAL
*/
static void get_shubnikov_operator_symbol(const FortranMatrix<int> *mat, const FortranMatrix<int> *rot, const std::vector<float>* tr, std::string *shop_symb, const int* mcif=NULL, int* invt=NULL);

/*! \param[in] t ARRAY
*
*  \param[in] x ARRAY
*
*  \param[in] ix ARRAY
*/
static void get_string_resolv(const std::vector<float>* t, const std::vector<float>* x, const std::vector<int>* ix, std::string *symb);

static void get_symel(const FortranMatrix<int> *sim, std::string *xyzstring);

static void get_symkov(const FortranMatrix<int> *sim, std::string *xyzstring);

/*! \param[in] tr ARRAY
*
*  \param[in] oposite OPTIONAL
*/
static void get_trasfm_symbol(const FortranMatrix<int> *mat, const std::vector<float>* tr, std::string *abc_symb, const int* oposite=NULL);

/*! \param[in] tr ARRAY
*/
static void get_transl_symbol(const std::vector<float>* tr, std::string *transl_symb);

static void init_err_symm(void);

/*! \param[in] t ARRAY
*
*  \param[out] u ARRAY
*/
static void inverse_symm(const FortranMatrix<int> *r, const std::vector<float>* t, FortranMatrix<int> *s, std::vector<float>* u);

/*! \param[in] numl OPTIONAL
*/
static void latsym(const char* symb, const int* numl=NULL);

static void read_bin_spacegroup(space_group_type* spg, int lun, int* ok);

/*! \param[in] ctrl OPTIONAL
*/
static void read_msymm(const char* info, FortranMatrix<int> *sim, float* p_mag, const int* ctrl=NULL);

/*! \param[out] tr ARRAY
*/
static void read_symtrans_code(const char* code, int* n, std::vector<float>* tr);

/*! \param[out] tt OPTIONAL
*  ARRAY
*
*  \param[in] ctrl OPTIONAL
*/
static void read_xsym(const char* info, int istart, FortranMatrix<int> *sim, std::vector<float>* tt=NULL, const int* ctrl=NULL);

static void searchop(const FortranMatrix<int> *sim, int i1, int i2, int* isl);

/*! \param[in] ngen OPTIONAL
*
*  \param[in] mode OPTIONAL
*
*  \param[in] force_hall OPTIONAL
*/
static void set_spacegroup(const char* spacegen, space_group_type* spacegroup, const int* ngen=NULL, const char* mode=NULL, const char* force_hall=NULL);

/*! \param[in] orig ARRAY
*
*  \param[in] matkind OPTIONAL
*
*  \param[in] fix_lat OPTIONAL
*/
static void similar_transf_sg(const FortranMatrix<float> *mat, const std::vector<float>* orig, space_group_type* spg, space_group_type* spgn, const char* matkind=NULL, const char* fix_lat=NULL);

/*! \param[in] modlat OPTIONAL
*/
static void sym_prod_st(const char* syma, const char* symb, std::string *symab, const int* modlat=NULL);

static void write_bin_spacegroup(space_group_type* spg, int lun);

/*! \param[in] iunit OPTIONAL
*
*  \param[in] full OPTIONAL
*/
static void write_magnetic_space_group(magnetic_space_group_type* sg, const int* iunit=NULL, const int* full=NULL);

/*! \param[in] iunit OPTIONAL
*
*  \param[in] full OPTIONAL
*/
static void write_spacegroup(space_group_type* spacegroup, const int* iunit=NULL, const int* full=NULL);

/*! \param[in] tt ARRAY
*/
static void write_sym(int lun, int indx, const FortranMatrix<int> *sim, const std::vector<float>* tt, float p_mag, int mag);

/*! \param[in] tr ARRAY
*/
static void write_symtrans_code(int n, const std::vector<float>* tr, std::string *code);

/*! \param[in] lun OPTIONAL
*
*  \param[in] sorting OPTIONAL
*/
static void write_wyckoff(wyckoff_type* wyckoff, const char* spg, const int* lun=NULL, const int* sorting=NULL);

static void copy_ns_spg_to_spg(ns_space_group_type* spgn, space_group_type* spg);

static void alloc_mhlist_array(magh_list_type* list);

static void alloc_refllist_array(reflection_list_type* list);

static void reflct_array_ctor(reflct_array_list* array);

static void reflct_append(reflct_array_list* array, reflect_type* rflctn);

/*! \param[in] mode OPTIONAL
*
*  \param[in] iphase OPTIONAL
*
*  \param[out] job_info OPTIONAL
*
*  \param file_list OPTIONAL
*
*  \param[in] cframe OPTIONAL
*/
static void readxtal_structure_file(const char* filenam, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a, const char* mode=NULL, const int* iphase=NULL, job_info_type* job_info=NULL, file_list_type* file_list=NULL, const char* cframe=NULL);

/*! \param[in] h ARRAY
*/
static float hkls_r(const std::vector<float>* h, crystal_cell_type* crystalcell);

/*! \param[in] ord OPTIONAL
*  ARRAY
*
*  \param[in] hlim OPTIONAL
*/
static void hklgen_sxtal_reflection(crystal_cell_type* crystalcell, space_group_type* spacegroup, float stlmin, float stlmax, int* num_ref, reflct_array_list* reflex, const std::vector<int>* ord=NULL, const FortranMatrix<int> *hlim=NULL);

/*! \param[in] ord OPTIONAL
*  ARRAY
*
*  \param[in] hlim OPTIONAL
*/
static void hklgen_sxtal_list(crystal_cell_type* crystalcell, space_group_type* spacegroup, float stlmin, float stlmax, int* num_ref, reflection_list_type* reflex, const std::vector<int>* ord=NULL, const FortranMatrix<int> *hlim=NULL);

/*! \param[in] no_order OPTIONAL
*/
static void hkluni_reflection(crystal_cell_type* crystalcell, space_group_type* spacegroup, int friedel, float value1, float value2, const char* code, int* num_ref, reflct_array_list* reflex, const int* no_order=NULL);

/*! \param[in] no_order OPTIONAL
*/
static void hkluni_refllist(crystal_cell_type* crystalcell, space_group_type* spacegroup, int friedel, float value1, float value2, const char* code, int num_ref, reflection_list_type* reflex, const int* no_order=NULL);

/*! \param[out] sgo OPTIONAL
*
*  \param[out] mag_dom OPTIONAL
*
*  \param[in] cell OPTIONAL
*/
static void read_mag_cfl_file(file_list_type* file_cfl, int* n_ini, int* n_end, magsymm_k_type* mgp, matom_list_type* am, magnetic_group_type* sgo=NULL, magnetic_domain_type* mag_dom=NULL, crystal_cell_type* cell=NULL);

static void read_mag_mcif_file(const char* file_mcif, crystal_cell_type* mcell, magnetic_space_group_type* mgp, matom_list_type* am);

static float calcgaussian(float x, float h);

static float calchat(float x, float h);

static float calclorentzian(float x, float h);

static float calcpseudovoigt(float x, float h, float eta);

/*! \param[in] x ARRAY
*
*  \param[out] output ARRAY
*/
static void gausspeak(const std::vector<float>* x, float h, std::vector<float>* output);

/*! \param[in] mode OPTIONAL
*/
static void read_ill_data(const char* filename, diffraction_pattern_type* dif_pat, const char* mode=NULL);

static void printbasis(matom_type* matm);

/*! \param[in] lvarf_param ARRAY
*
*  \param[in] mvarf_param ARRAY
*
*  \param[in] lu_param ARRAY
*
*  \param[in] x_std_param ARRAY
*
*  \param[in] u_std_param ARRAY
*
*  \param[in] varf_param ARRAY
*
*  \param[in] u_param ARRAY
*
*  \param[in] x_param ARRAY
*
*  \param[in] mu_param ARRAY
*
*  \param[in] lx_param ARRAY
*
*  \param[in] ind_param ARRAY
*
*  \param[in] mx_param ARRAY
*/
static void atom_type_ctor(atom_type* atom_type_param, int locc_param, const std::vector<int>* lvarf_param, const char* utype_param, float mbiso_param, float occ_param, float charge_param, const char* sfacsymb_param, const char* lab_param, const std::vector<float>* mvarf_param, float moment_param, const std::vector<int>* lu_param, float mocc_param, int active_param, int mult_param, const std::vector<float>* x_std_param, const std::vector<float>* u_std_param, int nvar_param, const char* wyck_param, float biso_std_param, int lbiso_param, float biso_param, const std::vector<float>* varf_param, const std::vector<float>* u_param, float occ_std_param, const std::vector<float>* x_param, int z_param, const std::vector<float>* mu_param, const std::vector<int>* lx_param, const char* chemsymb_param, const std::vector<int>* ind_param, const char* thtype_param, const char* atminfo_param, float ueq_param, const std::vector<float>* mx_param);

/*! \param[in] mmphas_param ARRAY
*
*  \param[in] lvarf_param ARRAY
*
*  \param[in] imat_param ARRAY
*
*  \param[in] lmphas_param ARRAY
*
*  \param[in] mphas_param ARRAY
*
*  \param[in] lu_param ARRAY
*
*  \param[in] x_std_param ARRAY
*
*  \param[in] u_std_param ARRAY
*
*  \param[in] mphas_std_param ARRAY
*
*  \param[in] mvarf_param ARRAY
*
*  \param[in] varf_param ARRAY
*
*  \param[in] u_param ARRAY
*
*  \param[in] x_param ARRAY
*
*  \param[in] mu_param ARRAY
*
*  \param[in] lx_param ARRAY
*
*  \param[in] ind_param ARRAY
*
*  \param[in] mx_param ARRAY
*/
static void matom_type_ctor(matom_type* matom_type_param, const std::vector<float>* mmphas_param, int locc_param, const FortranMatrix<float> *ski_std_param, const std::vector<int>* lvarf_param, const char* utype_param, float mbiso_param, float occ_param, const FortranMatrix<int> *lbas_param, float charge_param, const char* sfacsymb_param, const std::vector<int>* imat_param, const std::vector<int>* lmphas_param, const std::vector<float>* mphas_param, const FortranMatrix<float> *spher_ski_param, const FortranMatrix<float> *skr_param, const FortranMatrix<int> *lskr_param, const char* lab_param, float moment_param, const std::vector<int>* lu_param, float mocc_param, int active_param, const FortranMatrix<float> *ski_param, int mult_param, const FortranMatrix<float> *spher_skr_std_param, const std::vector<float>* x_std_param, const std::vector<float>* u_std_param, const FortranMatrix<int> *lski_param, int nvar_param, const char* wyck_param, float biso_std_param, int lbiso_param, const std::vector<float>* mphas_std_param, const std::vector<float>* mvarf_param, float biso_param, const std::vector<float>* varf_param, const std::vector<float>* u_param, float occ_std_param, const std::vector<float>* x_param, int z_param, int nvk_param, const FortranMatrix<float> *mbas_param, const FortranMatrix<float> *spher_ski_std_param, const FortranMatrix<float> *spher_skr_param, const FortranMatrix<float> *mski_param, const FortranMatrix<float> *skr_std_param, const std::vector<float>* mu_param, const FortranMatrix<float> *mskr_param, const std::vector<int>* lx_param, const char* chemsymb_param, const FortranMatrix<float> *cbas_param, const std::vector<int>* ind_param, const FortranMatrix<float> *cbas_std_param, const char* thtype_param, const char* atminfo_param, float ueq_param, const std::vector<float>* mx_param);

/*! \param[in] lang_param ARRAY
*
*  \param[in] cell_std_param ARRAY
*
*  \param[in] ang_param ARRAY
*
*  \param[in] rang_param ARRAY
*
*  \param[in] rcell_param ARRAY
*
*  \param[in] cell_param ARRAY
*
*  \param[in] ang_std_param ARRAY
*
*  \param[in] lcell_param ARRAY
*/
static void crystal_cell_type_ctor(crystal_cell_type* crystal_cell_type_param, const std::vector<int>* lang_param, float rcellvol_param, const std::vector<float>* cell_std_param, const std::vector<float>* ang_param, const FortranMatrix<float> *bl_minv_param, const FortranMatrix<float> *gr_param, const FortranMatrix<float> *cr_orth_cel_param, const FortranMatrix<float> *bl_m_param, const FortranMatrix<float> *orth_cr_cel_param, const char* carttype_param, const std::vector<float>* rang_param, const std::vector<float>* rcell_param, const std::vector<float>* cell_param, const FortranMatrix<float> *gd_param, float cellvol_param, const std::vector<float>* ang_std_param, const std::vector<int>* lcell_param);

/*! \param[out] output_value ARRAY
*/
static void get_twofold_axes_a(twofold_axes_type* obj_var, std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
static void set_twofold_axes_a(twofold_axes_type* obj_var, const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
static void get_twofold_axes_c(twofold_axes_type* obj_var, std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
static void set_twofold_axes_c(twofold_axes_type* obj_var, const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
static void get_twofold_axes_b(twofold_axes_type* obj_var, std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
static void set_twofold_axes_b(twofold_axes_type* obj_var, const std::vector<float>* new_value);

/*! \param[out] output_value ARRAY
*/
static void get_twofold_axes_maxes(twofold_axes_type* obj_var, std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
static void set_twofold_axes_maxes(twofold_axes_type* obj_var, const std::vector<float>* new_value);

static int get_twofold_axes_ntwo(twofold_axes_type* obj_var);

static void set_twofold_axes_ntwo(twofold_axes_type* obj_var, int new_value);

/*! \param[out] output_value ARRAY
*/
static void get_twofold_axes_cross(twofold_axes_type* obj_var, std::vector<float>* output_value);

/*! \param[in] new_value ARRAY
*/
static void set_twofold_axes_cross(twofold_axes_type* obj_var, const std::vector<float>* new_value);

static float get_twofold_axes_tol(twofold_axes_type* obj_var);

static void set_twofold_axes_tol(twofold_axes_type* obj_var, float new_value);

static void get_twofold_axes_rtwofold(twofold_axes_type* obj_var, FortranMatrix<int> *output_value);

static void set_twofold_axes_rtwofold(twofold_axes_type* obj_var, const FortranMatrix<int> *new_value);

static void get_twofold_axes_caxes(twofold_axes_type* obj_var, FortranMatrix<float> *output_value);

static void set_twofold_axes_caxes(twofold_axes_type* obj_var, const FortranMatrix<float> *new_value);

/*! \param[out] output_value ARRAY
*/
static void get_twofold_axes_dot(twofold_axes_type* obj_var, std::vector<int>* output_value);

/*! \param[in] new_value ARRAY
*/
static void set_twofold_axes_dot(twofold_axes_type* obj_var, const std::vector<int>* new_value);

static void get_twofold_axes_dtwofold(twofold_axes_type* obj_var, FortranMatrix<int> *output_value);

static void set_twofold_axes_dtwofold(twofold_axes_type* obj_var, const FortranMatrix<int> *new_value);

/*! \param[in] a_param ARRAY
*
*  \param[in] c_param ARRAY
*
*  \param[in] b_param ARRAY
*
*  \param[in] maxes_param ARRAY
*
*  \param[in] cross_param ARRAY
*
*  \param[in] dot_param ARRAY
*/
static void twofold_axes_type_ctor(twofold_axes_type* twofold_axes_type_param, const std::vector<float>* a_param, const std::vector<float>* c_param, const std::vector<float>* b_param, const std::vector<float>* maxes_param, int ntwo_param, const std::vector<float>* cross_param, float tol_param, const FortranMatrix<int> *rtwofold_param, const FortranMatrix<float> *caxes_param, const std::vector<int>* dot_param, const FortranMatrix<int> *dtwofold_param);

/*! \param[in] rx_param ARRAY
*
*  \param[in] ry_param ARRAY
*
*  \param[in] uvw_param ARRAY
*/
static void zone_axis_type_ctor(zone_axis_type* zone_axis_type_param, int nlayer_param, const std::vector<int>* rx_param, const std::vector<int>* ry_param, const std::vector<int>* uvw_param);

static void interval_type_ctor(interval_type* interval_type_param, float maxb_param, float mina_param);

static void msym_oper_type_ctor(msym_oper_type* msym_oper_type_param, float phas_param, const FortranMatrix<int> *rot_param);

/*! \param[in] tinv_param ARRAY
*/
static void magnetic_group_type_ctor(magnetic_group_type* magnetic_group_type_param, const std::vector<int>* tinv_param, const char* shubnikov_param, space_group_type* spg_param);

/*! \param[in] h_param ARRAY
*/
static void reflect_type_ctor(reflect_type* reflect_type_param, const std::vector<int>* h_param, float s_param, int mult_param);

/*! \param[in] h_param ARRAY
*/
static void reflection_type_ctor(reflection_type* reflection_type_param, float a_param, float aa_param, float b_param, float bb_param, const std::vector<int>* h_param, float sfo_param, float s_param, float fc_param, float w_param, float phase_param, int mult_param, float fo_param);

/*! \param[in] tr_param ARRAY
*/
static void ns_sym_oper_type_ctor(ns_sym_oper_type* ns_sym_oper_type_param, const std::vector<float>* tr_param, const FortranMatrix<float> *rot_param);

/*! \param[in] tr_param ARRAY
*/
static void sym_oper_type_ctor(sym_oper_type* sym_oper_type_param, const std::vector<float>* tr_param, const FortranMatrix<int> *rot_param);

/*! \param[out] command OPTIONAL
*
*  \param[out] length OPTIONAL
*
*  \param[out] status OPTIONAL
*/
static void get_command(std::string *command=NULL, int* length=NULL, int* status=NULL);

/*! \param[out] value OPTIONAL
*
*  \param[out] length OPTIONAL
*
*  \param[out] status OPTIONAL
*/
static void get_command_argument(int number, std::string *value=NULL, int* length=NULL, int* status=NULL);

/*! \param[out] value OPTIONAL
*
*  \param[out] length OPTIONAL
*
*  \param[out] status OPTIONAL
*
*  \param[in] trim_name OPTIONAL
*/
static void get_environment_variable(const char* name, std::string *value=NULL, int* length=NULL, int* status=NULL, const int* trim_name=NULL);

};

#endif /* FORTFUNCS_H_ */
