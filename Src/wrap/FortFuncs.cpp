/* This source file automatically generated on 2018-07-03 using 
   FortWrap wrapper generator version 1.0.4 */

#include <cstring> // For strcpy
#include "FortFuncs.h"

int FortFuncs::equiv_atm(const char* nam1, const char* nam2, const char* nameat) {
  int nam1_len__ = 0;
  if (nam1) nam1_len__ = strlen(nam1); // Protect Optional args
  int nam2_len__ = 0;
  if (nam2) nam2_len__ = strlen(nam2); // Protect Optional args
  int nameat_len__ = 0;
  if (nameat) nameat_len__ = strlen(nameat); // Protect Optional args
  return __cfml_atom_typedef_MOD_equiv_atm(nam1, nam2, nameat, nam1_len__, nam2_len__, nameat_len__);
}

void FortFuncs::allocate_atoms_cell(int nasu, int mul, float dmax, atoms_cell_type* ac) {
  __cfml_atom_typedef_MOD_allocate_atoms_cell(&nasu, &mul, &dmax, ac->data_ptr);
}

void FortFuncs::allocate_atom_list(int n, atom_list_type* a, int* fail) {
  __cfml_atom_typedef_MOD_allocate_atom_list(&n, a->data_ptr, fail);
}

void FortFuncs::allocate_matom_list(int n, matom_list_type* a, const float* mfield, const std::vector<float>* dirf) {
  __cfml_atom_typedef_MOD_allocate_matom_list(&n, a->data_ptr, mfield, dirf ? &(*dirf)[0] : NULL);
}

void FortFuncs::atlist1_extencell_atlist2(space_group_type* spg, atom_list_type* a, atom_list_type* c, int conven) {
  __cfml_atom_typedef_MOD_atlist1_extencell_atlist2(spg->data_ptr, a->data_ptr, c->data_ptr, &conven);
}

void FortFuncs::atoms_cell_to_list(atoms_cell_type* ac, atom_list_type* a) {
  __cfml_atom_typedef_MOD_atoms_cell_to_list(ac->data_ptr, a->data_ptr);
}

void FortFuncs::atom_list_to_cell(atom_list_type* a, atoms_cell_type* ac) {
  __cfml_atom_typedef_MOD_atom_list_to_cell(a->data_ptr, ac->data_ptr);
}

void FortFuncs::atom_uequi_list(crystal_cell_type* cell, atom_list_type* ac) {
  __cfml_atom_typedef_MOD_atom_uequi_list(cell->data_ptr, ac->data_ptr);
}

void FortFuncs::copy_atom_list(atom_list_type* a, atom_list_type* ac) {
  __cfml_atom_typedef_MOD_copy_atom_list(a->data_ptr, ac->data_ptr);
}

void FortFuncs::deallocate_atoms_cell(atoms_cell_type* ac) {
  __cfml_atom_typedef_MOD_deallocate_atoms_cell(ac->data_ptr);
}

void FortFuncs::deallocate_atom_list(atom_list_type* a) {
  __cfml_atom_typedef_MOD_deallocate_atom_list(a->data_ptr);
}

void FortFuncs::deallocate_matom_list(matom_list_type* a) {
  __cfml_atom_typedef_MOD_deallocate_matom_list(a->data_ptr);
}

void FortFuncs::get_atom_2nd_tensor_ctr(const std::vector<float>* x, std::vector<float>* tensval, space_group_type* spgr, int* codini, std::vector<int>* icodes, std::vector<float>* multip, const int* ord, const int* ipr) {
  __cfml_atom_typedef_MOD_get_atom_2nd_tensor_ctr(&(*x)[0], &(*tensval)[0], spgr->data_ptr, codini, &(*icodes)[0], &(*multip)[0], ord, NULL, ipr);
}

void FortFuncs::init_atom_type(atom_type* a) {
  __cfml_atom_typedef_MOD_init_atom_type(a->data_ptr);
}

void FortFuncs::init_matom_type(matom_type* a) {
  __cfml_atom_typedef_MOD_init_matom_type(a->data_ptr);
}

void FortFuncs::init_err_atmd(void) {
  __cfml_atom_typedef_MOD_init_err_atmd();
}

void FortFuncs::multi(int lun, int iprin, int conven, space_group_type* spg, atom_list_type* a, atoms_cell_type* ac) {
  __cfml_atom_typedef_MOD_multi(&lun, &iprin, &conven, spg->data_ptr, a->data_ptr, ac->data_ptr);
}

void FortFuncs::read_bin_atom_list(atom_list_type* ats, int lun, int* ok) {
  __cfml_atom_typedef_MOD_read_bin_atom_list(ats->data_ptr, &lun, ok);
}

void FortFuncs::write_atom_list(atom_list_type* ats, const int* level, const int* lun, crystal_cell_type* cell) {
  __cfml_atom_typedef_MOD_write_atom_list(ats->data_ptr, level, lun, cell ? cell->data_ptr : NULL);
}

void FortFuncs::write_bin_atom_list(atom_list_type* ats, int lun) {
  __cfml_atom_typedef_MOD_write_bin_atom_list(ats->data_ptr, &lun);
}

void FortFuncs::deallocate_ap_table(void) {
  __cfml_bvspar_MOD_deallocate_ap_table();
}

void FortFuncs::deallocate_bvel_table(void) {
  __cfml_bvspar_MOD_deallocate_bvel_table();
}

void FortFuncs::deallocate_bvs_table(void) {
  __cfml_bvspar_MOD_deallocate_bvs_table();
}

void FortFuncs::deallocate_sbvs_table(void) {
  __cfml_bvspar_MOD_deallocate_sbvs_table();
}

void FortFuncs::set_atomic_properties(void) {
  __cfml_bvspar_MOD_set_atomic_properties();
}

void FortFuncs::set_bvel_table(void) {
  __cfml_bvspar_MOD_set_bvel_table();
}

void FortFuncs::set_bvs_table(void) {
  __cfml_bvspar_MOD_set_bvs_table();
}

void FortFuncs::set_sbvs_table(void) {
  __cfml_bvspar_MOD_set_sbvs_table();
}

void FortFuncs::set_common_oxidation_states_table(void) {
  __cfml_bvspar_MOD_set_common_oxidation_states_table();
}

void FortFuncs::set_oxidation_states_table(void) {
  __cfml_bvspar_MOD_set_oxidation_states_table();
}

void FortFuncs::set_pauling_electronegativity(void) {
  __cfml_bvspar_MOD_set_pauling_electronegativity();
}

void FortFuncs::init_err_bond(void) {
  __cfml_bond_tables_MOD_init_err_bond();
}

void FortFuncs::remove_bonds_table(void) {
  __cfml_bond_tables_MOD_remove_bonds_table();
}

void FortFuncs::set_bonds_table(void) {
  __cfml_bond_tables_MOD_set_bonds_table();
}

void FortFuncs::get_atomic_mass(const char* atm, float* mass) {
  // Create C array for Fortran input string data
  char atm_c__[2+1];
  if (atm) {
    int i;
    strncpy(atm_c__, atm, 2+1); atm_c__[2+1] = 0; // strncpy protects in case atm is too long
    for (i=strlen(atm_c__); i<2+1; i++) atm_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_scattering_chemical_tables_MOD_get_atomic_mass(atm ? atm_c__ : NULL, mass, 2);
}

void FortFuncs::get_atomic_vol(const char* atm, float* vol) {
  // Create C array for Fortran input string data
  char atm_c__[2+1];
  if (atm) {
    int i;
    strncpy(atm_c__, atm, 2+1); atm_c__[2+1] = 0; // strncpy protects in case atm is too long
    for (i=strlen(atm_c__); i<2+1; i++) atm_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_scattering_chemical_tables_MOD_get_atomic_vol(atm ? atm_c__ : NULL, vol, 2);
}

void FortFuncs::get_chemsymb(const char* label, std::string *chemsymb, int* z) {
  int chemsymb_len__ = 0;
  if (chemsymb) chemsymb_len__ = chemsymb->length();
  // Declare memory to store output character data
  char chemsymb_c__[chemsymb_len__+1];
  chemsymb_c__[chemsymb_len__] = '\0';
  int label_len__ = 0;
  if (label) label_len__ = strlen(label); // Protect Optional args
  __cfml_scattering_chemical_tables_MOD_get_chemsymb(label, chemsymb ? chemsymb_c__ : NULL, z, label_len__, chemsymb_len__);
  if (chemsymb) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=label_len__-1; chemsymb_c__[i]==' '; i--) chemsymb_c__[i] = '\0';
    chemsymb->assign(chemsymb_c__);
  }
}

void FortFuncs::get_covalent_radius(const char* nam, float* rad) {
  int nam_len__ = 0;
  if (nam) nam_len__ = strlen(nam); // Protect Optional args
  __cfml_scattering_chemical_tables_MOD_get_covalent_radius(nam, rad, nam_len__);
}

void FortFuncs::get_fermi_length(const char* nam, float* b) {
  int nam_len__ = 0;
  if (nam) nam_len__ = strlen(nam); // Protect Optional args
  __cfml_scattering_chemical_tables_MOD_get_fermi_length(nam, b, nam_len__);
}

void FortFuncs::get_inc_xs(const char* nam, float* u) {
  int nam_len__ = 0;
  if (nam) nam_len__ = strlen(nam); // Protect Optional args
  __cfml_scattering_chemical_tables_MOD_get_inc_xs(nam, u, nam_len__);
}

void FortFuncs::get_abs_xs(const char* nam, float* u) {
  int nam_len__ = 0;
  if (nam) nam_len__ = strlen(nam); // Protect Optional args
  __cfml_scattering_chemical_tables_MOD_get_abs_xs(nam, u, nam_len__);
}

void FortFuncs::get_ionic_radius(const char* nam, int valence, float* rad) {
  int nam_len__ = 0;
  if (nam) nam_len__ = strlen(nam); // Protect Optional args
  __cfml_scattering_chemical_tables_MOD_get_ionic_radius(nam, &valence, rad, nam_len__);
}

void FortFuncs::remove_chem_info(void) {
  __cfml_scattering_chemical_tables_MOD_remove_chem_info();
}

void FortFuncs::remove_delta_fp_fpp(void) {
  __cfml_scattering_chemical_tables_MOD_remove_delta_fp_fpp();
}

void FortFuncs::remove_magnetic_form(void) {
  __cfml_scattering_chemical_tables_MOD_remove_magnetic_form();
}

void FortFuncs::remove_xray_form(void) {
  __cfml_scattering_chemical_tables_MOD_remove_xray_form();
}

void FortFuncs::set_chem_info(void) {
  __cfml_scattering_chemical_tables_MOD_set_chem_info();
}

void FortFuncs::set_delta_fp_fpp(void) {
  __cfml_scattering_chemical_tables_MOD_set_delta_fp_fpp();
}

void FortFuncs::set_magnetic_form(void) {
  __cfml_scattering_chemical_tables_MOD_set_magnetic_form();
}

void FortFuncs::set_xray_form(void) {
  __cfml_scattering_chemical_tables_MOD_set_xray_form();
}

void FortFuncs::allocate_atoms_conf_list(int n, atoms_conf_list_type* a) {
  __cfml_bvs_energy_calc_MOD_allocate_atoms_conf_list(&n, a->data_ptr);
}

void FortFuncs::calc_bvs(atoms_conf_list_type* a, const int* ipr, const int* n_bvsm, const char* filecod) {
  int filecod_len__ = 0;
  if (filecod) filecod_len__ = strlen(filecod); // Protect Optional args
  __cfml_bvs_energy_calc_MOD_calc_bvs(a->data_ptr, ipr, n_bvsm, NULL, filecod, filecod_len__);
}

void FortFuncs::calc_map_bvel(atoms_conf_list_type* a, space_group_type* spg, crystal_cell_type* cell, const char* filecod, int ndimx, int ndimy, int ndimz, const char* atname, float drmax, const float* delta, float* vol, float* emin, int* npix, const int* outp) {
  int atname_len__ = 0;
  if (atname) atname_len__ = strlen(atname); // Protect Optional args
  int filecod_len__ = 0;
  if (filecod) filecod_len__ = strlen(filecod); // Protect Optional args
  __cfml_bvs_energy_calc_MOD_calc_map_bvel(a->data_ptr, spg->data_ptr, cell->data_ptr, filecod, &ndimx, &ndimy, &ndimz, atname, &drmax, delta, vol, emin, npix, outp, NULL, filecod_len__, atname_len__);
}

void FortFuncs::calc_map_bvs(atoms_conf_list_type* a, space_group_type* spg, crystal_cell_type* cell, const char* filecod, int ndimx, int ndimy, int ndimz, const char* atname, float drmax, const float* delta, float* vol) {
  int atname_len__ = 0;
  if (atname) atname_len__ = strlen(atname); // Protect Optional args
  int filecod_len__ = 0;
  if (filecod) filecod_len__ = strlen(filecod); // Protect Optional args
  __cfml_bvs_energy_calc_MOD_calc_map_bvs(a->data_ptr, spg->data_ptr, cell->data_ptr, filecod, &ndimx, &ndimy, &ndimz, atname, &drmax, delta, vol, filecod_len__, atname_len__);
}

void FortFuncs::cost_bvs(atoms_conf_list_type* a, float* gii, float* erep, const char* gic) {
  int gic_len__ = 0;
  if (gic) gic_len__ = strlen(gic); // Protect Optional args
  __cfml_bvs_energy_calc_MOD_cost_bvs(a->data_ptr, gii, erep, gic, gic_len__);
}

void FortFuncs::cost_bvs_coulombrep(atoms_conf_list_type* a, float* gii, float* erep) {
  __cfml_bvs_energy_calc_MOD_cost_bvs_coulombrep(a->data_ptr, gii, erep);
}

void FortFuncs::deallocate_atoms_conf_list(atoms_conf_list_type* a) {
  __cfml_bvs_energy_calc_MOD_deallocate_atoms_conf_list(a->data_ptr);
}

void FortFuncs::ewald(const FortranMatrix<float> *lattvec, float vol, atoms_cell_type* ac, double* e) {
  __cfml_bvs_energy_calc_MOD_ewald(lattvec->data, &vol, ac->data_ptr, e);
}

void FortFuncs::init_err_conf(void) {
  __cfml_bvs_energy_calc_MOD_init_err_conf();
}

void FortFuncs::species_on_list(atoms_conf_list_type* a, const int* mulg, const float* tol, const int* covalent, const int* softbvs) {
  __cfml_bvs_energy_calc_MOD_species_on_list(a->data_ptr, mulg, tol, covalent, softbvs);
}

float FortFuncs::cell_volume_sigma(crystal_cell_type* cell) {
  return __cfml_crystal_metrics_MOD_cell_volume_sigma(cell->data_ptr);
}

float FortFuncs::u_equiv(crystal_cell_type* cell, const std::vector<float>* th_u) {
  return __cfml_crystal_metrics_MOD_u_equiv(cell->data_ptr, &(*th_u)[0]);
}

void FortFuncs::get_basis_from_uvw(float dmin, const std::vector<int>* u, crystal_cell_type* cell, zone_axis_type* zoneb, int* ok, const char* mode) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_crystal_metrics_MOD_get_basis_from_uvw(&dmin, &(*u)[0], cell->data_ptr, zoneb->data_ptr, ok, mode, mode_len__);
}

void FortFuncs::get_conventional_cell(twofold_axes_type* twofold, crystal_cell_type* cell, FortranMatrix<int> *tr, std::string *message, int* ok, const float* told) {
  int message_len__ = 0;
  if (message) message_len__ = message->length();
  // Declare memory to store output character data
  char message_c__[message_len__+1];
  message_c__[message_len__] = '\0';
  __cfml_crystal_metrics_MOD_get_conventional_cell(twofold->data_ptr, cell->data_ptr, tr->data, message ? message_c__ : NULL, ok, told, message_len__);
  if (message) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=message_len__-1; message_c__[i]==' '; i--) message_c__[i] = '\0';
    message->assign(message_c__);
  }
}

void FortFuncs::get_primitive_cell(const char* lat_type, crystal_cell_type* centred_cell, crystal_cell_type* primitive_cell, FortranMatrix<float> *transfm) {
  int lat_type_len__ = 0;
  if (lat_type) lat_type_len__ = strlen(lat_type); // Protect Optional args
  __cfml_crystal_metrics_MOD_get_primitive_cell(lat_type, centred_cell->data_ptr, primitive_cell->data_ptr, transfm->data, lat_type_len__);
}

void FortFuncs::init_err_crys(void) {
  __cfml_crystal_metrics_MOD_init_err_crys();
}

void FortFuncs::read_bin_crystal_cell(crystal_cell_type* celda, int lun, int* ok) {
  __cfml_crystal_metrics_MOD_read_bin_crystal_cell(celda->data_ptr, &lun, ok);
}

void FortFuncs::set_crystal_cell(const std::vector<float>* cellv, const std::vector<float>* angl, crystal_cell_type* celda, const char* cartype, const std::vector<float>* scell, const std::vector<float>* sangl) {
  // Create C array for Fortran input string data
  char cartype_c__[1+1];
  if (cartype) {
    int i;
    strncpy(cartype_c__, cartype, 1+1); cartype_c__[1+1] = 0; // strncpy protects in case cartype is too long
    for (i=strlen(cartype_c__); i<1+1; i++) cartype_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_crystal_metrics_MOD_set_crystal_cell(&(*cellv)[0], &(*angl)[0], celda->data_ptr, cartype ? cartype_c__ : NULL, scell ? &(*scell)[0] : NULL, sangl ? &(*sangl)[0] : NULL, 1);
}

void FortFuncs::volume_sigma_from_cell(const std::vector<float>* cell, const std::vector<float>* ang, const std::vector<float>* sigc, const std::vector<float>* siga, float* volume, float* sigv) {
  __cfml_crystal_metrics_MOD_volume_sigma_from_cell(&(*cell)[0], &(*ang)[0], &(*sigc)[0], &(*siga)[0], volume, sigv);
}

void FortFuncs::write_bin_crystal_cell(crystal_cell_type* celda, int lun) {
  __cfml_crystal_metrics_MOD_write_bin_crystal_cell(celda->data_ptr, &lun);
}

void FortFuncs::write_crystal_cell(crystal_cell_type* celda, const int* lun) {
  __cfml_crystal_metrics_MOD_write_crystal_cell(celda->data_ptr, lun);
}

float FortFuncs::calc_fwhm_peak(diffraction_pattern_type* pat, float xi, float yi, float ybi, const float* rlim) {
  return __cfml_diffraction_patterns_MOD_calc_fwhm_peak(pat->data_ptr, &xi, &yi, &ybi, rlim);
}

void FortFuncs::allocate_diffraction_pattern(diffraction_pattern_type* pat, const int* npts) {
  __cfml_diffraction_patterns_MOD_allocate_diffraction_pattern(pat->data_ptr, npts);
}

void FortFuncs::calc_background(diffraction_pattern_type* pat, int ncyc, int np, const float* xmin, const float* xmax) {
  __cfml_diffraction_patterns_MOD_calc_background(pat->data_ptr, &ncyc, &np, xmin, xmax);
}

void FortFuncs::delete_noisy_points(diffraction_pattern_type* pat, int* noisyp, const int* fileinfo) {
  __cfml_diffraction_patterns_MOD_delete_noisy_points(pat->data_ptr, noisyp, fileinfo);
}

void FortFuncs::init_err_diffpatt(void) {
  __cfml_diffraction_patterns_MOD_init_err_diffpatt();
}

void FortFuncs::purge_diffraction_pattern(diffraction_pattern_type* pat, const char* mode) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_diffraction_patterns_MOD_purge_diffraction_pattern(pat->data_ptr, mode, mode_len__);
}

void FortFuncs::read_background_file(const char* bck_file, const char* bck_mode, diffraction_pattern_type* dif_pat) {
  int bck_mode_len__ = 0;
  if (bck_mode) bck_mode_len__ = strlen(bck_mode); // Protect Optional args
  int bck_file_len__ = 0;
  if (bck_file) bck_file_len__ = strlen(bck_file); // Protect Optional args
  __cfml_diffraction_patterns_MOD_read_background_file(bck_file, bck_mode, dif_pat->data_ptr, bck_file_len__, bck_mode_len__);
}

void FortFuncs::write_pattern_freeformat(const char* filename, diffraction_pattern_type* pat, const float* xmin, const float* xmax) {
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_diffraction_patterns_MOD_write_pattern_freeformat(filename, pat->data_ptr, NULL, xmin, xmax, filename_len__);
}

void FortFuncs::write_pattern_instrm5(const char* filename, diffraction_pattern_type* pat, const float* xmin, const float* xmax, const char* var) {
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  int var_len__ = 0;
  if (var) var_len__ = strlen(var); // Protect Optional args
  __cfml_diffraction_patterns_MOD_write_pattern_instrm5(filename, pat->data_ptr, NULL, xmin, xmax, var, filename_len__, var_len__);
}

void FortFuncs::write_pattern_xysig(const char* filename, diffraction_pattern_type* pat, const float* xmin, const float* xmax) {
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_diffraction_patterns_MOD_write_pattern_xysig(filename, pat->data_ptr, NULL, xmin, xmax, filename_len__);
}

void FortFuncs::unitcell_to_pdbfile(crystal_cell_type* cell, space_group_type* spaceg, atom_list_type* atom_list, const char* filename) {
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_export_vtk_MOD_unitcell_to_pdbfile(cell->data_ptr, spaceg->data_ptr, atom_list->data_ptr, filename, filename_len__);
}

float FortFuncs::ag_theta(float cos2t) {
  return __cfml_extinction_correction_MOD_ag_theta(&cos2t);
}

float FortFuncs::al_theta(float cos2t) {
  return __cfml_extinction_correction_MOD_al_theta(&cos2t);
}

float FortFuncs::bg_theta(float cos2t) {
  return __cfml_extinction_correction_MOD_bg_theta(&cos2t);
}

float FortFuncs::bl_theta(float cos2t) {
  return __cfml_extinction_correction_MOD_bl_theta(&cos2t);
}

void FortFuncs::becker_coppens(int iext, float f2, const std::vector<float>* cext, float r, float g, float* ys, float* dydr, float* dydg) {
  __cfml_extinction_correction_MOD_becker_coppens(&iext, &f2, &(*cext)[0], &r, &g, ys, dydr, dydg);
}

void FortFuncs::shelx_extinction(int job, int iext, float lambda, float ssnn, const std::vector<float>* hkl, float f2, const std::vector<float>* extc, float* ys, std::vector<float>* der, float* derf2) {
  __cfml_extinction_correction_MOD_shelx_extinction(&job, &iext, &lambda, &ssnn, &(*hkl)[0], &f2, &(*extc)[0], ys, der ? &(*der)[0] : NULL, derf2);
}

void FortFuncs::correct_flippingratios(int iext, float lambda, float q, const std::vector<float>* extc, float ssnn, const std::vector<float>* hkl, float an, float bn, float am, float bm, float* yp, float* ym, float* ypm) {
  __cfml_extinction_correction_MOD_correct_flippingratios(&iext, &lambda, &q, &(*extc)[0], &ssnn, &(*hkl)[0], &an, &bn, &am, &bm, yp, ym, ypm, NULL, NULL, NULL, NULL);
}

void FortFuncs::file_to_filelist(const char* file_dat, file_list_type* file_list) {
  int file_dat_len__ = 0;
  if (file_dat) file_dat_len__ = strlen(file_dat); // Protect Optional args
  __cfml_io_formats_MOD_file_to_filelist(file_dat, file_list->data_ptr, file_dat_len__);
}

void FortFuncs::init_err_form(void) {
  __cfml_io_formats_MOD_init_err_form();
}

void FortFuncs::read_uvals(const char* line, atom_type* atomo, const char* ulabel) {
  int line_len__ = 0;
  if (line) line_len__ = strlen(line); // Protect Optional args
  // Create C array for Fortran input string data
  char ulabel_c__[4+1];
  if (ulabel) {
    int i;
    strncpy(ulabel_c__, ulabel, 4+1); ulabel_c__[4+1] = 0; // strncpy protects in case ulabel is too long
    for (i=strlen(ulabel_c__); i<4+1; i++) ulabel_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_io_formats_MOD_read_uvals(line, atomo->data_ptr, ulabel ? ulabel_c__ : NULL, line_len__, 4);
}

void FortFuncs::write_cif_powder_profile(const char* filename, int code) {
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_io_formats_MOD_write_cif_powder_profile(filename, &code, filename_len__);
}

void FortFuncs::write_cif_template(const char* filename, int type_data, const char* code, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a) {
  int code_len__ = 0;
  if (code) code_len__ = strlen(code); // Protect Optional args
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_io_formats_MOD_write_cif_template(filename, &type_data, code, cell->data_ptr, spg->data_ptr, a->data_ptr, filename_len__, code_len__);
}

void FortFuncs::write_shx_template(const char* filename, int code, const char* title, float lambda, int z, crystal_cell_type* celda, space_group_type* space, atom_list_type* atomos) {
  int title_len__ = 0;
  if (title) title_len__ = strlen(title); // Protect Optional args
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_io_formats_MOD_write_shx_template(filename, &code, title, &lambda, &z, celda->data_ptr, space->data_ptr, atomos->data_ptr, filename_len__, title_len__);
}

void FortFuncs::allocate_coordination_type(int nasu, int numops, float dmax, int* max_coor) {
  __cfml_geometry_calc_MOD_allocate_coordination_type(&nasu, &numops, &dmax, max_coor);
}

void FortFuncs::allocate_point_list(int n, point_list_type* pl, int* ier) {
  __cfml_geometry_calc_MOD_allocate_point_list(&n, pl->data_ptr, ier);
}

void FortFuncs::angle_and_sigma(crystal_cell_type* cellp, const float* derm, const std::vector<float>* x1, const std::vector<float>* x0, const std::vector<float>* x2, const std::vector<float>* s1, const std::vector<float>* s0, const std::vector<float>* s2, float* ang, float* s) {
  __cfml_geometry_calc_MOD_angle_and_sigma(cellp->data_ptr, derm, &(*x1)[0], &(*x0)[0], &(*x2)[0], &(*s1)[0], &(*s0)[0], &(*s2)[0], ang, s);
}

void FortFuncs::calc_dist_angle(float dmax, float dangl, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a, const int* lun) {
  __cfml_geometry_calc_MOD_calc_dist_angle(&dmax, &dangl, cell->data_ptr, spg->data_ptr, a->data_ptr, lun);
}

void FortFuncs::calc_dist_angle_sigma(float dmax, float dangl, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a, const int* lun, const int* lun_cons, const int* lun_cif, const char* filrest, const float* rdmax, const float* ramin) {
  int filrest_len__ = 0;
  if (filrest) filrest_len__ = strlen(filrest); // Protect Optional args
  __cfml_geometry_calc_MOD_calc_dist_angle_sigma(&dmax, &dangl, cell->data_ptr, spg->data_ptr, a->data_ptr, lun, lun_cons, lun_cif, filrest, rdmax, ramin, filrest_len__);
}

void FortFuncs::deallocate_coordination_type(void) {
  __cfml_geometry_calc_MOD_deallocate_coordination_type();
}

void FortFuncs::deallocate_point_list(point_list_type* pl) {
  __cfml_geometry_calc_MOD_deallocate_point_list(pl->data_ptr);
}

void FortFuncs::distance_and_sigma(crystal_cell_type* cellp, const float* derm, const std::vector<float>* x0, const std::vector<float>* x1, const std::vector<float>* s0, const std::vector<float>* s1, float* dis, float* s) {
  __cfml_geometry_calc_MOD_distance_and_sigma(cellp->data_ptr, derm, &(*x0)[0], &(*x1)[0], &(*s0)[0], &(*s1)[0], dis, s);
}

void FortFuncs::get_anglen_axis_from_rotmat(const FortranMatrix<float> *r, std::vector<float>* axis, float* angle) {
  __cfml_geometry_calc_MOD_get_anglen_axis_from_rotmat(r->data, &(*axis)[0], angle);
}

void FortFuncs::get_euler_from_fract(const std::vector<float>* x1, const std::vector<float>* x2, const std::vector<float>* x3, const FortranMatrix<float> *mt, float* phi, float* theta, float* chi, FortranMatrix<float> *eum, const char* code) {
  int code_len__ = 0;
  if (code) code_len__ = strlen(code); // Protect Optional args
  __cfml_geometry_calc_MOD_get_euler_from_fract(&(*x1)[0], &(*x2)[0], &(*x3)[0], mt->data, phi, theta, chi, eum ? eum->data : NULL, code, code_len__);
}

void FortFuncs::get_matrix_moving_v_to_u(const std::vector<float>* v, const std::vector<float>* u, FortranMatrix<float> *r, std::vector<float>* w, float* ang) {
  __cfml_geometry_calc_MOD_get_matrix_moving_v_to_u(&(*v)[0], &(*u)[0], r->data, w ? &(*w)[0] : NULL, ang);
}

void FortFuncs::get_omegachiphi(const FortranMatrix<float> *mt, float* omega, float* chi, float* phi, const char* code) {
  int code_len__ = 0;
  if (code) code_len__ = strlen(code); // Protect Optional args
  __cfml_geometry_calc_MOD_get_omegachiphi(mt->data, omega, chi, phi, code, code_len__);
}

void FortFuncs::get_phithechi(const FortranMatrix<float> *mt, float* phi, float* theta, float* chi, const char* code) {
  int code_len__ = 0;
  if (code) code_len__ = strlen(code); // Protect Optional args
  __cfml_geometry_calc_MOD_get_phithechi(mt->data, phi, theta, chi, code, code_len__);
}

void FortFuncs::get_transf_list(const FortranMatrix<float> *trans, const std::vector<float>* ox, point_list_type* pl, point_list_type* npl, int* ifail) {
  __cfml_geometry_calc_MOD_get_transf_list(trans->data, &(*ox)[0], pl->data_ptr, npl->data_ptr, ifail);
}

void FortFuncs::init_err_geom(void) {
  __cfml_geometry_calc_MOD_init_err_geom();
}

void FortFuncs::p1_dist(float dmax, crystal_cell_type* cell, space_group_type* spg, atoms_cell_type* ac, const int* lun) {
  __cfml_geometry_calc_MOD_p1_dist(&dmax, cell->data_ptr, spg->data_ptr, ac->data_ptr, lun);
}

void FortFuncs::print_distances(int lun, float dmax, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a) {
  __cfml_geometry_calc_MOD_print_distances(&lun, &dmax, cell->data_ptr, spg->data_ptr, a->data_ptr);
}

void FortFuncs::set_rotation_matrix(const std::vector<float>* ang, FortranMatrix<float> *rot) {
  __cfml_geometry_calc_MOD_set_rotation_matrix(&(*ang)[0], rot->data);
}

void FortFuncs::set_tdist_coordination(int max_coor, float dmax, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a) {
  __cfml_geometry_calc_MOD_set_tdist_coordination(&max_coor, &dmax, cell->data_ptr, spg->data_ptr, a->data_ptr);
}

void FortFuncs::set_tdist_partial_coordination(int list, int max_coor, float dmax, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a) {
  __cfml_geometry_calc_MOD_set_tdist_partial_coordination(&list, &max_coor, &dmax, cell->data_ptr, spg->data_ptr, a->data_ptr);
}

void FortFuncs::torsion_and_sigma(crystal_cell_type* cellp, const std::vector<float>* x1, const std::vector<float>* x2, const std::vector<float>* x3, const std::vector<float>* x4, const std::vector<float>* sx1, const std::vector<float>* sx2, const std::vector<float>* sx3, const std::vector<float>* sx4, float* tor, float* s) {
  __cfml_geometry_calc_MOD_torsion_and_sigma(cellp->data_ptr, &(*x1)[0], &(*x2)[0], &(*x3)[0], &(*x4)[0], &(*sx1)[0], &(*sx2)[0], &(*sx3)[0], &(*sx4)[0], tor, s);
}

int FortFuncs::directory_exists(const char* dirname) {
  int dirname_len__ = 0;
  if (dirname) dirname_len__ = strlen(dirname); // Protect Optional args
  return __cfml_globaldeps_MOD_directory_exists(dirname, dirname_len__);
}

void FortFuncs::write_date_time(const int* lun, std::string *dtim) {
  int dtim_len__ = 0;
  if (dtim) dtim_len__ = dtim->length();
  // Declare memory to store output character data
  char dtim_c__[dtim_len__+1];
  dtim_c__[dtim_len__] = '\0';
  __cfml_globaldeps_MOD_write_date_time(lun, dtim ? dtim_c__ : NULL, dtim_len__);
  if (dtim) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=dtim_len__-1; dtim_c__[i]==' '; i--) dtim_c__[i] = '\0';
    dtim->assign(dtim_c__);
  }
}

void FortFuncs::define_uncompress_program(const char* progname) {
  int progname_len__ = 0;
  if (progname) progname_len__ = strlen(progname); // Protect Optional args
  __cfml_ill_instrm_data_MOD_define_uncompress_program(progname, progname_len__);
}

void FortFuncs::get_absolute_data_path(int numor, const char* instrm, std::string *path, const int* iyear, const int* icycle, std::string *actual_path) {
  int instrm_len__ = 0;
  if (instrm) instrm_len__ = strlen(instrm); // Protect Optional args
  int actual_path_len__ = 0;
  if (actual_path) actual_path_len__ = actual_path->length();
  // Declare memory to store output character data
  char actual_path_c__[actual_path_len__+1];
  actual_path_c__[actual_path_len__] = '\0';
  int path_len__ = 0;
  if (path) path_len__ = path->length();
  // Declare memory to store output character data
  char path_c__[path_len__+1];
  path_c__[path_len__] = '\0';
  __cfml_ill_instrm_data_MOD_get_absolute_data_path(&numor, instrm, path ? path_c__ : NULL, iyear, icycle, actual_path ? actual_path_c__ : NULL, instrm_len__, path_len__, actual_path_len__);
  if (actual_path) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=path_len__-1; actual_path_c__[i]==' '; i--) actual_path_c__[i] = '\0';
    actual_path->assign(actual_path_c__);
  }
  if (path) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=path_len__-1; path_c__[i]==' '; i--) path_c__[i] = '\0';
    path->assign(path_c__);
  }
}

void FortFuncs::get_next_yearcycle(std::string *yearcycle, const int* reset_to_most_recent) {
  int yearcycle_len__ = 0;
  if (yearcycle) yearcycle_len__ = yearcycle->length();
  // Declare memory to store output character data
  char yearcycle_c__[yearcycle_len__+1];
  yearcycle_c__[yearcycle_len__] = '\0';
  __cfml_ill_instrm_data_MOD_get_next_yearcycle(yearcycle ? yearcycle_c__ : NULL, reset_to_most_recent, yearcycle_len__);
  if (yearcycle) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=yearcycle_len__-1; yearcycle_c__[i]==' '; i--) yearcycle_c__[i] = '\0';
    yearcycle->assign(yearcycle_c__);
  }
}

void FortFuncs::init_err_illdata(void) {
  __cfml_ill_instrm_data_MOD_init_err_illdata();
}

void FortFuncs::initialize_data_directory(void) {
  __cfml_ill_instrm_data_MOD_initialize_data_directory();
}

void FortFuncs::read_current_instrm(const char* filenam) {
  int filenam_len__ = 0;
  if (filenam) filenam_len__ = strlen(filenam); // Protect Optional args
  __cfml_ill_instrm_data_MOD_read_current_instrm(filenam, filenam_len__);
}

void FortFuncs::set_current_orient(float wave, const FortranMatrix<float> *ub, const FortranMatrix<float> *setting) {
  __cfml_ill_instrm_data_MOD_set_current_orient(&wave, ub->data, setting ? setting->data : NULL);
}

void FortFuncs::set_default_instrument(const char* typ, const std::vector<float>* wav) {
  int typ_len__ = 0;
  if (typ) typ_len__ = strlen(typ); // Protect Optional args
  __cfml_ill_instrm_data_MOD_set_default_instrument(typ, wav ? &(*wav)[0] : NULL, typ_len__);
}

void FortFuncs::set_ill_data_directory(const char* filedir) {
  int filedir_len__ = 0;
  if (filedir) filedir_len__ = strlen(filedir); // Protect Optional args
  __cfml_ill_instrm_data_MOD_set_ill_data_directory(filedir, filedir_len__);
}

void FortFuncs::set_instrm_directory(const char* working_dir, const char* instrm, const int* iyear, const int* icycle) {
  int instrm_len__ = 0;
  if (instrm) instrm_len__ = strlen(instrm); // Protect Optional args
  int working_dir_len__ = 0;
  if (working_dir) working_dir_len__ = strlen(working_dir); // Protect Optional args
  __cfml_ill_instrm_data_MOD_set_instrm_directory(working_dir, instrm, iyear, icycle, working_dir_len__, instrm_len__);
}

void FortFuncs::set_instrm_geometry_directory(const char* env_var) {
  int env_var_len__ = 0;
  if (env_var) env_var_len__ = strlen(env_var); // Protect Optional args
  __cfml_ill_instrm_data_MOD_set_instrm_geometry_directory(env_var, env_var_len__);
}

void FortFuncs::update_current_instrm_ub(const char* filenam, const FortranMatrix<float> *ub, float wave) {
  int filenam_len__ = 0;
  if (filenam) filenam_len__ = strlen(filenam); // Protect Optional args
  __cfml_ill_instrm_data_MOD_update_current_instrm_ub(filenam, ub->data, &wave, filenam_len__);
}

void FortFuncs::write_current_instrm_data(const int* lun, const char* fil) {
  int fil_len__ = 0;
  if (fil) fil_len__ = strlen(fil); // Protect Optional args
  __cfml_ill_instrm_data_MOD_write_current_instrm_data(lun, fil, fil_len__);
}

void FortFuncs::write_generic_numor(generic_numor_type* num, const int* lun) {
  __cfml_ill_instrm_data_MOD_write_generic_numor(num->data_ptr, lun);
}

void FortFuncs::read_calibration_file(const char* filecal, const char* instrm, calibration_detector_type* cal) {
  int filecal_len__ = 0;
  if (filecal) filecal_len__ = strlen(filecal); // Protect Optional args
  int instrm_len__ = 0;
  if (instrm) instrm_len__ = strlen(instrm); // Protect Optional args
  __cfml_ill_instrm_data_MOD_read_calibration_file(filecal, instrm, cal->data_ptr, filecal_len__, instrm_len__);
}

void FortFuncs::error_message(const char* mess, const int* iunit, const char* routine, const int* fatal) {
  int mess_len__ = 0;
  if (mess) mess_len__ = strlen(mess); // Protect Optional args
  int routine_len__ = 0;
  if (routine) routine_len__ = strlen(routine); // Protect Optional args
  __cfml_io_messages_MOD_error_message(mess, iunit, routine, fatal, mess_len__, routine_len__);
}

void FortFuncs::info_message(const char* mess, const int* iunit) {
  int mess_len__ = 0;
  if (mess) mess_len__ = strlen(mess); // Protect Optional args
  __cfml_io_messages_MOD_info_message(mess, iunit, mess_len__);
}

void FortFuncs::print_message(const char* mess) {
  int mess_len__ = 0;
  if (mess) mess_len__ = strlen(mess); // Protect Optional args
  __cfml_io_messages_MOD_print_message(mess, mess_len__);
}

void FortFuncs::wait_message(const char* mess) {
  int mess_len__ = 0;
  if (mess) mess_len__ = strlen(mess); // Protect Optional args
  __cfml_io_messages_MOD_wait_message(mess, mess_len__);
}

void FortFuncs::write_scroll_text(const char* mess) {
  int mess_len__ = 0;
  if (mess) mess_len__ = strlen(mess); // Protect Optional args
  __cfml_io_messages_MOD_write_scroll_text(mess, mess_len__);
}

void FortFuncs::calc_induced_sk(crystal_cell_type* cell, space_group_type* spg, float mfield, const std::vector<float>* dir_mfield, matom_list_type* atm, const int* ipr) {
  __cfml_magnetic_symmetry_MOD_calc_induced_sk(cell->data_ptr, spg->data_ptr, &mfield, &(*dir_mfield)[0], atm->data_ptr, ipr);
}

void FortFuncs::cleanup_symmetry_operators(magnetic_space_group_type* mspg) {
  __cfml_magnetic_symmetry_MOD_cleanup_symmetry_operators(mspg->data_ptr);
}

void FortFuncs::init_magsymm_k_type(magsymm_k_type* mgp) {
  __cfml_magnetic_symmetry_MOD_init_magsymm_k_type(mgp->data_ptr);
}

void FortFuncs::get_moment_ctr(const std::vector<float>* xnr, std::vector<float>* moment, magnetic_space_group_type* spgr, int* codini, std::vector<float>* codes, const int* ord, const int* ipr) {
  __cfml_magnetic_symmetry_MOD_get_moment_ctr(&(*xnr)[0], &(*moment)[0], spgr->data_ptr, codini, &(*codes)[0], ord, NULL, NULL, ipr);
}

void FortFuncs::set_magnetic_space_group(const char* symb, const char* setting, magnetic_space_group_type* mspg, const char* parent, const int* mcif, const int* keepd, const int* trn_to) {
  int symb_len__ = 0;
  if (symb) symb_len__ = strlen(symb); // Protect Optional args
  int parent_len__ = 0;
  if (parent) parent_len__ = strlen(parent); // Protect Optional args
  int setting_len__ = 0;
  if (setting) setting_len__ = strlen(setting); // Protect Optional args
  __cfml_magnetic_symmetry_MOD_set_magnetic_space_group(symb, setting, mspg->data_ptr, parent, mcif, keepd, trn_to, symb_len__, setting_len__, parent_len__);
}

void FortFuncs::set_shubnikov_group(const char* shubk, magnetic_group_type* sg, magsymm_k_type* mgp) {
  int shubk_len__ = 0;
  if (shubk) shubk_len__ = strlen(shubk); // Protect Optional args
  __cfml_magnetic_symmetry_MOD_set_shubnikov_group(shubk, sg->data_ptr, mgp->data_ptr, shubk_len__);
}

void FortFuncs::setting_change_maggroup(const char* setting, magnetic_space_group_type* mspg, magnetic_space_group_type* mspgn, const int* trn_to) {
  int setting_len__ = 0;
  if (setting) setting_len__ = strlen(setting); // Protect Optional args
  __cfml_magnetic_symmetry_MOD_setting_change_maggroup(setting, mspg->data_ptr, mspgn->data_ptr, trn_to, setting_len__);
}

void FortFuncs::write_magnetic_structure(int ipr, magsymm_k_type* mgp, matom_list_type* am, magnetic_domain_type* mag_dom, crystal_cell_type* cell) {
  __cfml_magnetic_symmetry_MOD_write_magnetic_structure(&ipr, mgp->data_ptr, am->data_ptr, mag_dom ? mag_dom->data_ptr : NULL, cell ? cell->data_ptr : NULL);
}

void FortFuncs::write_mcif(int ipr, crystal_cell_type* mcell, magnetic_space_group_type* msgp, matom_list_type* am, crystal_cell_type* cell) {
  __cfml_magnetic_symmetry_MOD_write_mcif(&ipr, mcell->data_ptr, msgp->data_ptr, am->data_ptr, cell ? cell->data_ptr : NULL);
}

void FortFuncs::write_shubnikov_group(magnetic_group_type* sg, const int* iunit) {
  __cfml_magnetic_symmetry_MOD_write_shubnikov_group(sg->data_ptr, iunit);
}

int FortFuncs::index_cube(const std::vector<int>* iv, int mc) {
  return __cfml_maps_calculations_MOD_index_cube(&(*iv)[0], &mc);
}

float FortFuncs::vpoint_in_cube(float r, float s, float t, float x000, float x001, float x010, float x011, float x100, float x101, float x110, float x111) {
  return __cfml_maps_calculations_MOD_vpoint_in_cube(&r, &s, &t, &x000, &x001, &x010, &x011, &x100, &x101, &x110, &x111);
}

float FortFuncs::vpoint_in_line(float r, float x0, float x1) {
  return __cfml_maps_calculations_MOD_vpoint_in_line(&r, &x0, &x1);
}

float FortFuncs::vpoint_in_square(float r, float s, float x00, float x01, float x10, float x11) {
  return __cfml_maps_calculations_MOD_vpoint_in_square(&r, &s, &x00, &x01, &x10, &x11);
}

void FortFuncs::init_err_maps(void) {
  __cfml_maps_calculations_MOD_init_err_maps();
}

void FortFuncs::set_cube_info(void) {
  __cfml_maps_calculations_MOD_set_cube_info();
}

float FortFuncs::veclength(const FortranMatrix<float> *a, const std::vector<float>* b) {
  return __cfml_math_3d_MOD_veclength(a->data, &(*b)[0]);
}

void FortFuncs::init_err_math3d(void) {
  __cfml_math_3d_MOD_init_err_math3d();
}

void FortFuncs::set_eps(float neweps) {
  __cfml_math_3d_MOD_set_eps(&neweps);
}

void FortFuncs::set_eps_default(void) {
  __cfml_math_3d_MOD_set_eps_default();
}

void FortFuncs::get_plane_from_3points(const std::vector<float>* p1, const std::vector<float>* p2, const std::vector<float>* p3, float* a, float* b, float* c, float* d) {
  __cfml_math_3d_MOD_get_plane_from_3points(&(*p1)[0], &(*p2)[0], &(*p3)[0], a, b, c, d);
}

void FortFuncs::matrix_diageigen(const FortranMatrix<float> *a, std::vector<float>* v, FortranMatrix<float> *c) {
  __cfml_math_3d_MOD_matrix_diageigen(a->data, &(*v)[0], c->data);
}

void FortFuncs::matrix_inverse(const FortranMatrix<float> *a, FortranMatrix<float> *b, int* ifail) {
  __cfml_math_3d_MOD_matrix_inverse(a->data, b->data, ifail);
}

void FortFuncs::resolv_sist_1x2(const std::vector<int>* w, float t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix) {
  __cfml_math_3d_MOD_resolv_sist_1x2(&(*w)[0], &t, &(*ts)[0], &(*x)[0], &(*ix)[0]);
}

void FortFuncs::resolv_sist_1x3(const std::vector<int>* w, float t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix) {
  __cfml_math_3d_MOD_resolv_sist_1x3(&(*w)[0], &t, &(*ts)[0], &(*x)[0], &(*ix)[0]);
}

void FortFuncs::resolv_sist_2x2(const FortranMatrix<int> *w, const std::vector<float>* t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix) {
  __cfml_math_3d_MOD_resolv_sist_2x2(w->data, &(*t)[0], &(*ts)[0], &(*x)[0], &(*ix)[0]);
}

void FortFuncs::resolv_sist_2x3(const FortranMatrix<int> *w, const std::vector<float>* t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix) {
  __cfml_math_3d_MOD_resolv_sist_2x3(w->data, &(*t)[0], &(*ts)[0], &(*x)[0], &(*ix)[0]);
}

void FortFuncs::resolv_sist_3x3(const FortranMatrix<int> *w, const std::vector<float>* t, std::vector<float>* ts, std::vector<float>* x, std::vector<int>* ix) {
  __cfml_math_3d_MOD_resolv_sist_3x3(w->data, &(*t)[0], &(*ts)[0], &(*x)[0], &(*ix)[0]);
}

float FortFuncs::bessj(int n, float x) {
  return __cfml_math_general_MOD_bessj(&n, &x);
}

int FortFuncs::pgcd(int a, int b) {
  return __cfml_math_general_MOD_pgcd(&a, &b);
}

int FortFuncs::ppcm(int a, int b) {
  return __cfml_math_general_MOD_ppcm(&a, &b);
}

void FortFuncs::init_err_mathgen(void) {
  __cfml_math_general_MOD_init_err_mathgen();
}

void FortFuncs::set_epsg(float neweps) {
  __cfml_math_general_MOD_set_epsg(&neweps);
}

void FortFuncs::set_epsg_default(void) {
  __cfml_math_general_MOD_set_epsg_default();
}

void FortFuncs::cartesian_to_fractional(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_cartesian_to_fractional(molecule->data_ptr, cell->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::cartesian_to_spherical(molecule_type* molecule, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_cartesian_to_spherical(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::cartesian_to_zmatrix(molecule_type* molecule, molecule_type* newmolecule, crystal_cell_type* cell, const float* d_min, const float* d_max) {
  __cfml_molecular_crystals_MOD_cartesian_to_zmatrix(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL, cell ? cell->data_ptr : NULL, d_min, d_max);
}

void FortFuncs::fix_reference(molecule_type* molecule, molecule_type* newmolecule, const int* natom_o, const int* natom_x, const int* natom_xy) {
  __cfml_molecular_crystals_MOD_fix_reference(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL, natom_o, natom_x, natom_xy);
}

void FortFuncs::fix_orient_cartesian(molecule_type* molecule, molecule_type* newmolecule, const int* natom_o, const int* natom_x, const int* natom_xy, FortranMatrix<float> *mat) {
  __cfml_molecular_crystals_MOD_fix_orient_cartesian(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL, natom_o, natom_x, natom_xy, mat ? mat->data : NULL);
}

void FortFuncs::fractional_to_cartesian(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_fractional_to_cartesian(molecule->data_ptr, cell->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::fractional_to_spherical(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_fractional_to_spherical(molecule->data_ptr, cell->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::fractional_to_zmatrix(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_fractional_to_zmatrix(molecule->data_ptr, cell->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::init_err_molec(void) {
  __cfml_molecular_crystals_MOD_init_err_molec();
}

void FortFuncs::init_molecule(molecule_type* molecule, const int* natm) {
  __cfml_molecular_crystals_MOD_init_molecule(molecule->data_ptr, natm);
}

void FortFuncs::init_mol_crys(molecular_crystal_type* molx, const int* natm, const int* nmol) {
  __cfml_molecular_crystals_MOD_init_mol_crys(molx->data_ptr, natm, nmol);
}

void FortFuncs::molcrys_to_atomlist(molecular_crystal_type* molcrys, atom_list_type* atm) {
  __cfml_molecular_crystals_MOD_molcrys_to_atomlist(molcrys->data_ptr, atm->data_ptr);
}

void FortFuncs::molec_to_atomlist(molecule_type* molec, atom_list_type* atm, const char* coor_type, crystal_cell_type* cell) {
  int coor_type_len__ = 0;
  if (coor_type) coor_type_len__ = strlen(coor_type); // Protect Optional args
  __cfml_molecular_crystals_MOD_molec_to_atomlist(molec->data_ptr, atm->data_ptr, coor_type, cell ? cell->data_ptr : NULL, coor_type_len__);
}

void FortFuncs::set_euler_matrix(const char* rt, float phi, float theta, float chi, FortranMatrix<float> *eu) {
  int rt_len__ = 0;
  if (rt) rt_len__ = strlen(rt); // Protect Optional args
  __cfml_molecular_crystals_MOD_set_euler_matrix(rt, &phi, &theta, &chi, eu->data, rt_len__);
}

void FortFuncs::spherical_to_cartesian(molecule_type* molecule, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_spherical_to_cartesian(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::spherical_to_fractional(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_spherical_to_fractional(molecule->data_ptr, cell->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::spherical_to_zmatrix(molecule_type* molecule, molecule_type* newmolecule, crystal_cell_type* cell) {
  __cfml_molecular_crystals_MOD_spherical_to_zmatrix(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL, cell ? cell->data_ptr : NULL);
}

void FortFuncs::write_molecular_crystal(molecular_crystal_type* molcrys, const int* lun) {
  __cfml_molecular_crystals_MOD_write_molecular_crystal(molcrys->data_ptr, lun);
}

void FortFuncs::write_molecule(molecule_type* molecule, const int* lun) {
  __cfml_molecular_crystals_MOD_write_molecule(molecule->data_ptr, lun);
}

void FortFuncs::zmatrix_to_cartesian(molecule_type* molecule, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_zmatrix_to_cartesian(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::zmatrix_to_fractional(molecule_type* molecule, crystal_cell_type* cell, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_zmatrix_to_fractional(molecule->data_ptr, cell->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::zmatrix_to_spherical(molecule_type* molecule, molecule_type* newmolecule) {
  __cfml_molecular_crystals_MOD_zmatrix_to_spherical(molecule->data_ptr, newmolecule ? newmolecule->data_ptr : NULL);
}

void FortFuncs::calc_mag_interaction_vector(magh_list_type* reflex, crystal_cell_type* cell) {
  __cfml_magnetic_structure_factors_MOD_calc_mag_interaction_vector(reflex->data_ptr, cell->data_ptr);
}

void FortFuncs::calc_magnetic_strf_miv(crystal_cell_type* cell, magsymm_k_type* mgp, matom_list_type* atm, magh_type* mh) {
  __cfml_magnetic_structure_factors_MOD_calc_magnetic_strf_miv(cell->data_ptr, mgp->data_ptr, atm->data_ptr, mh->data_ptr);
}

void FortFuncs::calc_magnetic_strf_miv_dom(crystal_cell_type* cell, magsymm_k_type* mgp, matom_list_type* atm, magnetic_domain_type* mag_dom, maghd_type* mh) {
  __cfml_magnetic_structure_factors_MOD_calc_magnetic_strf_miv_dom(cell->data_ptr, mgp->data_ptr, atm->data_ptr, mag_dom->data_ptr, mh->data_ptr);
}

void FortFuncs::calc_magnetic_strf_tensor(space_group_type* spg, matom_list_type* atm, magh_type* mh) {
  __cfml_magnetic_structure_factors_MOD_calc_magnetic_strf_tensor(spg->data_ptr, atm->data_ptr, mh->data_ptr);
}

void FortFuncs::gen_satellites(crystal_cell_type* cell, magsymm_k_type* grp, float smax, magh_list_type* h, const int* ord, const int* powder, reflection_list_type* hkl) {
  __cfml_magnetic_structure_factors_MOD_gen_satellites(cell->data_ptr, grp->data_ptr, &smax, h->data_ptr, ord, powder, hkl ? hkl->data_ptr : NULL);
}

void FortFuncs::init_err_msfac(void) {
  __cfml_magnetic_structure_factors_MOD_init_err_msfac();
}

void FortFuncs::init_mag_structure_factors(magh_list_type* reflex, matom_list_type* atm, magsymm_k_type* grp, const int* lun) {
  __cfml_magnetic_structure_factors_MOD_init_mag_structure_factors(reflex->data_ptr, atm->data_ptr, grp->data_ptr, lun);
}

void FortFuncs::mag_structure_factors(crystal_cell_type* cell, matom_list_type* atm, magsymm_k_type* grp, magh_list_type* reflex) {
  __cfml_magnetic_structure_factors_MOD_mag_structure_factors(cell->data_ptr, atm->data_ptr, grp->data_ptr, reflex->data_ptr);
}

void FortFuncs::write_mag_structure_factors(int lun, magh_list_type* reflex, magsymm_k_type* grp) {
  __cfml_magnetic_structure_factors_MOD_write_mag_structure_factors(&lun, reflex->data_ptr, grp->data_ptr);
}

void FortFuncs::init_err_optim(void) {
  __cfml_optimization_general_MOD_init_err_optim();
}

void FortFuncs::init_opt_conditions(opt_conditions_type* opt) {
  __cfml_optimization_general_MOD_init_opt_conditions(opt->data_ptr);
}

void FortFuncs::write_optimization_conditions(int ipr, opt_conditions_type* c) {
  __cfml_optimization_general_MOD_write_optimization_conditions(&ipr, c->data_ptr);
}

void FortFuncs::write_polar_info(polar_calc_type* polari, magnetic_domain_type* mag_dom, const int* lun, const char* info) {
  int info_len__ = 0;
  if (info) info_len__ = strlen(info); // Protect Optional args
  __cfml_polarimetry_MOD_write_polar_info(polari->data_ptr, mag_dom->data_ptr, lun, info, info_len__);
}

void FortFuncs::write_polar_line(polar_calc_type* polari, const int* lun) {
  __cfml_polarimetry_MOD_write_polar_line(polari->data_ptr, lun);
}

void FortFuncs::init_prof_val(void) {
  __cfml_powderprofiles_finger_MOD_init_prof_val();
}

void FortFuncs::prof_val(float eta, float gamma, float asym1, float asym2, float twoth, float twoth0, float* dprdt, float* dprdg, float* dprde, float* dprds, float* dprdd, float* profval, int use_asym, int use_hps) {
  __cfml_powderprofiles_finger_MOD_prof_val(&eta, &gamma, &asym1, &asym2, &twoth, &twoth0, dprdt, dprdg, dprde, dprds, dprdd, profval, &use_asym, &use_hps);
}

void FortFuncs::tof_carpenter(float dt, float d, float alfa, float beta, float gamma, float eta, float kappa, float tof_theta, float* tof_peak, deriv_tof_type* deriv) {
  __cfml_powderprofiles_tof_MOD_tof_carpenter(&dt, &d, &alfa, &beta, &gamma, &eta, &kappa, &tof_theta, tof_peak, deriv ? deriv->data_ptr : NULL);
}

void FortFuncs::tof_jorgensen(float dt, float alfa, float beta, float sigma, float* tof_peak, deriv_tof_type* deriv) {
  __cfml_powderprofiles_tof_MOD_tof_jorgensen(&dt, &alfa, &beta, &sigma, tof_peak, deriv ? deriv->data_ptr : NULL);
}

void FortFuncs::tof_jorgensen_vondreele(float dt, float alfa, float beta, float gamma, float eta, float* tof_peak, deriv_tof_type* deriv) {
  __cfml_powderprofiles_tof_MOD_tof_jorgensen_vondreele(&dt, &alfa, &beta, &gamma, &eta, tof_peak, deriv ? deriv->data_ptr : NULL);
}

int FortFuncs::hk_equiv(const std::vector<float>* h, const std::vector<float>* k, group_k_type* spacegk, const int* friedel) {
  return __cfml_propagation_vectors_MOD_hk_equiv(&(*h)[0], &(*k)[0], spacegk->data_ptr, friedel);
}

int FortFuncs::k_equiv(const std::vector<float>* h, const std::vector<float>* k, const char* latyp) {
  int latyp_len__ = 0;
  if (latyp) latyp_len__ = strlen(latyp); // Protect Optional args
  return __cfml_propagation_vectors_MOD_k_equiv(&(*h)[0], &(*k)[0], latyp, latyp_len__);
}

int FortFuncs::k_equiv_minus_k(const std::vector<float>* vec, const char* lat) {
  int lat_len__ = 0;
  if (lat) lat_len__ = strlen(lat); // Protect Optional args
  return __cfml_propagation_vectors_MOD_k_equiv_minus_k(&(*vec)[0], lat, lat_len__);
}

void FortFuncs::k_star(const std::vector<float>* k, space_group_type* spacegroup, group_k_type* gk, const int* ext) {
  __cfml_propagation_vectors_MOD_k_star(&(*k)[0], spacegroup->data_ptr, gk->data_ptr, ext);
}

void FortFuncs::write_group_k(group_k_type* gk, const int* lun) {
  __cfml_propagation_vectors_MOD_write_group_k(gk->data_ptr, lun);
}

void FortFuncs::init_err_random(void) {
  __cfml_random_generators_MOD_init_err_random();
}

void FortFuncs::random_beta(float aa, float bb, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_beta(&aa, &bb, &first, fn_val);
}

void FortFuncs::random_binomial1(int n, float p, int first, int* ival) {
  __cfml_random_generators_MOD_random_binomial1(&n, &p, &first, ival);
}

void FortFuncs::random_binomial2(int n, float pp, int first, int* ival) {
  __cfml_random_generators_MOD_random_binomial2(&n, &pp, &first, ival);
}

void FortFuncs::random_cauchy(float* fn_val) {
  __cfml_random_generators_MOD_random_cauchy(fn_val);
}

void FortFuncs::random_chisq(int ndf, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_chisq(&ndf, &first, fn_val);
}

void FortFuncs::random_exponential(float* fn_val) {
  __cfml_random_generators_MOD_random_exponential(fn_val);
}

void FortFuncs::random_gamma(float s, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_gamma(&s, &first, fn_val);
}

void FortFuncs::random_gamma1(float s, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_gamma1(&s, &first, fn_val);
}

void FortFuncs::random_gamma2(float s, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_gamma2(&s, &first, fn_val);
}

void FortFuncs::random_inv_gauss(float h, float b, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_inv_gauss(&h, &b, &first, fn_val);
}

void FortFuncs::random_mvnorm(const std::vector<float>* h, float d, float* f, int first, std::vector<float>* x, int* ier) {
  int n = h->size();
  __cfml_random_generators_MOD_random_mvnorm(&n, &(*h)[0], &d, f, &first, &(*x)[0], ier);
}

void FortFuncs::random_neg_binomial(float sk, float p, int* ival) {
  __cfml_random_generators_MOD_random_neg_binomial(&sk, &p, ival);
}

void FortFuncs::random_normal(float* fn_val) {
  __cfml_random_generators_MOD_random_normal(fn_val);
}

void FortFuncs::random_order(std::vector<int>* order) {
  int n = order->size();
  __cfml_random_generators_MOD_random_order(&(*order)[0], &n);
}

void FortFuncs::random_poisson(float mt, int* genpoi) {
  __cfml_random_generators_MOD_random_poisson(&mt, genpoi);
}

void FortFuncs::random_t(int m, float* fn_val) {
  __cfml_random_generators_MOD_random_t(&m, fn_val);
}

void FortFuncs::random_von_mises(float k, int first, float* fn_val) {
  __cfml_random_generators_MOD_random_von_mises(&k, &first, fn_val);
}

void FortFuncs::random_weibull(float a, float* fn_val) {
  __cfml_random_generators_MOD_random_weibull(&a, fn_val);
}

void FortFuncs::seed_random_number(const int* i_input, const int* i_output) {
  __cfml_random_generators_MOD_seed_random_number(i_input, i_output);
}

void FortFuncs::allocate_vparam(int n) {
  __cfml_keywords_code_parser_MOD_allocate_vparam(&n);
}

void FortFuncs::get_restang_line(const char* line, atom_list_type* fatom) {
  int line_len__ = 0;
  if (line) line_len__ = strlen(line); // Protect Optional args
  __cfml_keywords_code_parser_MOD_get_restang_line(line, fatom->data_ptr, line_len__);
}

void FortFuncs::get_restdis_line(const char* line, atom_list_type* fatom) {
  int line_len__ = 0;
  if (line) line_len__ = strlen(line); // Protect Optional args
  __cfml_keywords_code_parser_MOD_get_restdis_line(line, fatom->data_ptr, line_len__);
}

void FortFuncs::get_resttor_line(const char* line, atom_list_type* fatom) {
  int line_len__ = 0;
  if (line) line_len__ = strlen(line); // Protect Optional args
  __cfml_keywords_code_parser_MOD_get_resttor_line(line, fatom->data_ptr, line_len__);
}

void FortFuncs::init_err_refcodes(void) {
  __cfml_keywords_code_parser_MOD_init_err_refcodes();
}

void FortFuncs::init_refcodes(atom_list_type* fatom, matom_list_type* fmatom, magnetic_domain_type* mag_dom, molecular_crystal_type* molcrys, molecule_type* molec, nonatomic_parameter_list_type* model) {
  __cfml_keywords_code_parser_MOD_init_refcodes(fatom ? fatom->data_ptr : NULL, fmatom ? fmatom->data_ptr : NULL, mag_dom ? mag_dom->data_ptr : NULL, molcrys ? molcrys->data_ptr : NULL, molec ? molec->data_ptr : NULL, model ? model->data_ptr : NULL);
}

void FortFuncs::read_refgcodes_file(file_list_type* file_dat, int n_ini, int n_end, nonatomic_parameter_list_type* model, const char* sys, const int* iphas) {
  int sys_len__ = 0;
  if (sys) sys_len__ = strlen(sys); // Protect Optional args
  __cfml_keywords_code_parser_MOD_read_refgcodes_file(file_dat->data_ptr, &n_ini, &n_end, model->data_ptr, sys, iphas, sys_len__);
}

void FortFuncs::vstate_to_modelpar(nonatomic_parameter_list_type* model, const char* mode) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_keywords_code_parser_MOD_vstate_to_modelpar(model->data_ptr, mode, mode_len__);
}

void FortFuncs::write_info_refgcodes(nonatomic_parameter_list_type* model, const int* iunit) {
  __cfml_keywords_code_parser_MOD_write_info_refgcodes(model->data_ptr, iunit);
}

void FortFuncs::write_info_refparams(const int* iunit) {
  __cfml_keywords_code_parser_MOD_write_info_refparams(iunit);
}

void FortFuncs::write_restraints_obscalc(atom_list_type* a, const int* iunit) {
  __cfml_keywords_code_parser_MOD_write_restraints_obscalc(a->data_ptr, iunit);
}

int FortFuncs::get_maxnumref(float sintlmax, float volcell, const float* sintlmin, const int* mult) {
  return __cfml_reflections_utilities_MOD_get_maxnumref(&sintlmax, &volcell, sintlmin, mult);
}

int FortFuncs::mhkl_absent(const std::vector<int>* h, magnetic_space_group_type* shubg) {
  return __cfml_reflections_utilities_MOD_mhkl_absent(&(*h)[0], shubg->data_ptr);
}

void FortFuncs::init_err_refl(void) {
  __cfml_reflections_utilities_MOD_init_err_refl();
}

void FortFuncs::init_reflist(reflection_list_type* reflex, const int* n) {
  __cfml_reflections_utilities_MOD_init_reflist(reflex->data_ptr, n);
}

void FortFuncs::write_asu(space_group_type* spacegroup, const int* iunit) {
  __cfml_reflections_utilities_MOD_write_asu(spacegroup->data_ptr, iunit);
}

void FortFuncs::write_reflist_info(reflection_list_type* rfl, const int* iunit, const char* mode) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_reflections_utilities_MOD_write_reflist_info(rfl->data_ptr, iunit, mode, mode_len__);
}

void FortFuncs::angs_4c_bisecting(float wave, const std::vector<float>* z1, float* tth, float* om, float* ch, float* ph, int* ierr) {
  __cfml_geometry_sxtal_MOD_angs_4c_bisecting(&wave, &(*z1)[0], tth, om, ch, ph, ierr);
}

void FortFuncs::calang(const std::vector<float>* h, float* tteta, float* om, float* ch, float* ph, int* ierr, const float* wav, const FortranMatrix<float> *ubm, const int* geom) {
  __cfml_geometry_sxtal_MOD_calang(&(*h)[0], tteta, om, ch, ph, ierr, wav, ubm ? ubm->data : NULL, geom);
}

void FortFuncs::calc_om_chi_phi(const std::vector<float>* vhkl, const std::vector<float>* vlab1, float psi, const FortranMatrix<float> *ub, float* om, float* ch, float* ph, int* ierr) {
  __cfml_geometry_sxtal_MOD_calc_om_chi_phi(&(*vhkl)[0], &(*vlab1)[0], &psi, ub->data, om, ch, ph, ierr);
}

void FortFuncs::calc_psi(const std::vector<float>* vhkl, const std::vector<float>* vlab1, float om, float ch, float ph, const FortranMatrix<float> *ub, float* psi, int* ierr) {
  __cfml_geometry_sxtal_MOD_calc_psi(&(*vhkl)[0], &(*vlab1)[0], &om, &ch, &ph, ub->data, psi, ierr);
}

void FortFuncs::cell_fr_ub(const FortranMatrix<float> *ub, const int* ipr, std::vector<float>* dcel, std::vector<float>* rcel) {
  __cfml_geometry_sxtal_MOD_cell_fr_ub(ub->data, ipr, dcel ? &(*dcel)[0] : NULL, rcel ? &(*rcel)[0] : NULL);
}

void FortFuncs::chi_mat(float chi, FortranMatrix<float> *dum) {
  __cfml_geometry_sxtal_MOD_chi_mat(&chi, dum->data);
}

void FortFuncs::psd_convert(int mpsd, float gamm, float* gamp, float* nup, float* xobs, float* zobs, float* cath, float* anod, int* ierr) {
  __cfml_geometry_sxtal_MOD_psd_convert(&mpsd, &gamm, gamp, nup, xobs, zobs, cath, anod, ierr);
}

void FortFuncs::d19psd(int mpsd, float* ga, float* nu, float* cath, float* anod, int* ierr) {
  __cfml_geometry_sxtal_MOD_d19psd(&mpsd, ga, nu, cath, anod, ierr);
}

void FortFuncs::dspace(float wave, const std::vector<float>* vhkl, const std::vector<float>* cell, float* ds, float* th, int* ierr) {
  __cfml_geometry_sxtal_MOD_dspace(&wave, &(*vhkl)[0], &(*cell)[0], ds, th, ierr);
}

void FortFuncs::equatorial_chi_phi(const std::vector<float>* z1, float* ch, float* ph) {
  __cfml_geometry_sxtal_MOD_equatorial_chi_phi(&(*z1)[0], ch, ph);
}

void FortFuncs::fixdnu(float wave, const std::vector<float>* z1, float nu, float* ch, float* ph, float* ga, float* om, int* ierr) {
  __cfml_geometry_sxtal_MOD_fixdnu(&wave, &(*z1)[0], &nu, ch, ph, ga, om, ierr);
}

void FortFuncs::flat_cone_vertdet(float wave, const std::vector<float>* z1, const FortranMatrix<float> *ub, std::vector<float>* vrho, float* rho, float* ch, float* ph, float* ga, float* om, float* nu, int* ierr) {
  __cfml_geometry_sxtal_MOD_flat_cone_vertdet(&wave, &(*z1)[0], ub->data, &(*vrho)[0], rho, ch, ph, ga, om, nu, ierr);
}

void FortFuncs::genb(crystal_cell_type* c, FortranMatrix<float> *b) {
  __cfml_geometry_sxtal_MOD_genb(c->data_ptr, b->data);
}

void FortFuncs::genub(const FortranMatrix<float> *b, const std::vector<float>* h1, const std::vector<float>* h2, const std::vector<float>* h1o, const std::vector<float>* h2o, FortranMatrix<float> *ub, int* ierr) {
  __cfml_geometry_sxtal_MOD_genub(b->data, &(*h1)[0], &(*h2)[0], &(*h1o)[0], &(*h2o)[0], ub->data, ierr);
}

void FortFuncs::get_angs_nb(float wave, const std::vector<float>* z1, float* ga, float* om, float* nu, int* ierr) {
  __cfml_geometry_sxtal_MOD_get_angs_nb(&wave, &(*z1)[0], ga, om, nu, ierr);
}

void FortFuncs::get_dspacing_theta(float wave, const std::vector<float>* z1, float* ds, float* th, int* ierr) {
  __cfml_geometry_sxtal_MOD_get_dspacing_theta(&wave, &(*z1)[0], ds, th, ierr);
}

void FortFuncs::get_gaomnu_frchiphi(float wave, const std::vector<float>* z1, float ch, float ph, float* ga, float* om, float* nu, int* ierr) {
  __cfml_geometry_sxtal_MOD_get_gaomnu_frchiphi(&wave, &(*z1)[0], &ch, &ph, ga, om, nu, ierr);
}

void FortFuncs::get_ub_from_hkl_hkl_omega(float wave, crystal_cell_type* cell, const std::vector<float>* h1, const std::vector<float>* h2, float omega, FortranMatrix<float> *ub, int* ok, std::string *mess) {
  int mess_len__ = 0;
  if (mess) mess_len__ = mess->length();
  // Declare memory to store output character data
  char mess_c__[mess_len__+1];
  mess_c__[mess_len__] = '\0';
  __cfml_geometry_sxtal_MOD_get_ub_from_hkl_hkl_omega(&wave, cell->data_ptr, &(*h1)[0], &(*h2)[0], &omega, ub->data, ok, mess ? mess_c__ : NULL, mess_len__);
  if (mess) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=mess_len__-1; mess_c__[i]==' '; i--) mess_c__[i] = '\0';
    mess->assign(mess_c__);
  }
}

void FortFuncs::get_ub_from_uvw_hkl_omega(float wave, crystal_cell_type* cell, zone_axis_type* zone_axis, const std::vector<float>* h1, float omega, FortranMatrix<float> *ub, int* ok, std::string *mess) {
  int mess_len__ = 0;
  if (mess) mess_len__ = mess->length();
  // Declare memory to store output character data
  char mess_c__[mess_len__+1];
  mess_c__[mess_len__] = '\0';
  __cfml_geometry_sxtal_MOD_get_ub_from_uvw_hkl_omega(&wave, cell->data_ptr, zone_axis->data_ptr, &(*h1)[0], &omega, ub->data, ok, mess ? mess_c__ : NULL, mess_len__);
  if (mess) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=mess_len__-1; mess_c__[i]==' '; i--) mess_c__[i] = '\0';
    mess->assign(mess_c__);
  }
}

void FortFuncs::get_waveganu_frz4(const std::vector<float>* z4, float* wave, float* ga, float* nu, int* ierr) {
  __cfml_geometry_sxtal_MOD_get_waveganu_frz4(&(*z4)[0], wave, ga, nu, ierr);
}

void FortFuncs::get_z1_d9angls(float wave, float ttheta, float om, float ch, float ph, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_get_z1_d9angls(&wave, &ttheta, &om, &ch, &ph, &(*z1)[0]);
}

void FortFuncs::get_z1_from_pixel(int npx, int npz, int ifr, sxtal_numor_type* snum, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_get_z1_from_pixel(&npx, &npz, &ifr, snum->data_ptr, &(*z1)[0]);
}

void FortFuncs::normal(std::vector<float>* v, int* ierr) {
  __cfml_geometry_sxtal_MOD_normal(&(*v)[0], ierr);
}

void FortFuncs::phi_mat(float phi, FortranMatrix<float> *dum) {
  __cfml_geometry_sxtal_MOD_phi_mat(&phi, dum->data);
}

void FortFuncs::psi_mat(float psi, FortranMatrix<float> *dum) {
  __cfml_geometry_sxtal_MOD_psi_mat(&psi, dum->data);
}

void FortFuncs::refvec(const std::vector<float>* vhkl, const FortranMatrix<float> *ub, std::vector<float>* vs, std::vector<float>* vz, int* ierr) {
  __cfml_geometry_sxtal_MOD_refvec(&(*vhkl)[0], ub->data, &(*vs)[0], &(*vz)[0], ierr);
}

void FortFuncs::s4cnb(const std::vector<float>* angl_4c, std::vector<float>* angl_nb, int* ierr) {
  __cfml_geometry_sxtal_MOD_s4cnb(&(*angl_4c)[0], &(*angl_nb)[0], ierr);
}

void FortFuncs::set_psd(const float* dist, const float* cg, const float* ag, const int* nh, const int* nv, const int* ip) {
  __cfml_geometry_sxtal_MOD_set_psd(dist, cg, ag, nh, nv, ip);
}

void FortFuncs::snb4c(const std::vector<float>* angl_nb, std::vector<float>* angl_4c) {
  __cfml_geometry_sxtal_MOD_snb4c(&(*angl_nb)[0], &(*angl_4c)[0]);
}

void FortFuncs::sxdpsd(int mpsd, float gamm, float* wave, float* nup, float* gamp, float* xobs, float* zobs, float* xcel, float* time, float* zcel, int* ierr) {
  __cfml_geometry_sxtal_MOD_sxdpsd(&mpsd, &gamm, wave, nup, gamp, xobs, zobs, xcel, time, zcel, ierr);
}

void FortFuncs::triple(std::vector<float>* v1, std::vector<float>* v2, FortranMatrix<float> *tv, int* ierr) {
  __cfml_geometry_sxtal_MOD_triple(&(*v1)[0], &(*v2)[0], tv->data, ierr);
}

void FortFuncs::z1frfc(float wave, float tth, float om, float ch, float ph, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_z1frfc(&wave, &tth, &om, &ch, &ph, &(*z1)[0]);
}

void FortFuncs::z1frmd(float wave, float ch, float ph, float ga, float om, float nu, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_z1frmd(&wave, &ch, &ph, &ga, &om, &nu, &(*z1)[0]);
}

void FortFuncs::z1frnb(float wave, float ga, float om, float nu, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_z1frnb(&wave, &ga, &om, &nu, &(*z1)[0]);
}

void FortFuncs::z1frz2(const std::vector<float>* z2, float ph, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_z1frz2(&(*z2)[0], &ph, &(*z1)[0]);
}

void FortFuncs::z1frz3(const std::vector<float>* z3, float ch, float ph, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_z1frz3(&(*z3)[0], &ch, &ph, &(*z1)[0]);
}

void FortFuncs::z1frz4(const std::vector<float>* z4, float om, float ch, float ph, std::vector<float>* z1) {
  __cfml_geometry_sxtal_MOD_z1frz4(&(*z4)[0], &om, &ch, &ph, &(*z1)[0]);
}

void FortFuncs::z2frz1(const std::vector<float>* z1, float ph, std::vector<float>* z2) {
  __cfml_geometry_sxtal_MOD_z2frz1(&(*z1)[0], &ph, &(*z2)[0]);
}

void FortFuncs::z3frz1(const std::vector<float>* z1, float ch, float ph, std::vector<float>* z3) {
  __cfml_geometry_sxtal_MOD_z3frz1(&(*z1)[0], &ch, &ph, &(*z3)[0]);
}

void FortFuncs::z4frgn(float wave, float ga, float nu, std::vector<float>* z4) {
  __cfml_geometry_sxtal_MOD_z4frgn(&wave, &ga, &nu, &(*z4)[0]);
}

void FortFuncs::z4frz1(const std::vector<float>* z1, float om, float ch, float ph, std::vector<float>* z4) {
  __cfml_geometry_sxtal_MOD_z4frz1(&(*z1)[0], &om, &ch, &ph, &(*z4)[0]);
}

void FortFuncs::additional_scattering_factors(file_list_type* fil, scattering_species_type* add_scatt, int* ok, std::string *mess) {
  int mess_len__ = 0;
  if (mess) mess_len__ = mess->length();
  // Declare memory to store output character data
  char mess_c__[mess_len__+1];
  mess_c__[mess_len__] = '\0';
  __cfml_structure_factors_MOD_additional_scattering_factors(fil->data_ptr, add_scatt->data_ptr, ok, mess ? mess_c__ : NULL, mess_len__);
  if (mess) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=mess_len__-1; mess_c__[i]==' '; i--) mess_c__[i] = '\0';
    mess->assign(mess_c__);
  }
}

void FortFuncs::allocate_scattering_species(int n, scattering_species_type* scf) {
  __cfml_structure_factors_MOD_allocate_scattering_species(&n, scf->data_ptr);
}

void FortFuncs::calc_strfactor(const char* mode, const char* rad, int nn, float sn, atom_list_type* atm, space_group_type* grp, float* sf2) {
  int rad_len__ = 0;
  if (rad) rad_len__ = strlen(rad); // Protect Optional args
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_calc_strfactor(mode, rad, &nn, &sn, atm->data_ptr, grp->data_ptr, sf2, NULL, NULL, mode_len__, rad_len__);
}

void FortFuncs::calc_hkl_strfactor(const char* mode, const char* rad, const std::vector<int>* hn, float sn, atom_list_type* atm, space_group_type* grp, float* sf2) {
  int rad_len__ = 0;
  if (rad) rad_len__ = strlen(rad); // Protect Optional args
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_calc_hkl_strfactor(mode, rad, &(*hn)[0], &sn, atm->data_ptr, grp->data_ptr, sf2, NULL, NULL, mode_len__, rad_len__);
}

void FortFuncs::init_calc_hkl_strfactors(atom_list_type* atm, const char* mode, const float* lambda, const int* lun) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_init_calc_hkl_strfactors(atm->data_ptr, mode, lambda, lun, mode_len__);
}

void FortFuncs::init_calc_strfactors(reflection_list_type* reflex, atom_list_type* atm, space_group_type* grp, const char* mode, const float* lambda, const int* lun) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_init_calc_strfactors(reflex->data_ptr, atm->data_ptr, grp->data_ptr, mode, lambda, lun, mode_len__);
}

void FortFuncs::init_structure_factors(reflection_list_type* reflex, atom_list_type* atm, space_group_type* grp, const char* mode, const float* lambda, const int* lun) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_init_structure_factors(reflex->data_ptr, atm->data_ptr, grp->data_ptr, mode, lambda, lun, mode_len__);
}

void FortFuncs::structure_factors(atom_list_type* atm, space_group_type* grp, reflection_list_type* reflex, const char* mode, const float* lambda) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_structure_factors(atm->data_ptr, grp->data_ptr, reflex->data_ptr, mode, lambda, mode_len__);
}

void FortFuncs::write_structure_factors(int lun, reflection_list_type* reflex, const char* mode) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_structure_factors_MOD_write_structure_factors(&lun, reflex->data_ptr, mode, mode_len__);
}

void FortFuncs::cubic_harm_ang(int l, int m, float theta, float phi) {
  __cfml_spherical_harmonics_MOD_cubic_harm_ang(&l, &m, &theta, &phi);
}

void FortFuncs::cubic_harm_ucvec(int l, int m, const std::vector<float>* u) {
  __cfml_spherical_harmonics_MOD_cubic_harm_ucvec(&l, &m, &(*u)[0]);
}

void FortFuncs::int_slater_bessel(int n, int l, float z, float s) {
  __cfml_spherical_harmonics_MOD_int_slater_bessel(&n, &l, &z, &s);
}

void FortFuncs::real_spher_harm_ang(int l, int m, int p, float theta, float phi) {
  __cfml_spherical_harmonics_MOD_real_spher_harm_ang(&l, &m, &p, &theta, &phi);
}

void FortFuncs::real_spher_harm_ucvec(int l, int m, int p, const std::vector<float>* u) {
  __cfml_spherical_harmonics_MOD_real_spher_harm_ucvec(&l, &m, &p, &(*u)[0]);
}

void FortFuncs::real_spher_harmcharge_ucvec(int l, int m, int p, const std::vector<float>* u) {
  __cfml_spherical_harmonics_MOD_real_spher_harmcharge_ucvec(&l, &m, &p, &(*u)[0]);
}

void FortFuncs::init_err_spher(void) {
  __cfml_spherical_harmonics_MOD_init_err_spher();
}

void FortFuncs::pikout_lj_cubic(const char* group, FortranMatrix<int> *lj, int* ncoef, const int* lun) {
  int group_len__ = 0;
  if (group) group_len__ = strlen(group); // Protect Optional args
  __cfml_spherical_harmonics_MOD_pikout_lj_cubic(group, lj->data, ncoef, lun, group_len__);
}

void FortFuncs::get_generators(const char* spg, std::string *gener) {
  int gener_len__ = 0;
  if (gener) gener_len__ = gener->length();
  // Declare memory to store output character data
  char gener_c__[gener_len__+1];
  gener_c__[gener_len__] = '\0';
  int spg_len__ = 0;
  if (spg) spg_len__ = strlen(spg); // Protect Optional args
  __cfml_symmetry_tables_MOD_get_generators(spg, gener ? gener_c__ : NULL, spg_len__, gener_len__);
  if (gener) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=spg_len__-1; gener_c__[i]==' '; i--) gener_c__[i] = '\0';
    gener->assign(gener_c__);
  }
}

void FortFuncs::remove_spgr_info(void) {
  __cfml_symmetry_tables_MOD_remove_spgr_info();
}

void FortFuncs::remove_system_equiv(void) {
  __cfml_symmetry_tables_MOD_remove_system_equiv();
}

void FortFuncs::remove_wyckoff_info(void) {
  __cfml_symmetry_tables_MOD_remove_wyckoff_info();
}

void FortFuncs::set_spgr_info(void) {
  __cfml_symmetry_tables_MOD_set_spgr_info();
}

void FortFuncs::set_system_equiv(void) {
  __cfml_symmetry_tables_MOD_set_system_equiv();
}

void FortFuncs::set_wyckoff_info(void) {
  __cfml_symmetry_tables_MOD_set_wyckoff_info();
}

int FortFuncs::axes_rotation(const FortranMatrix<int> *r) {
  return __cfml_crystallographic_symmetry_MOD_axes_rotation(r->data);
}

int FortFuncs::get_laue_num(const char* laueclass) {
  int laueclass_len__ = 0;
  if (laueclass) laueclass_len__ = strlen(laueclass); // Protect Optional args
  return __cfml_crystallographic_symmetry_MOD_get_laue_num(laueclass, laueclass_len__);
}

int FortFuncs::get_multip_pos(const std::vector<float>* x, space_group_type* spg) {
  return __cfml_crystallographic_symmetry_MOD_get_multip_pos(&(*x)[0], spg->data_ptr);
}

float FortFuncs::get_occ_site(const std::vector<float>* pto, space_group_type* spg) {
  return __cfml_crystallographic_symmetry_MOD_get_occ_site(&(*pto)[0], spg->data_ptr);
}

int FortFuncs::get_pointgroup_num(const char* pgname) {
  int pgname_len__ = 0;
  if (pgname) pgname_len__ = strlen(pgname); // Protect Optional args
  return __cfml_crystallographic_symmetry_MOD_get_pointgroup_num(pgname, pgname_len__);
}

int FortFuncs::lattice_trans(const std::vector<float>* v, const char* lat) {
  int lat_len__ = 0;
  if (lat) lat_len__ = strlen(lat); // Protect Optional args
  return __cfml_crystallographic_symmetry_MOD_lattice_trans(&(*v)[0], lat, lat_len__);
}

int FortFuncs::spgr_equal(space_group_type* spacegroup1, space_group_type* spacegroup2) {
  return __cfml_crystallographic_symmetry_MOD_spgr_equal(spacegroup1->data_ptr, spacegroup2->data_ptr);
}

void FortFuncs::allocate_lattice_centring(lattice_centring_type* latt, int n, const int* tinv) {
  __cfml_crystallographic_symmetry_MOD_allocate_lattice_centring(latt->data_ptr, &n, tinv);
}

void FortFuncs::check_generator(const char* gen, int* ok, std::string *symbol) {
  int symbol_len__ = 0;
  if (symbol) symbol_len__ = symbol->length();
  // Declare memory to store output character data
  char symbol_c__[symbol_len__+1];
  symbol_c__[symbol_len__] = '\0';
  int gen_len__ = 0;
  if (gen) gen_len__ = strlen(gen); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_check_generator(gen, ok, symbol ? symbol_c__ : NULL, gen_len__, symbol_len__);
  if (symbol) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=gen_len__-1; symbol_c__[i]==' '; i--) symbol_c__[i] = '\0';
    symbol->assign(symbol_c__);
  }
}

void FortFuncs::decodmatmag(const FortranMatrix<int> *sim, std::string *xyzstring) {
  int xyzstring_len__ = 0;
  if (xyzstring) xyzstring_len__ = xyzstring->length();
  // Declare memory to store output character data
  char xyzstring_c__[xyzstring_len__+1];
  xyzstring_c__[xyzstring_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_decodmatmag(sim->data, xyzstring ? xyzstring_c__ : NULL, xyzstring_len__);
  if (xyzstring) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=xyzstring_len__-1; xyzstring_c__[i]==' '; i--) xyzstring_c__[i] = '\0';
    xyzstring->assign(xyzstring_c__);
  }
}

void FortFuncs::get_laue_str(int ilaue, std::string *str) {
  int str_len__ = 0;
  if (str) str_len__ = str->length();
  // Declare memory to store output character data
  char str_c__[str_len__+1];
  str_c__[str_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_laue_str(&ilaue, str ? str_c__ : NULL, str_len__);
  if (str) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=str_len__-1; str_c__[i]==' '; i--) str_c__[i] = '\0';
    str->assign(str_c__);
  }
}

void FortFuncs::get_pointgroup_str(int ipg, std::string *str) {
  int str_len__ = 0;
  if (str) str_len__ = str->length();
  // Declare memory to store output character data
  char str_c__[str_len__+1];
  str_c__[str_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_pointgroup_str(&ipg, str ? str_c__ : NULL, str_len__);
  if (str) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=str_len__-1; str_c__[i]==' '; i--) str_c__[i] = '\0';
    str->assign(str_c__);
  }
}

void FortFuncs::get_seitz_symbol(int iop, int itim, const std::vector<float>* tr, std::string *seitz_symb) {
  int seitz_symb_len__ = 0;
  if (seitz_symb) seitz_symb_len__ = seitz_symb->length();
  // Declare memory to store output character data
  char seitz_symb_c__[seitz_symb_len__+1];
  seitz_symb_c__[seitz_symb_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_seitz_symbol(&iop, &itim, &(*tr)[0], seitz_symb ? seitz_symb_c__ : NULL, seitz_symb_len__);
  if (seitz_symb) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=seitz_symb_len__-1; seitz_symb_c__[i]==' '; i--) seitz_symb_c__[i] = '\0';
    seitz_symb->assign(seitz_symb_c__);
  }
}

void FortFuncs::get_shubnikov_operator_symbol(const FortranMatrix<int> *mat, const FortranMatrix<int> *rot, const std::vector<float>* tr, std::string *shop_symb, const int* mcif, int* invt) {
  int shop_symb_len__ = 0;
  if (shop_symb) shop_symb_len__ = shop_symb->length();
  // Declare memory to store output character data
  char shop_symb_c__[shop_symb_len__+1];
  shop_symb_c__[shop_symb_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_shubnikov_operator_symbol(mat->data, rot->data, &(*tr)[0], shop_symb ? shop_symb_c__ : NULL, mcif, invt, shop_symb_len__);
  if (shop_symb) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=shop_symb_len__-1; shop_symb_c__[i]==' '; i--) shop_symb_c__[i] = '\0';
    shop_symb->assign(shop_symb_c__);
  }
}

void FortFuncs::get_string_resolv(const std::vector<float>* t, const std::vector<float>* x, const std::vector<int>* ix, std::string *symb) {
  int symb_len__ = 0;
  if (symb) symb_len__ = symb->length();
  // Declare memory to store output character data
  char symb_c__[symb_len__+1];
  symb_c__[symb_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_string_resolv(&(*t)[0], &(*x)[0], &(*ix)[0], symb ? symb_c__ : NULL, symb_len__);
  if (symb) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=symb_len__-1; symb_c__[i]==' '; i--) symb_c__[i] = '\0';
    symb->assign(symb_c__);
  }
}

void FortFuncs::get_symel(const FortranMatrix<int> *sim, std::string *xyzstring) {
  int xyzstring_len__ = 0;
  if (xyzstring) xyzstring_len__ = xyzstring->length();
  // Declare memory to store output character data
  char xyzstring_c__[xyzstring_len__+1];
  xyzstring_c__[xyzstring_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_symel(sim->data, xyzstring ? xyzstring_c__ : NULL, xyzstring_len__);
  if (xyzstring) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=xyzstring_len__-1; xyzstring_c__[i]==' '; i--) xyzstring_c__[i] = '\0';
    xyzstring->assign(xyzstring_c__);
  }
}

void FortFuncs::get_symkov(const FortranMatrix<int> *sim, std::string *xyzstring) {
  int xyzstring_len__ = 0;
  if (xyzstring) xyzstring_len__ = xyzstring->length();
  // Declare memory to store output character data
  char xyzstring_c__[xyzstring_len__+1];
  xyzstring_c__[xyzstring_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_symkov(sim->data, xyzstring ? xyzstring_c__ : NULL, xyzstring_len__);
  if (xyzstring) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=xyzstring_len__-1; xyzstring_c__[i]==' '; i--) xyzstring_c__[i] = '\0';
    xyzstring->assign(xyzstring_c__);
  }
}

void FortFuncs::get_trasfm_symbol(const FortranMatrix<int> *mat, const std::vector<float>* tr, std::string *abc_symb, const int* oposite) {
  int abc_symb_len__ = 0;
  if (abc_symb) abc_symb_len__ = abc_symb->length();
  // Declare memory to store output character data
  char abc_symb_c__[abc_symb_len__+1];
  abc_symb_c__[abc_symb_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_trasfm_symbol(mat->data, &(*tr)[0], abc_symb ? abc_symb_c__ : NULL, oposite, abc_symb_len__);
  if (abc_symb) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=abc_symb_len__-1; abc_symb_c__[i]==' '; i--) abc_symb_c__[i] = '\0';
    abc_symb->assign(abc_symb_c__);
  }
}

void FortFuncs::get_transl_symbol(const std::vector<float>* tr, std::string *transl_symb) {
  int transl_symb_len__ = 0;
  if (transl_symb) transl_symb_len__ = transl_symb->length();
  // Declare memory to store output character data
  char transl_symb_c__[transl_symb_len__+1];
  transl_symb_c__[transl_symb_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_get_transl_symbol(&(*tr)[0], transl_symb ? transl_symb_c__ : NULL, transl_symb_len__);
  if (transl_symb) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=transl_symb_len__-1; transl_symb_c__[i]==' '; i--) transl_symb_c__[i] = '\0';
    transl_symb->assign(transl_symb_c__);
  }
}

void FortFuncs::init_err_symm(void) {
  __cfml_crystallographic_symmetry_MOD_init_err_symm();
}

void FortFuncs::inverse_symm(const FortranMatrix<int> *r, const std::vector<float>* t, FortranMatrix<int> *s, std::vector<float>* u) {
  __cfml_crystallographic_symmetry_MOD_inverse_symm(r->data, &(*t)[0], s->data, &(*u)[0]);
}

void FortFuncs::latsym(const char* symb, const int* numl) {
  int symb_len__ = 0;
  if (symb) symb_len__ = strlen(symb); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_latsym(symb, numl, NULL, symb_len__);
}

void FortFuncs::read_bin_spacegroup(space_group_type* spg, int lun, int* ok) {
  __cfml_crystallographic_symmetry_MOD_read_bin_spacegroup(spg->data_ptr, &lun, ok);
}

void FortFuncs::read_msymm(const char* info, FortranMatrix<int> *sim, float* p_mag, const int* ctrl) {
  int info_len__ = 0;
  if (info) info_len__ = strlen(info); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_read_msymm(info, sim->data, p_mag, ctrl, info_len__);
}

void FortFuncs::read_symtrans_code(const char* code, int* n, std::vector<float>* tr) {
  int code_len__ = 0;
  if (code) code_len__ = strlen(code); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_read_symtrans_code(code, n, &(*tr)[0], code_len__);
}

void FortFuncs::read_xsym(const char* info, int istart, FortranMatrix<int> *sim, std::vector<float>* tt, const int* ctrl) {
  int info_len__ = 0;
  if (info) info_len__ = strlen(info); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_read_xsym(info, &istart, sim->data, tt ? &(*tt)[0] : NULL, ctrl, info_len__);
}

void FortFuncs::searchop(const FortranMatrix<int> *sim, int i1, int i2, int* isl) {
  __cfml_crystallographic_symmetry_MOD_searchop(sim->data, &i1, &i2, isl);
}

void FortFuncs::set_spacegroup(const char* spacegen, space_group_type* spacegroup, const int* ngen, const char* mode, const char* force_hall) {
  int spacegen_len__ = 0;
  if (spacegen) spacegen_len__ = strlen(spacegen); // Protect Optional args
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  int force_hall_len__ = 0;
  if (force_hall) force_hall_len__ = strlen(force_hall); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_set_spacegroup(spacegen, spacegroup->data_ptr, NULL, ngen, mode, force_hall, spacegen_len__, mode_len__, force_hall_len__);
}

void FortFuncs::similar_transf_sg(const FortranMatrix<float> *mat, const std::vector<float>* orig, space_group_type* spg, space_group_type* spgn, const char* matkind, const char* fix_lat) {
  int fix_lat_len__ = 0;
  if (fix_lat) fix_lat_len__ = strlen(fix_lat); // Protect Optional args
  int matkind_len__ = 0;
  if (matkind) matkind_len__ = strlen(matkind); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_similar_transf_sg(mat->data, &(*orig)[0], spg->data_ptr, spgn->data_ptr, matkind, fix_lat, matkind_len__, fix_lat_len__);
}

void FortFuncs::sym_prod_st(const char* syma, const char* symb, std::string *symab, const int* modlat) {
  int symb_len__ = 0;
  if (symb) symb_len__ = strlen(symb); // Protect Optional args
  int syma_len__ = 0;
  if (syma) syma_len__ = strlen(syma); // Protect Optional args
  // Declare memory to store output character data
  char symab_c__[None+1];
  symab_c__[None] = '\0';
  __cfml_crystallographic_symmetry_MOD_sym_prod_st(syma, symb, symab ? symab_c__ : NULL, modlat, syma_len__, symb_len__, None);
  if (symab) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=None-1; symab_c__[i]==' '; i--) symab_c__[i] = '\0';
    symab->assign(symab_c__);
  }
}

void FortFuncs::write_bin_spacegroup(space_group_type* spg, int lun) {
  __cfml_crystallographic_symmetry_MOD_write_bin_spacegroup(spg->data_ptr, &lun);
}

void FortFuncs::write_magnetic_space_group(magnetic_space_group_type* sg, const int* iunit, const int* full) {
  __cfml_crystallographic_symmetry_MOD_write_magnetic_space_group(sg->data_ptr, iunit, full);
}

void FortFuncs::write_spacegroup(space_group_type* spacegroup, const int* iunit, const int* full) {
  __cfml_crystallographic_symmetry_MOD_write_spacegroup(spacegroup->data_ptr, iunit, full);
}

void FortFuncs::write_sym(int lun, int indx, const FortranMatrix<int> *sim, const std::vector<float>* tt, float p_mag, int mag) {
  __cfml_crystallographic_symmetry_MOD_write_sym(&lun, &indx, sim->data, &(*tt)[0], &p_mag, &mag);
}

void FortFuncs::write_symtrans_code(int n, const std::vector<float>* tr, std::string *code) {
  int code_len__ = 0;
  if (code) code_len__ = code->length();
  // Declare memory to store output character data
  char code_c__[code_len__+1];
  code_c__[code_len__] = '\0';
  __cfml_crystallographic_symmetry_MOD_write_symtrans_code(&n, &(*tr)[0], code ? code_c__ : NULL, code_len__);
  if (code) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=code_len__-1; code_c__[i]==' '; i--) code_c__[i] = '\0';
    code->assign(code_c__);
  }
}

void FortFuncs::write_wyckoff(wyckoff_type* wyckoff, const char* spg, const int* lun, const int* sorting) {
  int spg_len__ = 0;
  if (spg) spg_len__ = strlen(spg); // Protect Optional args
  __cfml_crystallographic_symmetry_MOD_write_wyckoff(wyckoff->data_ptr, spg, lun, sorting, spg_len__);
}

void FortFuncs::copy_ns_spg_to_spg(ns_space_group_type* spgn, space_group_type* spg) {
  __cfml_crystallographic_symmetry_MOD_copy_ns_spg_to_spg(spgn->data_ptr, spg->data_ptr);
}

void FortFuncs::alloc_mhlist_array(magh_list_type* list) {
  __cfml_python_MOD_alloc_mhlist_array(list->data_ptr);
}

void FortFuncs::alloc_refllist_array(reflection_list_type* list) {
  __cfml_python_MOD_alloc_refllist_array(list->data_ptr);
}

void FortFuncs::reflct_array_ctor(reflct_array_list* array) {
  __cfml_python_MOD_reflct_array_ctor(array->data_ptr);
}

void FortFuncs::reflct_append(reflct_array_list* array, reflect_type* rflctn) {
  __cfml_python_MOD_reflct_append(array->data_ptr, rflctn->data_ptr);
}

void FortFuncs::readxtal_structure_file(const char* filenam, crystal_cell_type* cell, space_group_type* spg, atom_list_type* a, const char* mode, const int* iphase, job_info_type* job_info, file_list_type* file_list, const char* cframe) {
  int cframe_len__ = 0;
  if (cframe) cframe_len__ = strlen(cframe); // Protect Optional args
  int filenam_len__ = 0;
  if (filenam) filenam_len__ = strlen(filenam); // Protect Optional args
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  __cfml_python_MOD_readxtal_structure_file(filenam, cell->data_ptr, spg->data_ptr, a->data_ptr, mode, iphase, job_info ? job_info->data_ptr : NULL, file_list ? file_list->data_ptr : NULL, cframe, filenam_len__, mode_len__, cframe_len__);
}

float FortFuncs::hkls_r(const std::vector<float>* h, crystal_cell_type* crystalcell) {
  return __cfml_python_MOD_hkls_r(&(*h)[0], crystalcell->data_ptr);
}

void FortFuncs::hklgen_sxtal_reflection(crystal_cell_type* crystalcell, space_group_type* spacegroup, float stlmin, float stlmax, int* num_ref, reflct_array_list* reflex, const std::vector<int>* ord, const FortranMatrix<int> *hlim) {
  __cfml_python_MOD_hklgen_sxtal_reflection(crystalcell->data_ptr, spacegroup->data_ptr, &stlmin, &stlmax, num_ref, reflex->data_ptr, ord ? &(*ord)[0] : NULL, hlim ? hlim->data : NULL);
}

void FortFuncs::hklgen_sxtal_list(crystal_cell_type* crystalcell, space_group_type* spacegroup, float stlmin, float stlmax, int* num_ref, reflection_list_type* reflex, const std::vector<int>* ord, const FortranMatrix<int> *hlim) {
  __cfml_python_MOD_hklgen_sxtal_list(crystalcell->data_ptr, spacegroup->data_ptr, &stlmin, &stlmax, num_ref, reflex->data_ptr, ord ? &(*ord)[0] : NULL, hlim ? hlim->data : NULL);
}

void FortFuncs::hkluni_reflection(crystal_cell_type* crystalcell, space_group_type* spacegroup, int friedel, float value1, float value2, const char* code, int* num_ref, reflct_array_list* reflex, const int* no_order) {
  // Create C array for Fortran input string data
  char code_c__[1+1];
  if (code) {
    int i;
    strncpy(code_c__, code, 1+1); code_c__[1+1] = 0; // strncpy protects in case code is too long
    for (i=strlen(code_c__); i<1+1; i++) code_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_hkluni_reflection(crystalcell->data_ptr, spacegroup->data_ptr, &friedel, &value1, &value2, code ? code_c__ : NULL, num_ref, reflex->data_ptr, no_order, 1);
}

void FortFuncs::hkluni_refllist(crystal_cell_type* crystalcell, space_group_type* spacegroup, int friedel, float value1, float value2, const char* code, int num_ref, reflection_list_type* reflex, const int* no_order) {
  // Create C array for Fortran input string data
  char code_c__[1+1];
  if (code) {
    int i;
    strncpy(code_c__, code, 1+1); code_c__[1+1] = 0; // strncpy protects in case code is too long
    for (i=strlen(code_c__); i<1+1; i++) code_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_hkluni_refllist(crystalcell->data_ptr, spacegroup->data_ptr, &friedel, &value1, &value2, code ? code_c__ : NULL, &num_ref, reflex->data_ptr, no_order, 1);
}

void FortFuncs::read_mag_cfl_file(file_list_type* file_cfl, int* n_ini, int* n_end, magsymm_k_type* mgp, matom_list_type* am, magnetic_group_type* sgo, magnetic_domain_type* mag_dom, crystal_cell_type* cell) {
  __cfml_python_MOD_read_mag_cfl_file(file_cfl->data_ptr, n_ini, n_end, mgp->data_ptr, am->data_ptr, sgo ? sgo->data_ptr : NULL, mag_dom ? mag_dom->data_ptr : NULL, cell ? cell->data_ptr : NULL);
}

void FortFuncs::read_mag_mcif_file(const char* file_mcif, crystal_cell_type* mcell, magnetic_space_group_type* mgp, matom_list_type* am) {
  int file_mcif_len__ = 0;
  if (file_mcif) file_mcif_len__ = strlen(file_mcif); // Protect Optional args
  __cfml_python_MOD_read_mag_mcif_file(file_mcif, mcell->data_ptr, mgp->data_ptr, am->data_ptr, file_mcif_len__);
}

float FortFuncs::calcgaussian(float x, float h) {
  return __cfml_python_MOD_calcgaussian(&x, &h);
}

float FortFuncs::calchat(float x, float h) {
  return __cfml_python_MOD_calchat(&x, &h);
}

float FortFuncs::calclorentzian(float x, float h) {
  return __cfml_python_MOD_calclorentzian(&x, &h);
}

float FortFuncs::calcpseudovoigt(float x, float h, float eta) {
  return __cfml_python_MOD_calcpseudovoigt(&x, &h, &eta);
}

void FortFuncs::gausspeak(const std::vector<float>* x, float h, std::vector<float>* output) {
  __cfml_python_MOD_gausspeak(&(*x)[0], &h, &(*output)[0]);
}

void FortFuncs::read_ill_data(const char* filename, diffraction_pattern_type* dif_pat, const char* mode) {
  int mode_len__ = 0;
  if (mode) mode_len__ = strlen(mode); // Protect Optional args
  int filename_len__ = 0;
  if (filename) filename_len__ = strlen(filename); // Protect Optional args
  __cfml_python_MOD_read_ill_data(filename, dif_pat->data_ptr, mode, filename_len__, mode_len__);
}

void FortFuncs::printbasis(matom_type* matm) {
  __cfml_python_MOD_printbasis(matm->data_ptr);
}

void FortFuncs::atom_type_ctor(atom_type* atom_type_param, int locc_param, const std::vector<int>* lvarf_param, const char* utype_param, float mbiso_param, float occ_param, float charge_param, const char* sfacsymb_param, const char* lab_param, const std::vector<float>* mvarf_param, float moment_param, const std::vector<int>* lu_param, float mocc_param, int active_param, int mult_param, const std::vector<float>* x_std_param, const std::vector<float>* u_std_param, int nvar_param, const char* wyck_param, float biso_std_param, int lbiso_param, float biso_param, const std::vector<float>* varf_param, const std::vector<float>* u_param, float occ_std_param, const std::vector<float>* x_param, int z_param, const std::vector<float>* mu_param, const std::vector<int>* lx_param, const char* chemsymb_param, const std::vector<int>* ind_param, const char* thtype_param, const char* atminfo_param, float ueq_param, const std::vector<float>* mx_param) {
  // Create C array for Fortran input string data
  char atminfo_param_c__[40+1];
  if (atminfo_param) {
    int i;
    strncpy(atminfo_param_c__, atminfo_param, 40+1); atminfo_param_c__[40+1] = 0; // strncpy protects in case atminfo_param is too long
    for (i=strlen(atminfo_param_c__); i<40+1; i++) atminfo_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char lab_param_c__[20+1];
  if (lab_param) {
    int i;
    strncpy(lab_param_c__, lab_param, 20+1); lab_param_c__[20+1] = 0; // strncpy protects in case lab_param is too long
    for (i=strlen(lab_param_c__); i<20+1; i++) lab_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char sfacsymb_param_c__[4+1];
  if (sfacsymb_param) {
    int i;
    strncpy(sfacsymb_param_c__, sfacsymb_param, 4+1); sfacsymb_param_c__[4+1] = 0; // strncpy protects in case sfacsymb_param is too long
    for (i=strlen(sfacsymb_param_c__); i<4+1; i++) sfacsymb_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char utype_param_c__[4+1];
  if (utype_param) {
    int i;
    strncpy(utype_param_c__, utype_param, 4+1); utype_param_c__[4+1] = 0; // strncpy protects in case utype_param is too long
    for (i=strlen(utype_param_c__); i<4+1; i++) utype_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char wyck_param_c__[1+1];
  if (wyck_param) {
    int i;
    strncpy(wyck_param_c__, wyck_param, 1+1); wyck_param_c__[1+1] = 0; // strncpy protects in case wyck_param is too long
    for (i=strlen(wyck_param_c__); i<1+1; i++) wyck_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char chemsymb_param_c__[2+1];
  if (chemsymb_param) {
    int i;
    strncpy(chemsymb_param_c__, chemsymb_param, 2+1); chemsymb_param_c__[2+1] = 0; // strncpy protects in case chemsymb_param is too long
    for (i=strlen(chemsymb_param_c__); i<2+1; i++) chemsymb_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char thtype_param_c__[5+1];
  if (thtype_param) {
    int i;
    strncpy(thtype_param_c__, thtype_param, 5+1); thtype_param_c__[5+1] = 0; // strncpy protects in case thtype_param is too long
    for (i=strlen(thtype_param_c__); i<5+1; i++) thtype_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_atom_type_ctor(atom_type_param->data_ptr, &locc_param, &(*lvarf_param)[0], utype_param ? utype_param_c__ : NULL, &mbiso_param, &occ_param, &charge_param, sfacsymb_param ? sfacsymb_param_c__ : NULL, lab_param ? lab_param_c__ : NULL, &(*mvarf_param)[0], &moment_param, &(*lu_param)[0], &mocc_param, &active_param, &mult_param, &(*x_std_param)[0], &(*u_std_param)[0], &nvar_param, wyck_param ? wyck_param_c__ : NULL, &biso_std_param, &lbiso_param, &biso_param, &(*varf_param)[0], &(*u_param)[0], &occ_std_param, &(*x_param)[0], &z_param, &(*mu_param)[0], &(*lx_param)[0], chemsymb_param ? chemsymb_param_c__ : NULL, &(*ind_param)[0], thtype_param ? thtype_param_c__ : NULL, atminfo_param ? atminfo_param_c__ : NULL, &ueq_param, &(*mx_param)[0], 4, 4, 20, 1, 2, 5, 40);
}

void FortFuncs::matom_type_ctor(matom_type* matom_type_param, const std::vector<float>* mmphas_param, int locc_param, const FortranMatrix<float> *ski_std_param, const std::vector<int>* lvarf_param, const char* utype_param, float mbiso_param, float occ_param, const FortranMatrix<int> *lbas_param, float charge_param, const char* sfacsymb_param, const std::vector<int>* imat_param, const std::vector<int>* lmphas_param, const std::vector<float>* mphas_param, const FortranMatrix<float> *spher_ski_param, const FortranMatrix<float> *skr_param, const FortranMatrix<int> *lskr_param, const char* lab_param, float moment_param, const std::vector<int>* lu_param, float mocc_param, int active_param, const FortranMatrix<float> *ski_param, int mult_param, const FortranMatrix<float> *spher_skr_std_param, const std::vector<float>* x_std_param, const std::vector<float>* u_std_param, const FortranMatrix<int> *lski_param, int nvar_param, const char* wyck_param, float biso_std_param, int lbiso_param, const std::vector<float>* mphas_std_param, const std::vector<float>* mvarf_param, float biso_param, const std::vector<float>* varf_param, const std::vector<float>* u_param, float occ_std_param, const std::vector<float>* x_param, int z_param, int nvk_param, const FortranMatrix<float> *mbas_param, const FortranMatrix<float> *spher_ski_std_param, const FortranMatrix<float> *spher_skr_param, const FortranMatrix<float> *mski_param, const FortranMatrix<float> *skr_std_param, const std::vector<float>* mu_param, const FortranMatrix<float> *mskr_param, const std::vector<int>* lx_param, const char* chemsymb_param, const FortranMatrix<float> *cbas_param, const std::vector<int>* ind_param, const FortranMatrix<float> *cbas_std_param, const char* thtype_param, const char* atminfo_param, float ueq_param, const std::vector<float>* mx_param) {
  // Create C array for Fortran input string data
  char atminfo_param_c__[40+1];
  if (atminfo_param) {
    int i;
    strncpy(atminfo_param_c__, atminfo_param, 40+1); atminfo_param_c__[40+1] = 0; // strncpy protects in case atminfo_param is too long
    for (i=strlen(atminfo_param_c__); i<40+1; i++) atminfo_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char lab_param_c__[10+1];
  if (lab_param) {
    int i;
    strncpy(lab_param_c__, lab_param, 10+1); lab_param_c__[10+1] = 0; // strncpy protects in case lab_param is too long
    for (i=strlen(lab_param_c__); i<10+1; i++) lab_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char sfacsymb_param_c__[4+1];
  if (sfacsymb_param) {
    int i;
    strncpy(sfacsymb_param_c__, sfacsymb_param, 4+1); sfacsymb_param_c__[4+1] = 0; // strncpy protects in case sfacsymb_param is too long
    for (i=strlen(sfacsymb_param_c__); i<4+1; i++) sfacsymb_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char utype_param_c__[4+1];
  if (utype_param) {
    int i;
    strncpy(utype_param_c__, utype_param, 4+1); utype_param_c__[4+1] = 0; // strncpy protects in case utype_param is too long
    for (i=strlen(utype_param_c__); i<4+1; i++) utype_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char wyck_param_c__[1+1];
  if (wyck_param) {
    int i;
    strncpy(wyck_param_c__, wyck_param, 1+1); wyck_param_c__[1+1] = 0; // strncpy protects in case wyck_param is too long
    for (i=strlen(wyck_param_c__); i<1+1; i++) wyck_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char thtype_param_c__[5+1];
  if (thtype_param) {
    int i;
    strncpy(thtype_param_c__, thtype_param, 5+1); thtype_param_c__[5+1] = 0; // strncpy protects in case thtype_param is too long
    for (i=strlen(thtype_param_c__); i<5+1; i++) thtype_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  // Create C array for Fortran input string data
  char chemsymb_param_c__[2+1];
  if (chemsymb_param) {
    int i;
    strncpy(chemsymb_param_c__, chemsymb_param, 2+1); chemsymb_param_c__[2+1] = 0; // strncpy protects in case chemsymb_param is too long
    for (i=strlen(chemsymb_param_c__); i<2+1; i++) chemsymb_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_matom_type_ctor(matom_type_param->data_ptr, &(*mmphas_param)[0], &locc_param, ski_std_param->data, &(*lvarf_param)[0], utype_param ? utype_param_c__ : NULL, &mbiso_param, &occ_param, lbas_param->data, &charge_param, sfacsymb_param ? sfacsymb_param_c__ : NULL, &(*imat_param)[0], &(*lmphas_param)[0], &(*mphas_param)[0], spher_ski_param->data, skr_param->data, lskr_param->data, lab_param ? lab_param_c__ : NULL, &moment_param, &(*lu_param)[0], &mocc_param, &active_param, ski_param->data, &mult_param, spher_skr_std_param->data, &(*x_std_param)[0], &(*u_std_param)[0], lski_param->data, &nvar_param, wyck_param ? wyck_param_c__ : NULL, &biso_std_param, &lbiso_param, &(*mphas_std_param)[0], &(*mvarf_param)[0], &biso_param, &(*varf_param)[0], &(*u_param)[0], &occ_std_param, &(*x_param)[0], &z_param, &nvk_param, mbas_param->data, spher_ski_std_param->data, spher_skr_param->data, mski_param->data, skr_std_param->data, &(*mu_param)[0], mskr_param->data, &(*lx_param)[0], chemsymb_param ? chemsymb_param_c__ : NULL, cbas_param->data, &(*ind_param)[0], cbas_std_param->data, thtype_param ? thtype_param_c__ : NULL, atminfo_param ? atminfo_param_c__ : NULL, &ueq_param, &(*mx_param)[0], 4, 4, 10, 1, 2, 5, 40);
}

void FortFuncs::crystal_cell_type_ctor(crystal_cell_type* crystal_cell_type_param, const std::vector<int>* lang_param, float rcellvol_param, const std::vector<float>* cell_std_param, const std::vector<float>* ang_param, const FortranMatrix<float> *bl_minv_param, const FortranMatrix<float> *gr_param, const FortranMatrix<float> *cr_orth_cel_param, const FortranMatrix<float> *bl_m_param, const FortranMatrix<float> *orth_cr_cel_param, const char* carttype_param, const std::vector<float>* rang_param, const std::vector<float>* rcell_param, const std::vector<float>* cell_param, const FortranMatrix<float> *gd_param, float cellvol_param, const std::vector<float>* ang_std_param, const std::vector<int>* lcell_param) {
  // Create C array for Fortran input string data
  char carttype_param_c__[1+1];
  if (carttype_param) {
    int i;
    strncpy(carttype_param_c__, carttype_param, 1+1); carttype_param_c__[1+1] = 0; // strncpy protects in case carttype_param is too long
    for (i=strlen(carttype_param_c__); i<1+1; i++) carttype_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_crystal_cell_type_ctor(crystal_cell_type_param->data_ptr, &(*lang_param)[0], &rcellvol_param, &(*cell_std_param)[0], &(*ang_param)[0], bl_minv_param->data, gr_param->data, cr_orth_cel_param->data, bl_m_param->data, orth_cr_cel_param->data, carttype_param ? carttype_param_c__ : NULL, &(*rang_param)[0], &(*rcell_param)[0], &(*cell_param)[0], gd_param->data, &cellvol_param, &(*ang_std_param)[0], &(*lcell_param)[0], 1);
}

void FortFuncs::get_twofold_axes_a(twofold_axes_type* obj_var, std::vector<float>* output_value) {
  __cfml_python_MOD_get_twofold_axes_a(obj_var->data_ptr, &(*output_value)[0]);
}

void FortFuncs::set_twofold_axes_a(twofold_axes_type* obj_var, const std::vector<float>* new_value) {
  __cfml_python_MOD_set_twofold_axes_a(obj_var->data_ptr, &(*new_value)[0]);
}

void FortFuncs::get_twofold_axes_c(twofold_axes_type* obj_var, std::vector<float>* output_value) {
  __cfml_python_MOD_get_twofold_axes_c(obj_var->data_ptr, &(*output_value)[0]);
}

void FortFuncs::set_twofold_axes_c(twofold_axes_type* obj_var, const std::vector<float>* new_value) {
  __cfml_python_MOD_set_twofold_axes_c(obj_var->data_ptr, &(*new_value)[0]);
}

void FortFuncs::get_twofold_axes_b(twofold_axes_type* obj_var, std::vector<float>* output_value) {
  __cfml_python_MOD_get_twofold_axes_b(obj_var->data_ptr, &(*output_value)[0]);
}

void FortFuncs::set_twofold_axes_b(twofold_axes_type* obj_var, const std::vector<float>* new_value) {
  __cfml_python_MOD_set_twofold_axes_b(obj_var->data_ptr, &(*new_value)[0]);
}

void FortFuncs::get_twofold_axes_maxes(twofold_axes_type* obj_var, std::vector<float>* output_value) {
  __cfml_python_MOD_get_twofold_axes_maxes(obj_var->data_ptr, &(*output_value)[0]);
}

void FortFuncs::set_twofold_axes_maxes(twofold_axes_type* obj_var, const std::vector<float>* new_value) {
  __cfml_python_MOD_set_twofold_axes_maxes(obj_var->data_ptr, &(*new_value)[0]);
}

int FortFuncs::get_twofold_axes_ntwo(twofold_axes_type* obj_var) {
  return __cfml_python_MOD_get_twofold_axes_ntwo(obj_var->data_ptr);
}

void FortFuncs::set_twofold_axes_ntwo(twofold_axes_type* obj_var, int new_value) {
  __cfml_python_MOD_set_twofold_axes_ntwo(obj_var->data_ptr, &new_value);
}

void FortFuncs::get_twofold_axes_cross(twofold_axes_type* obj_var, std::vector<float>* output_value) {
  __cfml_python_MOD_get_twofold_axes_cross(obj_var->data_ptr, &(*output_value)[0]);
}

void FortFuncs::set_twofold_axes_cross(twofold_axes_type* obj_var, const std::vector<float>* new_value) {
  __cfml_python_MOD_set_twofold_axes_cross(obj_var->data_ptr, &(*new_value)[0]);
}

float FortFuncs::get_twofold_axes_tol(twofold_axes_type* obj_var) {
  return __cfml_python_MOD_get_twofold_axes_tol(obj_var->data_ptr);
}

void FortFuncs::set_twofold_axes_tol(twofold_axes_type* obj_var, float new_value) {
  __cfml_python_MOD_set_twofold_axes_tol(obj_var->data_ptr, &new_value);
}

void FortFuncs::get_twofold_axes_rtwofold(twofold_axes_type* obj_var, FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_twofold_axes_rtwofold(obj_var->data_ptr, output_value->data);
}

void FortFuncs::set_twofold_axes_rtwofold(twofold_axes_type* obj_var, const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_twofold_axes_rtwofold(obj_var->data_ptr, new_value->data);
}

void FortFuncs::get_twofold_axes_caxes(twofold_axes_type* obj_var, FortranMatrix<float> *output_value) {
  __cfml_python_MOD_get_twofold_axes_caxes(obj_var->data_ptr, output_value->data);
}

void FortFuncs::set_twofold_axes_caxes(twofold_axes_type* obj_var, const FortranMatrix<float> *new_value) {
  __cfml_python_MOD_set_twofold_axes_caxes(obj_var->data_ptr, new_value->data);
}

void FortFuncs::get_twofold_axes_dot(twofold_axes_type* obj_var, std::vector<int>* output_value) {
  __cfml_python_MOD_get_twofold_axes_dot(obj_var->data_ptr, &(*output_value)[0]);
}

void FortFuncs::set_twofold_axes_dot(twofold_axes_type* obj_var, const std::vector<int>* new_value) {
  __cfml_python_MOD_set_twofold_axes_dot(obj_var->data_ptr, &(*new_value)[0]);
}

void FortFuncs::get_twofold_axes_dtwofold(twofold_axes_type* obj_var, FortranMatrix<int> *output_value) {
  __cfml_python_MOD_get_twofold_axes_dtwofold(obj_var->data_ptr, output_value->data);
}

void FortFuncs::set_twofold_axes_dtwofold(twofold_axes_type* obj_var, const FortranMatrix<int> *new_value) {
  __cfml_python_MOD_set_twofold_axes_dtwofold(obj_var->data_ptr, new_value->data);
}

void FortFuncs::twofold_axes_type_ctor(twofold_axes_type* twofold_axes_type_param, const std::vector<float>* a_param, const std::vector<float>* c_param, const std::vector<float>* b_param, const std::vector<float>* maxes_param, int ntwo_param, const std::vector<float>* cross_param, float tol_param, const FortranMatrix<int> *rtwofold_param, const FortranMatrix<float> *caxes_param, const std::vector<int>* dot_param, const FortranMatrix<int> *dtwofold_param) {
  __cfml_python_MOD_twofold_axes_type_ctor(twofold_axes_type_param->data_ptr, &(*a_param)[0], &(*c_param)[0], &(*b_param)[0], &(*maxes_param)[0], &ntwo_param, &(*cross_param)[0], &tol_param, rtwofold_param->data, caxes_param->data, &(*dot_param)[0], dtwofold_param->data);
}

void FortFuncs::zone_axis_type_ctor(zone_axis_type* zone_axis_type_param, int nlayer_param, const std::vector<int>* rx_param, const std::vector<int>* ry_param, const std::vector<int>* uvw_param) {
  __cfml_python_MOD_zone_axis_type_ctor(zone_axis_type_param->data_ptr, &nlayer_param, &(*rx_param)[0], &(*ry_param)[0], &(*uvw_param)[0]);
}

void FortFuncs::interval_type_ctor(interval_type* interval_type_param, float maxb_param, float mina_param) {
  __cfml_python_MOD_interval_type_ctor(interval_type_param->data_ptr, &maxb_param, &mina_param);
}

void FortFuncs::msym_oper_type_ctor(msym_oper_type* msym_oper_type_param, float phas_param, const FortranMatrix<int> *rot_param) {
  __cfml_python_MOD_msym_oper_type_ctor(msym_oper_type_param->data_ptr, &phas_param, rot_param->data);
}

void FortFuncs::magnetic_group_type_ctor(magnetic_group_type* magnetic_group_type_param, const std::vector<int>* tinv_param, const char* shubnikov_param, space_group_type* spg_param) {
  // Create C array for Fortran input string data
  char shubnikov_param_c__[30+1];
  if (shubnikov_param) {
    int i;
    strncpy(shubnikov_param_c__, shubnikov_param, 30+1); shubnikov_param_c__[30+1] = 0; // strncpy protects in case shubnikov_param is too long
    for (i=strlen(shubnikov_param_c__); i<30+1; i++) shubnikov_param_c__[i] = ' '; // Add whitespace for Fortran
  }
  __cfml_python_MOD_magnetic_group_type_ctor(magnetic_group_type_param->data_ptr, &(*tinv_param)[0], shubnikov_param ? shubnikov_param_c__ : NULL, spg_param->data_ptr, 30);
}

void FortFuncs::reflect_type_ctor(reflect_type* reflect_type_param, const std::vector<int>* h_param, float s_param, int mult_param) {
  __cfml_python_MOD_reflect_type_ctor(reflect_type_param->data_ptr, &(*h_param)[0], &s_param, &mult_param);
}

void FortFuncs::reflection_type_ctor(reflection_type* reflection_type_param, float a_param, float aa_param, float b_param, float bb_param, const std::vector<int>* h_param, float sfo_param, float s_param, float fc_param, float w_param, float phase_param, int mult_param, float fo_param) {
  __cfml_python_MOD_reflection_type_ctor(reflection_type_param->data_ptr, &a_param, &aa_param, &b_param, &bb_param, &(*h_param)[0], &sfo_param, &s_param, &fc_param, &w_param, &phase_param, &mult_param, &fo_param);
}

void FortFuncs::ns_sym_oper_type_ctor(ns_sym_oper_type* ns_sym_oper_type_param, const std::vector<float>* tr_param, const FortranMatrix<float> *rot_param) {
  __cfml_python_MOD_ns_sym_oper_type_ctor(ns_sym_oper_type_param->data_ptr, &(*tr_param)[0], rot_param->data);
}

void FortFuncs::sym_oper_type_ctor(sym_oper_type* sym_oper_type_param, const std::vector<float>* tr_param, const FortranMatrix<int> *rot_param) {
  __cfml_python_MOD_sym_oper_type_ctor(sym_oper_type_param->data_ptr, &(*tr_param)[0], rot_param->data);
}

void FortFuncs::get_command(std::string *command, int* length, int* status) {
  int command_len__ = 0;
  if (command) command_len__ = command->length();
  // Declare memory to store output character data
  char command_c__[command_len__+1];
  command_c__[command_len__] = '\0';
  __f2kcli_MOD_get_command(command ? command_c__ : NULL, length, status, command_len__);
  if (command) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=command_len__-1; command_c__[i]==' '; i--) command_c__[i] = '\0';
    command->assign(command_c__);
  }
}

void FortFuncs::get_command_argument(int number, std::string *value, int* length, int* status) {
  int value_len__ = 0;
  if (value) value_len__ = value->length();
  // Declare memory to store output character data
  char value_c__[value_len__+1];
  value_c__[value_len__] = '\0';
  __f2kcli_MOD_get_command_argument(&number, value ? value_c__ : NULL, length, status, value_len__);
  if (value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=value_len__-1; value_c__[i]==' '; i--) value_c__[i] = '\0';
    value->assign(value_c__);
  }
}

void FortFuncs::get_environment_variable(const char* name, std::string *value, int* length, int* status, const int* trim_name) {
  int name_len__ = 0;
  if (name) name_len__ = strlen(name); // Protect Optional args
  int value_len__ = 0;
  if (value) value_len__ = value->length();
  // Declare memory to store output character data
  char value_c__[value_len__+1];
  value_c__[value_len__] = '\0';
  __f2kcli_MOD_get_environment_variable(name, value ? value_c__ : NULL, length, status, trim_name, name_len__, value_len__);
  if (value) {
    // Trim trailing whitespace and assign character array to string:
    for (int i=value_len__-1; value_c__[i]==' '; i--) value_c__[i] = '\0';
    value->assign(value_c__);
  }
}

