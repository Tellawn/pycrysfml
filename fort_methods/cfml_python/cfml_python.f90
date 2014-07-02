Module cfml_python
USE CFML_IO_Formats
USE CFML_Reflections_Utilities
USE CFML_Magnetic_Symmetry
Use CFML_GlobalDeps
Use CFML_Crystal_Metrics
Use CFML_Crystallographic_Symmetry
Use CFML_Atom_TypeDef
Use CFML_Magnetic_Structure_Factors
!! reflection_type array wrapper !!
TYPE reflct_array_list
INTEGER :: current_index
type (Reflect_Type), dimension(100) :: reflections
END TYPE reflct_array_list
CONTAINS
!!-- Wrappers for procedures called from ctypes hklGen.py --!!

!-- list methods for reflection array wrapper
SUBROUTINE reflct_array_ctor(array)
type (reflct_array_list) :: array
array%current_index = 1
END SUBROUTINE reflct_array_ctor
SUBROUTINE reflct_append(array, rflctn)
type (reflct_array_list) :: array
type (Reflect_Type) :: rflctn
array%reflections(array%current_index) = rflctn
array%current_index = array%current_index+1
END SUBROUTINE reflct_append
! wrapper for procedure in CFML_IO_Formats
SUBROUTINE ReadXtal_Structure_File(filenam, Cell, SpG, A, Mode, Iphase, Job_Info, file_list, CFrame)
!---- Arguments ----!
character(len=*), intent(in) :: filenam
Type (Crystal_Cell_Type), intent(out) :: Cell
Type (Space_Group_Type), intent(out) :: SpG
Type (atom_list_type), intent(out) :: A
Character(len=*), optional, intent(in) :: Mode
Integer, optional, intent(in) :: Iphase
Type(Job_Info_type), optional, intent(out) :: Job_Info
Type(file_list_type), optional, intent(in out) :: file_list
Character(len=*), optional, intent(in) :: CFrame
call Readn_Set_Xtal_Structure(filenam, Cell, SpG, A, Mode, Iphase, Job_Info, file_list, CFrame)
END SUBROUTINE ReadXtal_Structure_File

! wrapper for Hkl_S --> HS_R procedure from CFML_Reflect_Util
FUNCTION HklS_R(H, Crystalcell)
real(kind=cp), dimension(3), intent(in) :: h
type (Crystal_Cell_Type), intent(in) :: CrystalCell
real(kind=cp) :: HklS_R
HklS_R = Hkl_S(H, Crystalcell)
END FUNCTION HklS_R

! wrappers for HKL_GEN_SXTAL from CFML_Reflect_Util
! _reflection
SUBROUTINE hklgen_sxtal_reflection(Crystalcell, Spacegroup, stlmin, stlmax, Num_Ref, Reflex, ord, hlim)
type (Crystal_Cell_Type), intent(in) :: crystalcell
type (Space_Group_Type), intent(in) :: spacegroup
real(kind=cp), intent(in) :: stlmin,stlmax
integer, intent(out) :: num_ref
type (reflct_array_list), intent(out) :: reflex
Integer, dimension(3), optional, intent(in) :: ord
Integer, dimension(3,2), optional, intent(in) :: hlim
call HKL_GEN_SXTAL(Crystalcell, Spacegroup, stlmin, stlmax, Num_Ref, Reflex%reflections, ord, hlim)
END SUBROUTINE hklgen_sxtal_reflection

! _list
SUBROUTINE hklgen_sxtal_list(Crystalcell, Spacegroup, stlmin, stlmax, Num_Ref, Reflex, ord, hlim)
type (Crystal_Cell_Type), intent(in) :: crystalcell
type (Space_Group_Type), intent(in) :: spacegroup
real(kind=cp), intent(in) :: stlmin,stlmax
integer, intent(out) :: num_ref
Type(Reflection_List_Type), intent(out) :: reflex
Integer, dimension(3), optional, intent(in) :: ord
Integer, dimension(3,2), optional, intent(in) :: hlim
call HKL_GEN_SXTAL(Crystalcell, Spacegroup, stlmin, stlmax, Num_Ref, Reflex, ord, hlim)
END SUBROUTINE hklgen_sxtal_list

! wrappers for Hkl_Uni from CFML_Reflect_Util
! _reflection
SUBROUTINE hkluni_reflection(Crystalcell, Spacegroup, Friedel, Value1, Value2, Code, Num_Ref, Reflex, no_order)
!---- Arguments ----!
type (Crystal_Cell_Type), intent(in) :: crystalcell
type (Space_Group_Type), intent(in) :: spacegroup
Logical, intent(in) :: Friedel
real(kind=cp), intent(in) :: value1,value2
character(len=1), intent(in) :: code
integer, intent(out) :: num_ref
type (reflct_array_list), intent(out) :: reflex
logical, optional, intent(in) :: no_order
call Hkl_Uni(Crystalcell, Spacegroup, Friedel, Value1, Value2, Code, Num_Ref, Reflex%reflections, no_order)
END SUBROUTINE hkluni_reflection

! _ReflList
SUBROUTINE hkluni_refllist(Crystalcell, Spacegroup, Friedel, Value1, Value2, Code, Num_Ref, Reflex, no_order)
!---- Arguments ----!
type (Crystal_Cell_Type), intent(in) :: crystalcell
type (Space_Group_Type), intent(in) :: spacegroup
Logical, intent(in) :: Friedel
real(kind=cp), intent(in) :: value1,value2
character(len=1), intent(in) :: code
integer, intent(in) :: Num_Ref
type (Reflection_List_Type), intent(out) :: reflex
logical, optional, intent(in) :: no_order
call Hkl_Uni(Crystalcell, Spacegroup, Friedel, Value1, Value2, Code, Num_Ref, Reflex, no_order)
END SUBROUTINE hkluni_refllist

! wrappers for Readn_Set_Magnetic_Structure from CFML_Magnetic_Symmetry
! _CFL
SUBROUTINE read_mag_cfl_file(file_cfl, n_ini, n_end, MGp, Am, SGo, Mag_dom, Cell)
!---- Arguments ----!
type(file_list_type), intent(in) :: file_cfl
integer, intent(in out) :: n_ini, n_end
type(MagSymm_k_Type), intent(out) :: MGp
type(mAtom_List_Type), intent(out) :: Am
type(Magnetic_Group_Type), optional, intent(out) :: SGo
type(Magnetic_Domain_type),optional, intent(out) :: Mag_dom
type(Crystal_Cell_type), optional, intent(in) :: Cell
call Readn_Set_Magnetic_Structure(file_cfl, n_ini, n_end, MGp, Am, SGo, Mag_dom, Cell)
END SUBROUTINE read_mag_cfl_file

! _MCIF
SUBROUTINE read_mag_mcif_file(file_mcif, mCell, MGp, Am)
character(len=*),               intent (in)  :: file_mcif
type(Crystal_Cell_type),        intent (out) :: mCell
type(Magnetic_Space_Group_Type),intent (out) :: MGp
type(mAtom_List_Type),          intent (out) :: Am
call Readn_Set_Magnetic_Structure(file_mcif, mCell, MGp, Am)
END SUBROUTINE read_mag_mcif_file

!!-- END Procedures called from ctypes hklGen.py --!!


!!-- Getters and Setters --!!


	function get_atom_equiv_list_nauas(obj_var)
	type (Atom_Equiv_List_Type) :: obj_var
	integer :: get_atom_equiv_list_nauas
	get_atom_equiv_list_nauas = obj_var%nauas
	end function get_atom_equiv_list_nauas
	
	subroutine set_atom_equiv_list_nauas(obj_var, new_value)
	type (Atom_Equiv_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nauas = new_value
	end subroutine set_atom_equiv_list_nauas
	
	function get_atom_equiv_list_atm(obj_var)
	type (Atom_Equiv_List_Type) :: obj_var
	type (Atom_Equiv_Type), allocatable, dimension(:) :: get_atom_equiv_list_atm
	get_atom_equiv_list_atm = obj_var%atm
	end function get_atom_equiv_list_atm
	
	subroutine set_atom_equiv_list_atm(obj_var, new_value)
	type (Atom_Equiv_List_Type) :: obj_var
	type (Atom_Equiv_Type), allocatable, dimension(:), intent(in) :: new_value
	obj_var%atm = new_value
	end subroutine set_atom_equiv_list_atm
	
	subroutine Atom_Equiv_List_Type_ctor(Atom_Equiv_List_Type_param, nauas_param, atm_param)
	type (Atom_Equiv_List_Type) :: Atom_Equiv_List_Type_param
	integer, intent(in) :: nauas_param
	type (Atom_Equiv_Type), allocatable, dimension(:), intent(in) :: atm_param
	Atom_Equiv_List_Type_param%nauas = nauas_param
	Atom_Equiv_List_Type_param%atm = atm_param
	end subroutine Atom_Equiv_List_Type_ctor
	function get_atom_equiv_x(obj_var)
	type (Atom_Equiv_Type) :: obj_var
	real(kind=cp),    allocatable, dimension(:,:) :: get_atom_equiv_x
	get_atom_equiv_x = obj_var%x
	end function get_atom_equiv_x
	
	subroutine set_atom_equiv_x(obj_var, new_value)
	type (Atom_Equiv_Type) :: obj_var
	real(kind=cp),    allocatable, dimension(:,:), intent(in) :: new_value
	obj_var%x = new_value
	end subroutine set_atom_equiv_x
	
	function get_atom_equiv_ChemSymb(obj_var)
	type (Atom_Equiv_Type) :: obj_var
	character(len=2) :: get_atom_equiv_ChemSymb
	get_atom_equiv_ChemSymb = obj_var%ChemSymb
	end function get_atom_equiv_ChemSymb
	
	subroutine set_atom_equiv_ChemSymb(obj_var, new_value)
	type (Atom_Equiv_Type) :: obj_var
	character(len=2), intent(in) :: new_value
	obj_var%ChemSymb = new_value
	end subroutine set_atom_equiv_ChemSymb
	
	function get_atom_equiv_mult(obj_var)
	type (Atom_Equiv_Type) :: obj_var
	integer :: get_atom_equiv_mult
	get_atom_equiv_mult = obj_var%mult
	end function get_atom_equiv_mult
	
	subroutine set_atom_equiv_mult(obj_var, new_value)
	type (Atom_Equiv_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%mult = new_value
	end subroutine set_atom_equiv_mult
	
	function get_atom_equiv_Lab(obj_var)
	type (Atom_Equiv_Type) :: obj_var
	character(len=20),allocatable, dimension(:) :: get_atom_equiv_Lab
	get_atom_equiv_Lab = obj_var%Lab
	end function get_atom_equiv_Lab
	
	subroutine set_atom_equiv_Lab(obj_var, new_value)
	type (Atom_Equiv_Type) :: obj_var
	character(len=20),allocatable, dimension(:), intent(in) :: new_value
	obj_var%Lab = new_value
	end subroutine set_atom_equiv_Lab
	
	subroutine Atom_Equiv_Type_ctor(Atom_Equiv_Type_param, x_param, ChemSymb_param, mult_param, Lab_param)
	type (Atom_Equiv_Type) :: Atom_Equiv_Type_param
	real(kind=cp),    allocatable, dimension(:,:), intent(in) :: x_param
	character(len=2), intent(in) :: ChemSymb_param
	integer, intent(in) :: mult_param
	character(len=20),allocatable, dimension(:), intent(in) :: Lab_param
	Atom_Equiv_Type_param%x = x_param
	Atom_Equiv_Type_param%ChemSymb = ChemSymb_param
	Atom_Equiv_Type_param%mult = mult_param
	Atom_Equiv_Type_param%Lab = Lab_param
	end subroutine Atom_Equiv_Type_ctor
	function get_atom_list_natoms(obj_var)
	type (Atom_List_Type) :: obj_var
	integer :: get_atom_list_natoms
	get_atom_list_natoms = obj_var%natoms
	end function get_atom_list_natoms
	
	subroutine set_atom_list_natoms(obj_var, new_value)
	type (Atom_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%natoms = new_value
	end subroutine set_atom_list_natoms
	
	function get_atom_list_atom(obj_var)
	type (Atom_List_Type) :: obj_var
	type(Atom_Type),dimension(:),allocatable :: get_atom_list_atom
	get_atom_list_atom = obj_var%atom
	end function get_atom_list_atom
	
	subroutine set_atom_list_atom(obj_var, new_value)
	type (Atom_List_Type) :: obj_var
	type(Atom_Type),dimension(:),allocatable, intent(in) :: new_value
	obj_var%atom = new_value
	end subroutine set_atom_list_atom
	
	subroutine Atom_List_Type_ctor(Atom_List_Type_param, natoms_param, atom_param)
	type (Atom_List_Type) :: Atom_List_Type_param
	integer, intent(in) :: natoms_param
	type(Atom_Type),dimension(:),allocatable, intent(in) :: atom_param
	Atom_List_Type_param%natoms = natoms_param
	Atom_List_Type_param%atom = atom_param
	end subroutine Atom_List_Type_ctor
	function get_atom_LOcc(obj_var)
	type (Atom_Type) :: obj_var
	integer :: get_atom_LOcc
	get_atom_LOcc = obj_var%LOcc
	end function get_atom_LOcc
	
	subroutine set_atom_LOcc(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%LOcc = new_value
	end subroutine set_atom_LOcc
	
	function get_atom_Utype(obj_var)
	type (Atom_Type) :: obj_var
	character(len=4) :: get_atom_Utype
	get_atom_Utype = obj_var%Utype
	end function get_atom_Utype
	
	subroutine set_atom_Utype(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=4), intent(in) :: new_value
	obj_var%Utype = new_value
	end subroutine set_atom_Utype
	
	function get_atom_MBiso(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_MBiso
	get_atom_MBiso = obj_var%MBiso
	end function get_atom_MBiso
	
	subroutine set_atom_MBiso(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%MBiso = new_value
	end subroutine set_atom_MBiso
	
	function get_atom_Occ(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Occ
	get_atom_Occ = obj_var%Occ
	end function get_atom_Occ
	
	subroutine set_atom_Occ(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Occ = new_value
	end subroutine set_atom_Occ
	
	function get_atom_Charge(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Charge
	get_atom_Charge = obj_var%Charge
	end function get_atom_Charge
	
	subroutine set_atom_Charge(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Charge = new_value
	end subroutine set_atom_Charge
	
	function get_atom_SfacSymb(obj_var)
	type (Atom_Type) :: obj_var
	character(len=4) :: get_atom_SfacSymb
	get_atom_SfacSymb = obj_var%SfacSymb
	end function get_atom_SfacSymb
	
	subroutine set_atom_SfacSymb(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=4), intent(in) :: new_value
	obj_var%SfacSymb = new_value
	end subroutine set_atom_SfacSymb
	
	function get_atom_Lab(obj_var)
	type (Atom_Type) :: obj_var
	character(len=20) :: get_atom_Lab
	get_atom_Lab = obj_var%Lab
	end function get_atom_Lab
	
	subroutine set_atom_Lab(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=20), intent(in) :: new_value
	obj_var%Lab = new_value
	end subroutine set_atom_Lab
	
	function get_atom_Moment(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Moment
	get_atom_Moment = obj_var%Moment
	end function get_atom_Moment
	
	subroutine set_atom_Moment(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Moment = new_value
	end subroutine set_atom_Moment
	
	function get_atom_LU(obj_var)
	type (Atom_Type) :: obj_var
	integer,      dimension(6) :: get_atom_LU
	get_atom_LU = obj_var%LU
	end function get_atom_LU
	
	subroutine set_atom_LU(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer,      dimension(6), intent(in) :: new_value
	obj_var%LU = new_value
	end subroutine set_atom_LU
	
	function get_atom_MOcc(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_MOcc
	get_atom_MOcc = obj_var%MOcc
	end function get_atom_MOcc
	
	subroutine set_atom_MOcc(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%MOcc = new_value
	end subroutine set_atom_MOcc
	
	function get_atom_Active(obj_var)
	type (Atom_Type) :: obj_var
	logical :: get_atom_Active
	get_atom_Active = obj_var%Active
	end function get_atom_Active
	
	subroutine set_atom_Active(obj_var, new_value)
	type (Atom_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%Active = new_value
	end subroutine set_atom_Active
	
	function get_atom_Mult(obj_var)
	type (Atom_Type) :: obj_var
	integer :: get_atom_Mult
	get_atom_Mult = obj_var%Mult
	end function get_atom_Mult
	
	subroutine set_atom_Mult(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Mult = new_value
	end subroutine set_atom_Mult
	
	function get_atom_X_Std(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_atom_X_Std
	get_atom_X_Std = obj_var%X_Std
	end function get_atom_X_Std
	
	subroutine set_atom_X_Std(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%X_Std = new_value
	end subroutine set_atom_X_Std
	
	function get_atom_U_std(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(6) :: get_atom_U_std
	get_atom_U_std = obj_var%U_std
	end function get_atom_U_std
	
	subroutine set_atom_U_std(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(6), intent(in) :: new_value
	obj_var%U_std = new_value
	end subroutine set_atom_U_std
	
	function get_atom_NVar(obj_var)
	type (Atom_Type) :: obj_var
	integer :: get_atom_NVar
	get_atom_NVar = obj_var%NVar
	end function get_atom_NVar
	
	subroutine set_atom_NVar(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NVar = new_value
	end subroutine set_atom_NVar
	
	function get_atom_wyck(obj_var)
	type (Atom_Type) :: obj_var
	character(len=1) :: get_atom_wyck
	get_atom_wyck = obj_var%wyck
	end function get_atom_wyck
	
	subroutine set_atom_wyck(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=1), intent(in) :: new_value
	obj_var%wyck = new_value
	end subroutine set_atom_wyck
	
	function get_atom_Biso_std(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Biso_std
	get_atom_Biso_std = obj_var%Biso_std
	end function get_atom_Biso_std
	
	subroutine set_atom_Biso_std(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Biso_std = new_value
	end subroutine set_atom_Biso_std
	
	function get_atom_LBiso(obj_var)
	type (Atom_Type) :: obj_var
	integer :: get_atom_LBiso
	get_atom_LBiso = obj_var%LBiso
	end function get_atom_LBiso
	
	subroutine set_atom_LBiso(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%LBiso = new_value
	end subroutine set_atom_LBiso
	
	function get_atom_Biso(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Biso
	get_atom_Biso = obj_var%Biso
	end function get_atom_Biso
	
	subroutine set_atom_Biso(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Biso = new_value
	end subroutine set_atom_Biso
	
	function get_atom_VarF(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(10) :: get_atom_VarF
	get_atom_VarF = obj_var%VarF
	end function get_atom_VarF
	
	subroutine set_atom_VarF(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(10), intent(in) :: new_value
	obj_var%VarF = new_value
	end subroutine set_atom_VarF
	
	function get_atom_U(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(6) :: get_atom_U
	get_atom_U = obj_var%U
	end function get_atom_U
	
	subroutine set_atom_U(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(6), intent(in) :: new_value
	obj_var%U = new_value
	end subroutine set_atom_U
	
	function get_atom_Occ_Std(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Occ_Std
	get_atom_Occ_Std = obj_var%Occ_Std
	end function get_atom_Occ_Std
	
	subroutine set_atom_Occ_Std(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Occ_Std = new_value
	end subroutine set_atom_Occ_Std
	
	function get_atom_X(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_atom_X
	get_atom_X = obj_var%X
	end function get_atom_X
	
	subroutine set_atom_X(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%X = new_value
	end subroutine set_atom_X
	
	function get_atom_Z(obj_var)
	type (Atom_Type) :: obj_var
	integer :: get_atom_Z
	get_atom_Z = obj_var%Z
	end function get_atom_Z
	
	subroutine set_atom_Z(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Z = new_value
	end subroutine set_atom_Z
	
	function get_atom_MU(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(6) :: get_atom_MU
	get_atom_MU = obj_var%MU
	end function get_atom_MU
	
	subroutine set_atom_MU(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(6), intent(in) :: new_value
	obj_var%MU = new_value
	end subroutine set_atom_MU
	
	function get_atom_LX(obj_var)
	type (Atom_Type) :: obj_var
	integer,      dimension(3) :: get_atom_LX
	get_atom_LX = obj_var%LX
	end function get_atom_LX
	
	subroutine set_atom_LX(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer,      dimension(3), intent(in) :: new_value
	obj_var%LX = new_value
	end subroutine set_atom_LX
	
	function get_atom_ChemSymb(obj_var)
	type (Atom_Type) :: obj_var
	character(len=2) :: get_atom_ChemSymb
	get_atom_ChemSymb = obj_var%ChemSymb
	end function get_atom_ChemSymb
	
	subroutine set_atom_ChemSymb(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=2), intent(in) :: new_value
	obj_var%ChemSymb = new_value
	end subroutine set_atom_ChemSymb
	
	function get_atom_Ind(obj_var)
	type (Atom_Type) :: obj_var
	integer, dimension(5) :: get_atom_Ind
	get_atom_Ind = obj_var%Ind
	end function get_atom_Ind
	
	subroutine set_atom_Ind(obj_var, new_value)
	type (Atom_Type) :: obj_var
	integer, dimension(5), intent(in) :: new_value
	obj_var%Ind = new_value
	end subroutine set_atom_Ind
	
	function get_atom_ThType(obj_var)
	type (Atom_Type) :: obj_var
	character(len=5) :: get_atom_ThType
	get_atom_ThType = obj_var%ThType
	end function get_atom_ThType
	
	subroutine set_atom_ThType(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=5), intent(in) :: new_value
	obj_var%ThType = new_value
	end subroutine set_atom_ThType
	
	function get_atom_AtmInfo(obj_var)
	type (Atom_Type) :: obj_var
	character(len=40) :: get_atom_AtmInfo
	get_atom_AtmInfo = obj_var%AtmInfo
	end function get_atom_AtmInfo
	
	subroutine set_atom_AtmInfo(obj_var, new_value)
	type (Atom_Type) :: obj_var
	character(len=40), intent(in) :: new_value
	obj_var%AtmInfo = new_value
	end subroutine set_atom_AtmInfo
	
	function get_atom_Ueq(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp) :: get_atom_Ueq
	get_atom_Ueq = obj_var%Ueq
	end function get_atom_Ueq
	
	subroutine set_atom_Ueq(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Ueq = new_value
	end subroutine set_atom_Ueq
	
	function get_atom_MX(obj_var)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_atom_MX
	get_atom_MX = obj_var%MX
	end function get_atom_MX
	
	subroutine set_atom_MX(obj_var, new_value)
	type (Atom_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%MX = new_value
	end subroutine set_atom_MX
	
	subroutine Atom_Type_ctor(Atom_Type_param, LOcc_param, Utype_param, MBiso_param, Occ_param, Charge_param, SfacSymb_param, Lab_param, Moment_param, LU_param, MOcc_param, Active_param, Mult_param, X_Std_param, U_std_param, NVar_param, wyck_param, Biso_std_param, LBiso_param, Biso_param, VarF_param, U_param, Occ_Std_param, X_param, Z_param, MU_param, LX_param, ChemSymb_param, Ind_param, ThType_param, AtmInfo_param, Ueq_param, MX_param)
	type (Atom_Type) :: Atom_Type_param
	integer, intent(in) :: LOcc_param
	character(len=4), intent(in) :: Utype_param
	real(kind=cp), intent(in) :: MBiso_param
	real(kind=cp), intent(in) :: Occ_param
	real(kind=cp), intent(in) :: Charge_param
	character(len=4), intent(in) :: SfacSymb_param
	character(len=20), intent(in) :: Lab_param
	real(kind=cp), intent(in) :: Moment_param
	integer,      dimension(6), intent(in) :: LU_param
	real(kind=cp), intent(in) :: MOcc_param
	logical, intent(in) :: Active_param
	integer, intent(in) :: Mult_param
	real(kind=cp),dimension(3), intent(in) :: X_Std_param
	real(kind=cp),dimension(6), intent(in) :: U_std_param
	integer, intent(in) :: NVar_param
	character(len=1), intent(in) :: wyck_param
	real(kind=cp), intent(in) :: Biso_std_param
	integer, intent(in) :: LBiso_param
	real(kind=cp), intent(in) :: Biso_param
	real(kind=cp),dimension(10), intent(in) :: VarF_param
	real(kind=cp),dimension(6), intent(in) :: U_param
	real(kind=cp), intent(in) :: Occ_Std_param
	real(kind=cp),dimension(3), intent(in) :: X_param
	integer, intent(in) :: Z_param
	real(kind=cp),dimension(6), intent(in) :: MU_param
	integer,      dimension(3), intent(in) :: LX_param
	character(len=2), intent(in) :: ChemSymb_param
	integer, dimension(5), intent(in) :: Ind_param
	character(len=5), intent(in) :: ThType_param
	character(len=40), intent(in) :: AtmInfo_param
	real(kind=cp), intent(in) :: Ueq_param
	real(kind=cp),dimension(3), intent(in) :: MX_param
	Atom_Type_param%LOcc = LOcc_param
	Atom_Type_param%Utype = Utype_param
	Atom_Type_param%MBiso = MBiso_param
	Atom_Type_param%Occ = Occ_param
	Atom_Type_param%Charge = Charge_param
	Atom_Type_param%SfacSymb = SfacSymb_param
	Atom_Type_param%Lab = Lab_param
	Atom_Type_param%Moment = Moment_param
	Atom_Type_param%LU = LU_param
	Atom_Type_param%MOcc = MOcc_param
	Atom_Type_param%Active = Active_param
	Atom_Type_param%Mult = Mult_param
	Atom_Type_param%X_Std = X_Std_param
	Atom_Type_param%U_std = U_std_param
	Atom_Type_param%NVar = NVar_param
	Atom_Type_param%wyck = wyck_param
	Atom_Type_param%Biso_std = Biso_std_param
	Atom_Type_param%LBiso = LBiso_param
	Atom_Type_param%Biso = Biso_param
	Atom_Type_param%VarF = VarF_param
	Atom_Type_param%U = U_param
	Atom_Type_param%Occ_Std = Occ_Std_param
	Atom_Type_param%X = X_param
	Atom_Type_param%Z = Z_param
	Atom_Type_param%MU = MU_param
	Atom_Type_param%LX = LX_param
	Atom_Type_param%ChemSymb = ChemSymb_param
	Atom_Type_param%Ind = Ind_param
	Atom_Type_param%ThType = ThType_param
	Atom_Type_param%AtmInfo = AtmInfo_param
	Atom_Type_param%Ueq = Ueq_param
	Atom_Type_param%MX = MX_param
	end subroutine Atom_Type_ctor
	function get_atoms_cell_distance(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),        dimension( :,:), allocatable :: get_atoms_cell_distance
	get_atoms_cell_distance = obj_var%distance
	end function get_atoms_cell_distance
	
	subroutine set_atoms_cell_distance(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),        dimension( :,:), allocatable, intent(in) :: new_value
	obj_var%distance = new_value
	end subroutine set_atoms_cell_distance
	
	function get_atoms_cell_ndist(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	integer :: get_atoms_cell_ndist
	get_atoms_cell_ndist = obj_var%ndist
	end function get_atoms_cell_ndist
	
	subroutine set_atoms_cell_ndist(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%ndist = new_value
	end subroutine set_atoms_cell_ndist
	
	function get_atoms_cell_ddist(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),           dimension(:), allocatable :: get_atoms_cell_ddist
	get_atoms_cell_ddist = obj_var%ddist
	end function get_atoms_cell_ddist
	
	subroutine set_atoms_cell_ddist(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),           dimension(:), allocatable, intent(in) :: new_value
	obj_var%ddist = new_value
	end subroutine set_atoms_cell_ddist
	
	function get_atoms_cell_xyz(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),         dimension(:,:), allocatable :: get_atoms_cell_xyz
	get_atoms_cell_xyz = obj_var%xyz
	end function get_atoms_cell_xyz
	
	subroutine set_atoms_cell_xyz(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),         dimension(:,:), allocatable, intent(in) :: new_value
	obj_var%xyz = new_value
	end subroutine set_atoms_cell_xyz
	
	function get_atoms_cell_charge(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),           dimension(:), allocatable :: get_atoms_cell_charge
	get_atoms_cell_charge = obj_var%charge
	end function get_atoms_cell_charge
	
	subroutine set_atoms_cell_charge(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),           dimension(:), allocatable, intent(in) :: new_value
	obj_var%charge = new_value
	end subroutine set_atoms_cell_charge
	
	function get_atoms_cell_ddlab(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	character (len=20),      dimension(:), allocatable :: get_atoms_cell_ddlab
	get_atoms_cell_ddlab = obj_var%ddlab
	end function get_atoms_cell_ddlab
	
	subroutine set_atoms_cell_ddlab(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	character (len=20),      dimension(:), allocatable, intent(in) :: new_value
	obj_var%ddlab = new_value
	end subroutine set_atoms_cell_ddlab
	
	function get_atoms_cell_noms(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	character (len=20),      dimension(:), allocatable :: get_atoms_cell_noms
	get_atoms_cell_noms = obj_var%noms
	end function get_atoms_cell_noms
	
	subroutine set_atoms_cell_noms(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	character (len=20),      dimension(:), allocatable, intent(in) :: new_value
	obj_var%noms = new_value
	end subroutine set_atoms_cell_noms
	
	function get_atoms_cell_moment(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),           dimension(:), allocatable :: get_atoms_cell_moment
	get_atoms_cell_moment = obj_var%moment
	end function get_atoms_cell_moment
	
	subroutine set_atoms_cell_moment(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),           dimension(:), allocatable, intent(in) :: new_value
	obj_var%moment = new_value
	end subroutine set_atoms_cell_moment
	
	function get_atoms_cell_neighb_atom(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	integer,              dimension( :,:), allocatable :: get_atoms_cell_neighb_atom
	get_atoms_cell_neighb_atom = obj_var%neighb_atom
	end function get_atoms_cell_neighb_atom
	
	subroutine set_atoms_cell_neighb_atom(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	integer,              dimension( :,:), allocatable, intent(in) :: new_value
	obj_var%neighb_atom = new_value
	end subroutine set_atoms_cell_neighb_atom
	
	function get_atoms_cell_nat(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	integer :: get_atoms_cell_nat
	get_atoms_cell_nat = obj_var%nat
	end function get_atoms_cell_nat
	
	subroutine set_atoms_cell_nat(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nat = new_value
	end subroutine set_atoms_cell_nat
	
	function get_atoms_cell_var_free(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),         dimension(:,:), allocatable :: get_atoms_cell_var_free
	get_atoms_cell_var_free = obj_var%var_free
	end function get_atoms_cell_var_free
	
	subroutine set_atoms_cell_var_free(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),         dimension(:,:), allocatable, intent(in) :: new_value
	obj_var%var_free = new_value
	end subroutine set_atoms_cell_var_free
	
	function get_atoms_cell_trans(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),      dimension(:, :,:), allocatable :: get_atoms_cell_trans
	get_atoms_cell_trans = obj_var%trans
	end function get_atoms_cell_trans
	
	subroutine set_atoms_cell_trans(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	real(kind=cp),      dimension(:, :,:), allocatable, intent(in) :: new_value
	obj_var%trans = new_value
	end subroutine set_atoms_cell_trans
	
	function get_atoms_cell_neighb(obj_var)
	type (Atoms_Cell_Type) :: obj_var
	integer,                 dimension(:), allocatable :: get_atoms_cell_neighb
	get_atoms_cell_neighb = obj_var%neighb
	end function get_atoms_cell_neighb
	
	subroutine set_atoms_cell_neighb(obj_var, new_value)
	type (Atoms_Cell_Type) :: obj_var
	integer,                 dimension(:), allocatable, intent(in) :: new_value
	obj_var%neighb = new_value
	end subroutine set_atoms_cell_neighb
	
	subroutine Atoms_Cell_Type_ctor(Atoms_Cell_Type_param, distance_param, ndist_param, ddist_param, xyz_param, charge_param, ddlab_param, noms_param, moment_param, neighb_atom_param, nat_param, var_free_param, trans_param, neighb_param)
	type (Atoms_Cell_Type) :: Atoms_Cell_Type_param
	real(kind=cp),        dimension( :,:), allocatable, intent(in) :: distance_param
	integer, intent(in) :: ndist_param
	real(kind=cp),           dimension(:), allocatable, intent(in) :: ddist_param
	real(kind=cp),         dimension(:,:), allocatable, intent(in) :: xyz_param
	real(kind=cp),           dimension(:), allocatable, intent(in) :: charge_param
	character (len=20),      dimension(:), allocatable, intent(in) :: ddlab_param
	character (len=20),      dimension(:), allocatable, intent(in) :: noms_param
	real(kind=cp),           dimension(:), allocatable, intent(in) :: moment_param
	integer,              dimension( :,:), allocatable, intent(in) :: neighb_atom_param
	integer, intent(in) :: nat_param
	real(kind=cp),         dimension(:,:), allocatable, intent(in) :: var_free_param
	real(kind=cp),      dimension(:, :,:), allocatable, intent(in) :: trans_param
	integer,                 dimension(:), allocatable, intent(in) :: neighb_param
	Atoms_Cell_Type_param%distance = distance_param
	Atoms_Cell_Type_param%ndist = ndist_param
	Atoms_Cell_Type_param%ddist = ddist_param
	Atoms_Cell_Type_param%xyz = xyz_param
	Atoms_Cell_Type_param%charge = charge_param
	Atoms_Cell_Type_param%ddlab = ddlab_param
	Atoms_Cell_Type_param%noms = noms_param
	Atoms_Cell_Type_param%moment = moment_param
	Atoms_Cell_Type_param%neighb_atom = neighb_atom_param
	Atoms_Cell_Type_param%nat = nat_param
	Atoms_Cell_Type_param%var_free = var_free_param
	Atoms_Cell_Type_param%trans = trans_param
	Atoms_Cell_Type_param%neighb = neighb_param
	end subroutine Atoms_Cell_Type_ctor
	function get_matom_list_natoms(obj_var)
	type (mAtom_List_Type) :: obj_var
	integer :: get_matom_list_natoms
	get_matom_list_natoms = obj_var%natoms
	end function get_matom_list_natoms
	
	subroutine set_matom_list_natoms(obj_var, new_value)
	type (mAtom_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%natoms = new_value
	end subroutine set_matom_list_natoms
	
	function get_matom_list_Atom(obj_var)
	type (mAtom_List_Type) :: obj_var
	type(mAtom_Type),dimension(:),allocatable :: get_matom_list_Atom
	get_matom_list_Atom = obj_var%Atom
	end function get_matom_list_Atom
	
	subroutine set_matom_list_Atom(obj_var, new_value)
	type (mAtom_List_Type) :: obj_var
	type(mAtom_Type),dimension(:),allocatable, intent(in) :: new_value
	obj_var%Atom = new_value
	end subroutine set_matom_list_Atom
	
	subroutine mAtom_List_Type_ctor(mAtom_List_Type_param, natoms_param, Atom_param)
	type (mAtom_List_Type) :: mAtom_List_Type_param
	integer, intent(in) :: natoms_param
	type(mAtom_Type),dimension(:),allocatable, intent(in) :: Atom_param
	mAtom_List_Type_param%natoms = natoms_param
	mAtom_List_Type_param%Atom = Atom_param
	end subroutine mAtom_List_Type_ctor
	function get_matom_mmphas(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12) :: get_matom_mmphas
	get_matom_mmphas = obj_var%mmphas
	end function get_matom_mmphas
	
	subroutine set_matom_mmphas(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12), intent(in) :: new_value
	obj_var%mmphas = new_value
	end subroutine set_matom_mmphas
	
	function get_matom_LOcc(obj_var)
	type (mAtom_Type) :: obj_var
	integer :: get_matom_LOcc
	get_matom_LOcc = obj_var%LOcc
	end function get_matom_LOcc
	
	subroutine set_matom_LOcc(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%LOcc = new_value
	end subroutine set_matom_LOcc
	
	function get_matom_SkI_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_SkI_std
	get_matom_SkI_std = obj_var%SkI_std
	end function get_matom_SkI_std
	
	subroutine set_matom_SkI_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%SkI_std = new_value
	end subroutine set_matom_SkI_std
	
	function get_matom_Utype(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=4) :: get_matom_Utype
	get_matom_Utype = obj_var%Utype
	end function get_matom_Utype
	
	subroutine set_matom_Utype(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=4), intent(in) :: new_value
	obj_var%Utype = new_value
	end subroutine set_matom_Utype
	
	function get_matom_MBiso(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_MBiso
	get_matom_MBiso = obj_var%MBiso
	end function get_matom_MBiso
	
	subroutine set_matom_MBiso(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%MBiso = new_value
	end subroutine set_matom_MBiso
	
	function get_matom_Occ(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Occ
	get_matom_Occ = obj_var%Occ
	end function get_matom_Occ
	
	subroutine set_matom_Occ(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Occ = new_value
	end subroutine set_matom_Occ
	
	function get_matom_lbas(obj_var)
	type (mAtom_Type) :: obj_var
	integer,dimension(12,12) :: get_matom_lbas
	get_matom_lbas = obj_var%lbas
	end function get_matom_lbas
	
	subroutine set_matom_lbas(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,dimension(12,12), intent(in) :: new_value
	obj_var%lbas = new_value
	end subroutine set_matom_lbas
	
	function get_matom_Charge(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Charge
	get_matom_Charge = obj_var%Charge
	end function get_matom_Charge
	
	subroutine set_matom_Charge(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Charge = new_value
	end subroutine set_matom_Charge
	
	function get_matom_SfacSymb(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=4) :: get_matom_SfacSymb
	get_matom_SfacSymb = obj_var%SfacSymb
	end function get_matom_SfacSymb
	
	subroutine set_matom_SfacSymb(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=4), intent(in) :: new_value
	obj_var%SfacSymb = new_value
	end subroutine set_matom_SfacSymb
	
	function get_matom_imat(obj_var)
	type (mAtom_Type) :: obj_var
	integer,      dimension(12) :: get_matom_imat
	get_matom_imat = obj_var%imat
	end function get_matom_imat
	
	subroutine set_matom_imat(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,      dimension(12), intent(in) :: new_value
	obj_var%imat = new_value
	end subroutine set_matom_imat
	
	function get_matom_lmphas(obj_var)
	type (mAtom_Type) :: obj_var
	integer,dimension(12) :: get_matom_lmphas
	get_matom_lmphas = obj_var%lmphas
	end function get_matom_lmphas
	
	subroutine set_matom_lmphas(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,dimension(12), intent(in) :: new_value
	obj_var%lmphas = new_value
	end subroutine set_matom_lmphas
	
	function get_matom_mphas(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12) :: get_matom_mphas
	get_matom_mphas = obj_var%mphas
	end function get_matom_mphas
	
	subroutine set_matom_mphas(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12), intent(in) :: new_value
	obj_var%mphas = new_value
	end subroutine set_matom_mphas
	
	function get_matom_Spher_SkI(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_Spher_SkI
	get_matom_Spher_SkI = obj_var%Spher_SkI
	end function get_matom_Spher_SkI
	
	subroutine set_matom_Spher_SkI(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%Spher_SkI = new_value
	end subroutine set_matom_Spher_SkI
	
	function get_matom_SkR(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_SkR
	get_matom_SkR = obj_var%SkR
	end function get_matom_SkR
	
	subroutine set_matom_SkR(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%SkR = new_value
	end subroutine set_matom_SkR
	
	function get_matom_lskr(obj_var)
	type (mAtom_Type) :: obj_var
	integer,      dimension(3,12) :: get_matom_lskr
	get_matom_lskr = obj_var%lskr
	end function get_matom_lskr
	
	subroutine set_matom_lskr(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,      dimension(3,12), intent(in) :: new_value
	obj_var%lskr = new_value
	end subroutine set_matom_lskr
	
	function get_matom_Lab(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=10) :: get_matom_Lab
	get_matom_Lab = obj_var%Lab
	end function get_matom_Lab
	
	subroutine set_matom_Lab(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=10), intent(in) :: new_value
	obj_var%Lab = new_value
	end subroutine set_matom_Lab
	
	function get_matom_Moment(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Moment
	get_matom_Moment = obj_var%Moment
	end function get_matom_Moment
	
	subroutine set_matom_Moment(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Moment = new_value
	end subroutine set_matom_Moment
	
	function get_matom_LU(obj_var)
	type (mAtom_Type) :: obj_var
	integer,      dimension(6) :: get_matom_LU
	get_matom_LU = obj_var%LU
	end function get_matom_LU
	
	subroutine set_matom_LU(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,      dimension(6), intent(in) :: new_value
	obj_var%LU = new_value
	end subroutine set_matom_LU
	
	function get_matom_MOcc(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_MOcc
	get_matom_MOcc = obj_var%MOcc
	end function get_matom_MOcc
	
	subroutine set_matom_MOcc(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%MOcc = new_value
	end subroutine set_matom_MOcc
	
	function get_matom_Active(obj_var)
	type (mAtom_Type) :: obj_var
	logical :: get_matom_Active
	get_matom_Active = obj_var%Active
	end function get_matom_Active
	
	subroutine set_matom_Active(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%Active = new_value
	end subroutine set_matom_Active
	
	function get_matom_SkI(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_SkI
	get_matom_SkI = obj_var%SkI
	end function get_matom_SkI
	
	subroutine set_matom_SkI(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%SkI = new_value
	end subroutine set_matom_SkI
	
	function get_matom_Mult(obj_var)
	type (mAtom_Type) :: obj_var
	integer :: get_matom_Mult
	get_matom_Mult = obj_var%Mult
	end function get_matom_Mult
	
	subroutine set_matom_Mult(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Mult = new_value
	end subroutine set_matom_Mult
	
	function get_matom_Spher_SkR_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_Spher_SkR_std
	get_matom_Spher_SkR_std = obj_var%Spher_SkR_std
	end function get_matom_Spher_SkR_std
	
	subroutine set_matom_Spher_SkR_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%Spher_SkR_std = new_value
	end subroutine set_matom_Spher_SkR_std
	
	function get_matom_X_Std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_matom_X_Std
	get_matom_X_Std = obj_var%X_Std
	end function get_matom_X_Std
	
	subroutine set_matom_X_Std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%X_Std = new_value
	end subroutine set_matom_X_Std
	
	function get_matom_U_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(6) :: get_matom_U_std
	get_matom_U_std = obj_var%U_std
	end function get_matom_U_std
	
	subroutine set_matom_U_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(6), intent(in) :: new_value
	obj_var%U_std = new_value
	end subroutine set_matom_U_std
	
	function get_matom_lski(obj_var)
	type (mAtom_Type) :: obj_var
	integer,      dimension(3,12) :: get_matom_lski
	get_matom_lski = obj_var%lski
	end function get_matom_lski
	
	subroutine set_matom_lski(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,      dimension(3,12), intent(in) :: new_value
	obj_var%lski = new_value
	end subroutine set_matom_lski
	
	function get_matom_NVar(obj_var)
	type (mAtom_Type) :: obj_var
	integer :: get_matom_NVar
	get_matom_NVar = obj_var%NVar
	end function get_matom_NVar
	
	subroutine set_matom_NVar(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NVar = new_value
	end subroutine set_matom_NVar
	
	function get_matom_wyck(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=1) :: get_matom_wyck
	get_matom_wyck = obj_var%wyck
	end function get_matom_wyck
	
	subroutine set_matom_wyck(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=1), intent(in) :: new_value
	obj_var%wyck = new_value
	end subroutine set_matom_wyck
	
	function get_matom_Biso_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Biso_std
	get_matom_Biso_std = obj_var%Biso_std
	end function get_matom_Biso_std
	
	subroutine set_matom_Biso_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Biso_std = new_value
	end subroutine set_matom_Biso_std
	
	function get_matom_LBiso(obj_var)
	type (mAtom_Type) :: obj_var
	integer :: get_matom_LBiso
	get_matom_LBiso = obj_var%LBiso
	end function get_matom_LBiso
	
	subroutine set_matom_LBiso(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%LBiso = new_value
	end subroutine set_matom_LBiso
	
	function get_matom_mphas_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12) :: get_matom_mphas_std
	get_matom_mphas_std = obj_var%mphas_std
	end function get_matom_mphas_std
	
	subroutine set_matom_mphas_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12), intent(in) :: new_value
	obj_var%mphas_std = new_value
	end subroutine set_matom_mphas_std
	
	function get_matom_Biso(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Biso
	get_matom_Biso = obj_var%Biso
	end function get_matom_Biso
	
	subroutine set_matom_Biso(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Biso = new_value
	end subroutine set_matom_Biso
	
	function get_matom_VarF(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(10) :: get_matom_VarF
	get_matom_VarF = obj_var%VarF
	end function get_matom_VarF
	
	subroutine set_matom_VarF(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(10), intent(in) :: new_value
	obj_var%VarF = new_value
	end subroutine set_matom_VarF
	
	function get_matom_U(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(6) :: get_matom_U
	get_matom_U = obj_var%U
	end function get_matom_U
	
	subroutine set_matom_U(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(6), intent(in) :: new_value
	obj_var%U = new_value
	end subroutine set_matom_U
	
	function get_matom_Occ_Std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Occ_Std
	get_matom_Occ_Std = obj_var%Occ_Std
	end function get_matom_Occ_Std
	
	subroutine set_matom_Occ_Std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Occ_Std = new_value
	end subroutine set_matom_Occ_Std
	
	function get_matom_X(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_matom_X
	get_matom_X = obj_var%X
	end function get_matom_X
	
	subroutine set_matom_X(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%X = new_value
	end subroutine set_matom_X
	
	function get_matom_Z(obj_var)
	type (mAtom_Type) :: obj_var
	integer :: get_matom_Z
	get_matom_Z = obj_var%Z
	end function get_matom_Z
	
	subroutine set_matom_Z(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Z = new_value
	end subroutine set_matom_Z
	
	function get_matom_nvk(obj_var)
	type (mAtom_Type) :: obj_var
	integer :: get_matom_nvk
	get_matom_nvk = obj_var%nvk
	end function get_matom_nvk
	
	subroutine set_matom_nvk(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nvk = new_value
	end subroutine set_matom_nvk
	
	function get_matom_mbas(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12,12) :: get_matom_mbas
	get_matom_mbas = obj_var%mbas
	end function get_matom_mbas
	
	subroutine set_matom_mbas(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12,12), intent(in) :: new_value
	obj_var%mbas = new_value
	end subroutine set_matom_mbas
	
	function get_matom_Spher_SkI_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_Spher_SkI_std
	get_matom_Spher_SkI_std = obj_var%Spher_SkI_std
	end function get_matom_Spher_SkI_std
	
	subroutine set_matom_Spher_SkI_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%Spher_SkI_std = new_value
	end subroutine set_matom_Spher_SkI_std
	
	function get_matom_Spher_SkR(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_Spher_SkR
	get_matom_Spher_SkR = obj_var%Spher_SkR
	end function get_matom_Spher_SkR
	
	subroutine set_matom_Spher_SkR(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%Spher_SkR = new_value
	end subroutine set_matom_Spher_SkR
	
	function get_matom_mSki(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_mSki
	get_matom_mSki = obj_var%mSki
	end function get_matom_mSki
	
	subroutine set_matom_mSki(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%mSki = new_value
	end subroutine set_matom_mSki
	
	function get_matom_SkR_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_SkR_std
	get_matom_SkR_std = obj_var%SkR_std
	end function get_matom_SkR_std
	
	subroutine set_matom_SkR_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%SkR_std = new_value
	end subroutine set_matom_SkR_std
	
	function get_matom_MU(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(6) :: get_matom_MU
	get_matom_MU = obj_var%MU
	end function get_matom_MU
	
	subroutine set_matom_MU(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(6), intent(in) :: new_value
	obj_var%MU = new_value
	end subroutine set_matom_MU
	
	function get_matom_mSkR(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_matom_mSkR
	get_matom_mSkR = obj_var%mSkR
	end function get_matom_mSkR
	
	subroutine set_matom_mSkR(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%mSkR = new_value
	end subroutine set_matom_mSkR
	
	function get_matom_LX(obj_var)
	type (mAtom_Type) :: obj_var
	integer,      dimension(3) :: get_matom_LX
	get_matom_LX = obj_var%LX
	end function get_matom_LX
	
	subroutine set_matom_LX(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer,      dimension(3), intent(in) :: new_value
	obj_var%LX = new_value
	end subroutine set_matom_LX
	
	function get_matom_ChemSymb(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=2) :: get_matom_ChemSymb
	get_matom_ChemSymb = obj_var%ChemSymb
	end function get_matom_ChemSymb
	
	subroutine set_matom_ChemSymb(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=2), intent(in) :: new_value
	obj_var%ChemSymb = new_value
	end subroutine set_matom_ChemSymb
	
	function get_matom_cbas(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12,12) :: get_matom_cbas
	get_matom_cbas = obj_var%cbas
	end function get_matom_cbas
	
	subroutine set_matom_cbas(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12,12), intent(in) :: new_value
	obj_var%cbas = new_value
	end subroutine set_matom_cbas
	
	function get_matom_Ind(obj_var)
	type (mAtom_Type) :: obj_var
	integer, dimension(5) :: get_matom_Ind
	get_matom_Ind = obj_var%Ind
	end function get_matom_Ind
	
	subroutine set_matom_Ind(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	integer, dimension(5), intent(in) :: new_value
	obj_var%Ind = new_value
	end subroutine set_matom_Ind
	
	function get_matom_cbas_std(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12,12) :: get_matom_cbas_std
	get_matom_cbas_std = obj_var%cbas_std
	end function get_matom_cbas_std
	
	subroutine set_matom_cbas_std(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(12,12), intent(in) :: new_value
	obj_var%cbas_std = new_value
	end subroutine set_matom_cbas_std
	
	function get_matom_ThType(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=5) :: get_matom_ThType
	get_matom_ThType = obj_var%ThType
	end function get_matom_ThType
	
	subroutine set_matom_ThType(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=5), intent(in) :: new_value
	obj_var%ThType = new_value
	end subroutine set_matom_ThType
	
	function get_matom_AtmInfo(obj_var)
	type (mAtom_Type) :: obj_var
	character(len=40) :: get_matom_AtmInfo
	get_matom_AtmInfo = obj_var%AtmInfo
	end function get_matom_AtmInfo
	
	subroutine set_matom_AtmInfo(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	character(len=40), intent(in) :: new_value
	obj_var%AtmInfo = new_value
	end subroutine set_matom_AtmInfo
	
	function get_matom_Ueq(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp) :: get_matom_Ueq
	get_matom_Ueq = obj_var%Ueq
	end function get_matom_Ueq
	
	subroutine set_matom_Ueq(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Ueq = new_value
	end subroutine set_matom_Ueq
	
	function get_matom_MX(obj_var)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_matom_MX
	get_matom_MX = obj_var%MX
	end function get_matom_MX
	
	subroutine set_matom_MX(obj_var, new_value)
	type (mAtom_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%MX = new_value
	end subroutine set_matom_MX
	
	subroutine mAtom_Type_ctor(mAtom_Type_param, mmphas_param, LOcc_param, SkI_std_param, Utype_param, MBiso_param, Occ_param, lbas_param, Charge_param, SfacSymb_param, imat_param, lmphas_param, mphas_param, Spher_SkI_param, SkR_param, lskr_param, Lab_param, Moment_param, LU_param, MOcc_param, Active_param, SkI_param, Mult_param, Spher_SkR_std_param, X_Std_param, U_std_param, lski_param, NVar_param, wyck_param, Biso_std_param, LBiso_param, mphas_std_param, Biso_param, VarF_param, U_param, Occ_Std_param, X_param, Z_param, nvk_param, mbas_param, Spher_SkI_std_param, Spher_SkR_param, mSki_param, SkR_std_param, MU_param, mSkR_param, LX_param, ChemSymb_param, cbas_param, Ind_param, cbas_std_param, ThType_param, AtmInfo_param, Ueq_param, MX_param)
	type (mAtom_Type) :: mAtom_Type_param
	real(kind=cp),dimension(12), intent(in) :: mmphas_param
	integer, intent(in) :: LOcc_param
	real(kind=cp),dimension(3,12), intent(in) :: SkI_std_param
	character(len=4), intent(in) :: Utype_param
	real(kind=cp), intent(in) :: MBiso_param
	real(kind=cp), intent(in) :: Occ_param
	integer,dimension(12,12), intent(in) :: lbas_param
	real(kind=cp), intent(in) :: Charge_param
	character(len=4), intent(in) :: SfacSymb_param
	integer,      dimension(12), intent(in) :: imat_param
	integer,dimension(12), intent(in) :: lmphas_param
	real(kind=cp),dimension(12), intent(in) :: mphas_param
	real(kind=cp),dimension(3,12), intent(in) :: Spher_SkI_param
	real(kind=cp),dimension(3,12), intent(in) :: SkR_param
	integer,      dimension(3,12), intent(in) :: lskr_param
	character(len=10), intent(in) :: Lab_param
	real(kind=cp), intent(in) :: Moment_param
	integer,      dimension(6), intent(in) :: LU_param
	real(kind=cp), intent(in) :: MOcc_param
	logical, intent(in) :: Active_param
	real(kind=cp),dimension(3,12), intent(in) :: SkI_param
	integer, intent(in) :: Mult_param
	real(kind=cp),dimension(3,12), intent(in) :: Spher_SkR_std_param
	real(kind=cp),dimension(3), intent(in) :: X_Std_param
	real(kind=cp),dimension(6), intent(in) :: U_std_param
	integer,      dimension(3,12), intent(in) :: lski_param
	integer, intent(in) :: NVar_param
	character(len=1), intent(in) :: wyck_param
	real(kind=cp), intent(in) :: Biso_std_param
	integer, intent(in) :: LBiso_param
	real(kind=cp),dimension(12), intent(in) :: mphas_std_param
	real(kind=cp), intent(in) :: Biso_param
	real(kind=cp),dimension(10), intent(in) :: VarF_param
	real(kind=cp),dimension(6), intent(in) :: U_param
	real(kind=cp), intent(in) :: Occ_Std_param
	real(kind=cp),dimension(3), intent(in) :: X_param
	integer, intent(in) :: Z_param
	integer, intent(in) :: nvk_param
	real(kind=cp),dimension(12,12), intent(in) :: mbas_param
	real(kind=cp),dimension(3,12), intent(in) :: Spher_SkI_std_param
	real(kind=cp),dimension(3,12), intent(in) :: Spher_SkR_param
	real(kind=cp),dimension(3,12), intent(in) :: mSki_param
	real(kind=cp),dimension(3,12), intent(in) :: SkR_std_param
	real(kind=cp),dimension(6), intent(in) :: MU_param
	real(kind=cp),dimension(3,12), intent(in) :: mSkR_param
	integer,      dimension(3), intent(in) :: LX_param
	character(len=2), intent(in) :: ChemSymb_param
	real(kind=cp),dimension(12,12), intent(in) :: cbas_param
	integer, dimension(5), intent(in) :: Ind_param
	real(kind=cp),dimension(12,12), intent(in) :: cbas_std_param
	character(len=5), intent(in) :: ThType_param
	character(len=40), intent(in) :: AtmInfo_param
	real(kind=cp), intent(in) :: Ueq_param
	real(kind=cp),dimension(3), intent(in) :: MX_param
	mAtom_Type_param%mmphas = mmphas_param
	mAtom_Type_param%LOcc = LOcc_param
	mAtom_Type_param%SkI_std = SkI_std_param
	mAtom_Type_param%Utype = Utype_param
	mAtom_Type_param%MBiso = MBiso_param
	mAtom_Type_param%Occ = Occ_param
	mAtom_Type_param%lbas = lbas_param
	mAtom_Type_param%Charge = Charge_param
	mAtom_Type_param%SfacSymb = SfacSymb_param
	mAtom_Type_param%imat = imat_param
	mAtom_Type_param%lmphas = lmphas_param
	mAtom_Type_param%mphas = mphas_param
	mAtom_Type_param%Spher_SkI = Spher_SkI_param
	mAtom_Type_param%SkR = SkR_param
	mAtom_Type_param%lskr = lskr_param
	mAtom_Type_param%Lab = Lab_param
	mAtom_Type_param%Moment = Moment_param
	mAtom_Type_param%LU = LU_param
	mAtom_Type_param%MOcc = MOcc_param
	mAtom_Type_param%Active = Active_param
	mAtom_Type_param%SkI = SkI_param
	mAtom_Type_param%Mult = Mult_param
	mAtom_Type_param%Spher_SkR_std = Spher_SkR_std_param
	mAtom_Type_param%X_Std = X_Std_param
	mAtom_Type_param%U_std = U_std_param
	mAtom_Type_param%lski = lski_param
	mAtom_Type_param%NVar = NVar_param
	mAtom_Type_param%wyck = wyck_param
	mAtom_Type_param%Biso_std = Biso_std_param
	mAtom_Type_param%LBiso = LBiso_param
	mAtom_Type_param%mphas_std = mphas_std_param
	mAtom_Type_param%Biso = Biso_param
	mAtom_Type_param%VarF = VarF_param
	mAtom_Type_param%U = U_param
	mAtom_Type_param%Occ_Std = Occ_Std_param
	mAtom_Type_param%X = X_param
	mAtom_Type_param%Z = Z_param
	mAtom_Type_param%nvk = nvk_param
	mAtom_Type_param%mbas = mbas_param
	mAtom_Type_param%Spher_SkI_std = Spher_SkI_std_param
	mAtom_Type_param%Spher_SkR = Spher_SkR_param
	mAtom_Type_param%mSki = mSki_param
	mAtom_Type_param%SkR_std = SkR_std_param
	mAtom_Type_param%MU = MU_param
	mAtom_Type_param%mSkR = mSkR_param
	mAtom_Type_param%LX = LX_param
	mAtom_Type_param%ChemSymb = ChemSymb_param
	mAtom_Type_param%cbas = cbas_param
	mAtom_Type_param%Ind = Ind_param
	mAtom_Type_param%cbas_std = cbas_std_param
	mAtom_Type_param%ThType = ThType_param
	mAtom_Type_param%AtmInfo = AtmInfo_param
	mAtom_Type_param%Ueq = Ueq_param
	mAtom_Type_param%MX = MX_param
	end subroutine mAtom_Type_ctor
	function get_crystal_cell_lang(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	integer,      dimension(3) :: get_crystal_cell_lang
	get_crystal_cell_lang = obj_var%lang
	end function get_crystal_cell_lang
	
	subroutine set_crystal_cell_lang(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	integer,      dimension(3), intent(in) :: new_value
	obj_var%lang = new_value
	end subroutine set_crystal_cell_lang
	
	function get_crystal_cell_RCellVol(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp) :: get_crystal_cell_RCellVol
	get_crystal_cell_RCellVol = obj_var%RCellVol
	end function get_crystal_cell_RCellVol
	
	subroutine set_crystal_cell_RCellVol(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%RCellVol = new_value
	end subroutine set_crystal_cell_RCellVol
	
	function get_crystal_cell_cell_std(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_crystal_cell_cell_std
	get_crystal_cell_cell_std = obj_var%cell_std
	end function get_crystal_cell_cell_std
	
	subroutine set_crystal_cell_cell_std(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%cell_std = new_value
	end subroutine set_crystal_cell_cell_std
	
	function get_crystal_cell_ang(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_crystal_cell_ang
	get_crystal_cell_ang = obj_var%ang
	end function get_crystal_cell_ang
	
	subroutine set_crystal_cell_ang(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%ang = new_value
	end subroutine set_crystal_cell_ang
	
	function get_crystal_cell_BL_Minv(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3) :: get_crystal_cell_BL_Minv
	get_crystal_cell_BL_Minv = obj_var%BL_Minv
	end function get_crystal_cell_BL_Minv
	
	subroutine set_crystal_cell_BL_Minv(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3), intent(in) :: new_value
	obj_var%BL_Minv = new_value
	end subroutine set_crystal_cell_BL_Minv
	
	function get_crystal_cell_GR(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3) :: get_crystal_cell_GR
	get_crystal_cell_GR = obj_var%GR
	end function get_crystal_cell_GR
	
	subroutine set_crystal_cell_GR(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3), intent(in) :: new_value
	obj_var%GR = new_value
	end subroutine set_crystal_cell_GR
	
	function get_crystal_cell_Cr_Orth_cel(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3) :: get_crystal_cell_Cr_Orth_cel
	get_crystal_cell_Cr_Orth_cel = obj_var%Cr_Orth_cel
	end function get_crystal_cell_Cr_Orth_cel
	
	subroutine set_crystal_cell_Cr_Orth_cel(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3), intent(in) :: new_value
	obj_var%Cr_Orth_cel = new_value
	end subroutine set_crystal_cell_Cr_Orth_cel
	
	function get_crystal_cell_BL_M(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3) :: get_crystal_cell_BL_M
	get_crystal_cell_BL_M = obj_var%BL_M
	end function get_crystal_cell_BL_M
	
	subroutine set_crystal_cell_BL_M(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3), intent(in) :: new_value
	obj_var%BL_M = new_value
	end subroutine set_crystal_cell_BL_M
	
	function get_crystal_cell_Orth_Cr_cel(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3) :: get_crystal_cell_Orth_Cr_cel
	get_crystal_cell_Orth_Cr_cel = obj_var%Orth_Cr_cel
	end function get_crystal_cell_Orth_Cr_cel
	
	subroutine set_crystal_cell_Orth_Cr_cel(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3), intent(in) :: new_value
	obj_var%Orth_Cr_cel = new_value
	end subroutine set_crystal_cell_Orth_Cr_cel
	
	function get_crystal_cell_CartType(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	character (len=1) :: get_crystal_cell_CartType
	get_crystal_cell_CartType = obj_var%CartType
	end function get_crystal_cell_CartType
	
	subroutine set_crystal_cell_CartType(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	character (len=1), intent(in) :: new_value
	obj_var%CartType = new_value
	end subroutine set_crystal_cell_CartType
	
	function get_crystal_cell_rang(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_crystal_cell_rang
	get_crystal_cell_rang = obj_var%rang
	end function get_crystal_cell_rang
	
	subroutine set_crystal_cell_rang(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%rang = new_value
	end subroutine set_crystal_cell_rang
	
	function get_crystal_cell_rcell(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_crystal_cell_rcell
	get_crystal_cell_rcell = obj_var%rcell
	end function get_crystal_cell_rcell
	
	subroutine set_crystal_cell_rcell(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%rcell = new_value
	end subroutine set_crystal_cell_rcell
	
	function get_crystal_cell_cell(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_crystal_cell_cell
	get_crystal_cell_cell = obj_var%cell
	end function get_crystal_cell_cell
	
	subroutine set_crystal_cell_cell(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%cell = new_value
	end subroutine set_crystal_cell_cell
	
	function get_crystal_cell_GD(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3) :: get_crystal_cell_GD
	get_crystal_cell_GD = obj_var%GD
	end function get_crystal_cell_GD
	
	subroutine set_crystal_cell_GD(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3,3), intent(in) :: new_value
	obj_var%GD = new_value
	end subroutine set_crystal_cell_GD
	
	function get_crystal_cell_CellVol(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp) :: get_crystal_cell_CellVol
	get_crystal_cell_CellVol = obj_var%CellVol
	end function get_crystal_cell_CellVol
	
	subroutine set_crystal_cell_CellVol(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%CellVol = new_value
	end subroutine set_crystal_cell_CellVol
	
	function get_crystal_cell_ang_std(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3) :: get_crystal_cell_ang_std
	get_crystal_cell_ang_std = obj_var%ang_std
	end function get_crystal_cell_ang_std
	
	subroutine set_crystal_cell_ang_std(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	real(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%ang_std = new_value
	end subroutine set_crystal_cell_ang_std
	
	function get_crystal_cell_lcell(obj_var)
	type (Crystal_Cell_Type) :: obj_var
	integer,      dimension(3) :: get_crystal_cell_lcell
	get_crystal_cell_lcell = obj_var%lcell
	end function get_crystal_cell_lcell
	
	subroutine set_crystal_cell_lcell(obj_var, new_value)
	type (Crystal_Cell_Type) :: obj_var
	integer,      dimension(3), intent(in) :: new_value
	obj_var%lcell = new_value
	end subroutine set_crystal_cell_lcell
	
	subroutine Crystal_Cell_Type_ctor(Crystal_Cell_Type_param, lang_param, RCellVol_param, cell_std_param, ang_param, BL_Minv_param, GR_param, Cr_Orth_cel_param, BL_M_param, Orth_Cr_cel_param, CartType_param, rang_param, rcell_param, cell_param, GD_param, CellVol_param, ang_std_param, lcell_param)
	type (Crystal_Cell_Type) :: Crystal_Cell_Type_param
	integer,      dimension(3), intent(in) :: lang_param
	real(kind=cp), intent(in) :: RCellVol_param
	real(kind=cp),dimension(3), intent(in) :: cell_std_param
	real(kind=cp),dimension(3), intent(in) :: ang_param
	real(kind=cp),dimension(3,3), intent(in) :: BL_Minv_param
	real(kind=cp),dimension(3,3), intent(in) :: GR_param
	real(kind=cp),dimension(3,3), intent(in) :: Cr_Orth_cel_param
	real(kind=cp),dimension(3,3), intent(in) :: BL_M_param
	real(kind=cp),dimension(3,3), intent(in) :: Orth_Cr_cel_param
	character (len=1), intent(in) :: CartType_param
	real(kind=cp),dimension(3), intent(in) :: rang_param
	real(kind=cp),dimension(3), intent(in) :: rcell_param
	real(kind=cp),dimension(3), intent(in) :: cell_param
	real(kind=cp),dimension(3,3), intent(in) :: GD_param
	real(kind=cp), intent(in) :: CellVol_param
	real(kind=cp),dimension(3), intent(in) :: ang_std_param
	integer,      dimension(3), intent(in) :: lcell_param
	Crystal_Cell_Type_param%lang = lang_param
	Crystal_Cell_Type_param%RCellVol = RCellVol_param
	Crystal_Cell_Type_param%cell_std = cell_std_param
	Crystal_Cell_Type_param%ang = ang_param
	Crystal_Cell_Type_param%BL_Minv = BL_Minv_param
	Crystal_Cell_Type_param%GR = GR_param
	Crystal_Cell_Type_param%Cr_Orth_cel = Cr_Orth_cel_param
	Crystal_Cell_Type_param%BL_M = BL_M_param
	Crystal_Cell_Type_param%Orth_Cr_cel = Orth_Cr_cel_param
	Crystal_Cell_Type_param%CartType = CartType_param
	Crystal_Cell_Type_param%rang = rang_param
	Crystal_Cell_Type_param%rcell = rcell_param
	Crystal_Cell_Type_param%cell = cell_param
	Crystal_Cell_Type_param%GD = GD_param
	Crystal_Cell_Type_param%CellVol = CellVol_param
	Crystal_Cell_Type_param%ang_std = ang_std_param
	Crystal_Cell_Type_param%lcell = lcell_param
	end subroutine Crystal_Cell_Type_ctor
	function get_twofold_axes_a(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_twofold_axes_a
	get_twofold_axes_a = obj_var%a
	end function get_twofold_axes_a
	
	subroutine set_twofold_axes_a(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%a = new_value
	end subroutine set_twofold_axes_a
	
	function get_twofold_axes_c(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_twofold_axes_c
	get_twofold_axes_c = obj_var%c
	end function get_twofold_axes_c
	
	subroutine set_twofold_axes_c(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%c = new_value
	end subroutine set_twofold_axes_c
	
	function get_twofold_axes_b(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_twofold_axes_b
	get_twofold_axes_b = obj_var%b
	end function get_twofold_axes_b
	
	subroutine set_twofold_axes_b(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%b = new_value
	end subroutine set_twofold_axes_b
	
	function get_twofold_axes_maxes(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(12) :: get_twofold_axes_maxes
	get_twofold_axes_maxes = obj_var%maxes
	end function get_twofold_axes_maxes
	
	subroutine set_twofold_axes_maxes(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(12), intent(in) :: new_value
	obj_var%maxes = new_value
	end subroutine set_twofold_axes_maxes
	
	function get_twofold_axes_ntwo(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	integer :: get_twofold_axes_ntwo
	get_twofold_axes_ntwo = obj_var%ntwo
	end function get_twofold_axes_ntwo
	
	subroutine set_twofold_axes_ntwo(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%ntwo = new_value
	end subroutine set_twofold_axes_ntwo
	
	function get_twofold_axes_cross(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(12) :: get_twofold_axes_cross
	get_twofold_axes_cross = obj_var%cross
	end function get_twofold_axes_cross
	
	subroutine set_twofold_axes_cross(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), dimension(12), intent(in) :: new_value
	obj_var%cross = new_value
	end subroutine set_twofold_axes_cross
	
	function get_twofold_axes_tol(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp) :: get_twofold_axes_tol
	get_twofold_axes_tol = obj_var%tol
	end function get_twofold_axes_tol
	
	subroutine set_twofold_axes_tol(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%tol = new_value
	end subroutine set_twofold_axes_tol
	
	function get_twofold_axes_rtwofold(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	integer,dimension(3,12) :: get_twofold_axes_rtwofold
	get_twofold_axes_rtwofold = obj_var%rtwofold
	end function get_twofold_axes_rtwofold
	
	subroutine set_twofold_axes_rtwofold(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	integer,dimension(3,12), intent(in) :: new_value
	obj_var%rtwofold = new_value
	end subroutine set_twofold_axes_rtwofold
	
	function get_twofold_axes_caxes(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp) ,dimension(3,12) :: get_twofold_axes_caxes
	get_twofold_axes_caxes = obj_var%caxes
	end function get_twofold_axes_caxes
	
	subroutine set_twofold_axes_caxes(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	real(kind=cp) ,dimension(3,12), intent(in) :: new_value
	obj_var%caxes = new_value
	end subroutine set_twofold_axes_caxes
	
	function get_twofold_axes_dot(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	integer,dimension(12) :: get_twofold_axes_dot
	get_twofold_axes_dot = obj_var%dot
	end function get_twofold_axes_dot
	
	subroutine set_twofold_axes_dot(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	integer,dimension(12), intent(in) :: new_value
	obj_var%dot = new_value
	end subroutine set_twofold_axes_dot
	
	function get_twofold_axes_dtwofold(obj_var)
	type (Twofold_Axes_Type) :: obj_var
	integer,dimension(3,12) :: get_twofold_axes_dtwofold
	get_twofold_axes_dtwofold = obj_var%dtwofold
	end function get_twofold_axes_dtwofold
	
	subroutine set_twofold_axes_dtwofold(obj_var, new_value)
	type (Twofold_Axes_Type) :: obj_var
	integer,dimension(3,12), intent(in) :: new_value
	obj_var%dtwofold = new_value
	end subroutine set_twofold_axes_dtwofold
	
	subroutine Twofold_Axes_Type_ctor(Twofold_Axes_Type_param, a_param, c_param, b_param, maxes_param, ntwo_param, cross_param, tol_param, rtwofold_param, caxes_param, dot_param, dtwofold_param)
	type (Twofold_Axes_Type) :: Twofold_Axes_Type_param
	real(kind=cp), dimension(3), intent(in) :: a_param
	real(kind=cp), dimension(3), intent(in) :: c_param
	real(kind=cp), dimension(3), intent(in) :: b_param
	real(kind=cp), dimension(12), intent(in) :: maxes_param
	integer, intent(in) :: ntwo_param
	real(kind=cp), dimension(12), intent(in) :: cross_param
	real(kind=cp), intent(in) :: tol_param
	integer,dimension(3,12), intent(in) :: rtwofold_param
	real(kind=cp) ,dimension(3,12), intent(in) :: caxes_param
	integer,dimension(12), intent(in) :: dot_param
	integer,dimension(3,12), intent(in) :: dtwofold_param
	Twofold_Axes_Type_param%a = a_param
	Twofold_Axes_Type_param%c = c_param
	Twofold_Axes_Type_param%b = b_param
	Twofold_Axes_Type_param%maxes = maxes_param
	Twofold_Axes_Type_param%ntwo = ntwo_param
	Twofold_Axes_Type_param%cross = cross_param
	Twofold_Axes_Type_param%tol = tol_param
	Twofold_Axes_Type_param%rtwofold = rtwofold_param
	Twofold_Axes_Type_param%caxes = caxes_param
	Twofold_Axes_Type_param%dot = dot_param
	Twofold_Axes_Type_param%dtwofold = dtwofold_param
	end subroutine Twofold_Axes_Type_ctor
	function get_zone_axis_nlayer(obj_var)
	type (Zone_Axis_Type) :: obj_var
	Integer :: get_zone_axis_nlayer
	get_zone_axis_nlayer = obj_var%nlayer
	end function get_zone_axis_nlayer
	
	subroutine set_zone_axis_nlayer(obj_var, new_value)
	type (Zone_Axis_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%nlayer = new_value
	end subroutine set_zone_axis_nlayer
	
	function get_zone_axis_rx(obj_var)
	type (Zone_Axis_Type) :: obj_var
	Integer, dimension(3) :: get_zone_axis_rx
	get_zone_axis_rx = obj_var%rx
	end function get_zone_axis_rx
	
	subroutine set_zone_axis_rx(obj_var, new_value)
	type (Zone_Axis_Type) :: obj_var
	Integer, dimension(3), intent(in) :: new_value
	obj_var%rx = new_value
	end subroutine set_zone_axis_rx
	
	function get_zone_axis_ry(obj_var)
	type (Zone_Axis_Type) :: obj_var
	Integer, dimension(3) :: get_zone_axis_ry
	get_zone_axis_ry = obj_var%ry
	end function get_zone_axis_ry
	
	subroutine set_zone_axis_ry(obj_var, new_value)
	type (Zone_Axis_Type) :: obj_var
	Integer, dimension(3), intent(in) :: new_value
	obj_var%ry = new_value
	end subroutine set_zone_axis_ry
	
	function get_zone_axis_uvw(obj_var)
	type (Zone_Axis_Type) :: obj_var
	Integer, dimension(3) :: get_zone_axis_uvw
	get_zone_axis_uvw = obj_var%uvw
	end function get_zone_axis_uvw
	
	subroutine set_zone_axis_uvw(obj_var, new_value)
	type (Zone_Axis_Type) :: obj_var
	Integer, dimension(3), intent(in) :: new_value
	obj_var%uvw = new_value
	end subroutine set_zone_axis_uvw
	
	subroutine Zone_Axis_Type_ctor(Zone_Axis_Type_param, nlayer_param, rx_param, ry_param, uvw_param)
	type (Zone_Axis_Type) :: Zone_Axis_Type_param
	Integer, intent(in) :: nlayer_param
	Integer, dimension(3), intent(in) :: rx_param
	Integer, dimension(3), intent(in) :: ry_param
	Integer, dimension(3), intent(in) :: uvw_param
	Zone_Axis_Type_param%nlayer = nlayer_param
	Zone_Axis_Type_param%rx = rx_param
	Zone_Axis_Type_param%ry = ry_param
	Zone_Axis_Type_param%uvw = uvw_param
	end subroutine Zone_Axis_Type_ctor
	function get_file_list_line(obj_var)
	type (File_List_Type) :: obj_var
	character(len=256), allocatable, dimension(:) :: get_file_list_line
	get_file_list_line = obj_var%line
	end function get_file_list_line
	
	subroutine set_file_list_line(obj_var, new_value)
	type (File_List_Type) :: obj_var
	character(len=256), allocatable, dimension(:), intent(in) :: new_value
	obj_var%line = new_value
	end subroutine set_file_list_line
	
	function get_file_list_nlines(obj_var)
	type (File_List_Type) :: obj_var
	integer :: get_file_list_nlines
	get_file_list_nlines = obj_var%nlines
	end function get_file_list_nlines
	
	subroutine set_file_list_nlines(obj_var, new_value)
	type (File_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nlines = new_value
	end subroutine set_file_list_nlines
	
	subroutine File_List_Type_ctor(File_List_Type_param, line_param, nlines_param)
	type (File_List_Type) :: File_List_Type_param
	character(len=256), allocatable, dimension(:), intent(in) :: line_param
	integer, intent(in) :: nlines_param
	File_List_Type_param%line = line_param
	File_List_Type_param%nlines = nlines_param
	end subroutine File_List_Type_ctor
	function get_job_info_dtt1(obj_var)
	type (Job_Info_type) :: obj_var
	real(kind=cp)      ,dimension(:), allocatable :: get_job_info_dtt1
	get_job_info_dtt1 = obj_var%dtt1
	end function get_job_info_dtt1
	
	subroutine set_job_info_dtt1(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	real(kind=cp)      ,dimension(:), allocatable, intent(in) :: new_value
	obj_var%dtt1 = new_value
	end subroutine set_job_info_dtt1
	
	function get_job_info_dtt2(obj_var)
	type (Job_Info_type) :: obj_var
	real(kind=cp)      ,dimension(:), allocatable :: get_job_info_dtt2
	get_job_info_dtt2 = obj_var%dtt2
	end function get_job_info_dtt2
	
	subroutine set_job_info_dtt2(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	real(kind=cp)      ,dimension(:), allocatable, intent(in) :: new_value
	obj_var%dtt2 = new_value
	end subroutine set_job_info_dtt2
	
	function get_job_info_range_2theta(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_range_2theta
	get_job_info_range_2theta = obj_var%range_2theta
	end function get_job_info_range_2theta
	
	subroutine set_job_info_range_2theta(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%range_2theta = new_value
	end subroutine set_job_info_range_2theta
	
	function get_job_info_Title(obj_var)
	type (Job_Info_type) :: obj_var
	character(len=120) :: get_job_info_Title
	get_job_info_Title = obj_var%Title
	end function get_job_info_Title
	
	subroutine set_job_info_Title(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	character(len=120), intent(in) :: new_value
	obj_var%Title = new_value
	end subroutine set_job_info_Title
	
	function get_job_info_range_tof(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_range_tof
	get_job_info_range_tof = obj_var%range_tof
	end function get_job_info_range_tof
	
	subroutine set_job_info_range_tof(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%range_tof = new_value
	end subroutine set_job_info_range_tof
	
	function get_job_info_Num_Phases(obj_var)
	type (Job_Info_type) :: obj_var
	integer :: get_job_info_Num_Phases
	get_job_info_Num_Phases = obj_var%Num_Phases
	end function get_job_info_Num_Phases
	
	subroutine set_job_info_Num_Phases(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_Phases = new_value
	end subroutine set_job_info_Num_Phases
	
	function get_job_info_cmd(obj_var)
	type (Job_Info_type) :: obj_var
	character(len=128), dimension(:), allocatable :: get_job_info_cmd
	get_job_info_cmd = obj_var%cmd
	end function get_job_info_cmd
	
	subroutine set_job_info_cmd(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	character(len=128), dimension(:), allocatable, intent(in) :: new_value
	obj_var%cmd = new_value
	end subroutine set_job_info_cmd
	
	function get_job_info_range_stl(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_range_stl
	get_job_info_range_stl = obj_var%range_stl
	end function get_job_info_range_stl
	
	subroutine set_job_info_range_stl(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%range_stl = new_value
	end subroutine set_job_info_range_stl
	
	function get_job_info_range_d(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_range_d
	get_job_info_range_d = obj_var%range_d
	end function get_job_info_range_d
	
	subroutine set_job_info_range_d(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%range_d = new_value
	end subroutine set_job_info_range_d
	
	function get_job_info_Num_Patterns(obj_var)
	type (Job_Info_type) :: obj_var
	integer :: get_job_info_Num_Patterns
	get_job_info_Num_Patterns = obj_var%Num_Patterns
	end function get_job_info_Num_Patterns
	
	subroutine set_job_info_Num_Patterns(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_Patterns = new_value
	end subroutine set_job_info_Num_Patterns
	
	function get_job_info_Patt_typ(obj_var)
	type (Job_Info_type) :: obj_var
	character(len=16),  dimension(:), allocatable :: get_job_info_Patt_typ
	get_job_info_Patt_typ = obj_var%Patt_typ
	end function get_job_info_Patt_typ
	
	subroutine set_job_info_Patt_typ(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	character(len=16),  dimension(:), allocatable, intent(in) :: new_value
	obj_var%Patt_typ = new_value
	end subroutine set_job_info_Patt_typ
	
	function get_job_info_Phas_nam(obj_var)
	type (Job_Info_type) :: obj_var
	character(len=128), dimension(:), allocatable :: get_job_info_Phas_nam
	get_job_info_Phas_nam = obj_var%Phas_nam
	end function get_job_info_Phas_nam
	
	subroutine set_job_info_Phas_nam(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	character(len=128), dimension(:), allocatable, intent(in) :: new_value
	obj_var%Phas_nam = new_value
	end subroutine set_job_info_Phas_nam
	
	function get_job_info_Num_cmd(obj_var)
	type (Job_Info_type) :: obj_var
	integer :: get_job_info_Num_cmd
	get_job_info_Num_cmd = obj_var%Num_cmd
	end function get_job_info_Num_cmd
	
	subroutine set_job_info_Num_cmd(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_cmd = new_value
	end subroutine set_job_info_Num_cmd
	
	function get_job_info_range_q(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_range_q
	get_job_info_range_q = obj_var%range_q
	end function get_job_info_range_q
	
	subroutine set_job_info_range_q(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%range_q = new_value
	end subroutine set_job_info_range_q
	
	function get_job_info_ratio(obj_var)
	type (Job_Info_type) :: obj_var
	real(kind=cp)      ,dimension(:), allocatable :: get_job_info_ratio
	get_job_info_ratio = obj_var%ratio
	end function get_job_info_ratio
	
	subroutine set_job_info_ratio(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	real(kind=cp)      ,dimension(:), allocatable, intent(in) :: new_value
	obj_var%ratio = new_value
	end subroutine set_job_info_ratio
	
	function get_job_info_range_Energy(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_range_Energy
	get_job_info_range_Energy = obj_var%range_Energy
	end function get_job_info_range_Energy
	
	subroutine set_job_info_range_Energy(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%range_Energy = new_value
	end subroutine set_job_info_range_Energy
	
	function get_job_info_Lambda(obj_var)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable :: get_job_info_Lambda
	get_job_info_Lambda = obj_var%Lambda
	end function get_job_info_Lambda
	
	subroutine set_job_info_Lambda(obj_var, new_value)
	type (Job_Info_type) :: obj_var
	type(interval_type),dimension(:), allocatable, intent(in) :: new_value
	obj_var%Lambda = new_value
	end subroutine set_job_info_Lambda
	
	subroutine Job_Info_type_ctor(Job_Info_type_param, dtt1_param, dtt2_param, range_2theta_param, Title_param, range_tof_param, Num_Phases_param, cmd_param, range_stl_param, range_d_param, Num_Patterns_param, Patt_typ_param, Phas_nam_param, Num_cmd_param, range_q_param, ratio_param, range_Energy_param, Lambda_param)
	type (Job_Info_type) :: Job_Info_type_param
	real(kind=cp)      ,dimension(:), allocatable, intent(in) :: dtt1_param
	real(kind=cp)      ,dimension(:), allocatable, intent(in) :: dtt2_param
	type(interval_type),dimension(:), allocatable, intent(in) :: range_2theta_param
	character(len=120), intent(in) :: Title_param
	type(interval_type),dimension(:), allocatable, intent(in) :: range_tof_param
	integer, intent(in) :: Num_Phases_param
	character(len=128), dimension(:), allocatable, intent(in) :: cmd_param
	type(interval_type),dimension(:), allocatable, intent(in) :: range_stl_param
	type(interval_type),dimension(:), allocatable, intent(in) :: range_d_param
	integer, intent(in) :: Num_Patterns_param
	character(len=16),  dimension(:), allocatable, intent(in) :: Patt_typ_param
	character(len=128), dimension(:), allocatable, intent(in) :: Phas_nam_param
	integer, intent(in) :: Num_cmd_param
	type(interval_type),dimension(:), allocatable, intent(in) :: range_q_param
	real(kind=cp)      ,dimension(:), allocatable, intent(in) :: ratio_param
	type(interval_type),dimension(:), allocatable, intent(in) :: range_Energy_param
	type(interval_type),dimension(:), allocatable, intent(in) :: Lambda_param
	Job_Info_type_param%dtt1 = dtt1_param
	Job_Info_type_param%dtt2 = dtt2_param
	Job_Info_type_param%range_2theta = range_2theta_param
	Job_Info_type_param%Title = Title_param
	Job_Info_type_param%range_tof = range_tof_param
	Job_Info_type_param%Num_Phases = Num_Phases_param
	Job_Info_type_param%cmd = cmd_param
	Job_Info_type_param%range_stl = range_stl_param
	Job_Info_type_param%range_d = range_d_param
	Job_Info_type_param%Num_Patterns = Num_Patterns_param
	Job_Info_type_param%Patt_typ = Patt_typ_param
	Job_Info_type_param%Phas_nam = Phas_nam_param
	Job_Info_type_param%Num_cmd = Num_cmd_param
	Job_Info_type_param%range_q = range_q_param
	Job_Info_type_param%ratio = ratio_param
	Job_Info_type_param%range_Energy = range_Energy_param
	Job_Info_type_param%Lambda = Lambda_param
	end subroutine Job_Info_type_ctor
	function get_interval_maxb(obj_var)
	type (interval_type) :: obj_var
	real(kind=cp) :: get_interval_maxb
	get_interval_maxb = obj_var%maxb
	end function get_interval_maxb
	
	subroutine set_interval_maxb(obj_var, new_value)
	type (interval_type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%maxb = new_value
	end subroutine set_interval_maxb
	
	function get_interval_mina(obj_var)
	type (interval_type) :: obj_var
	real(kind=cp) :: get_interval_mina
	get_interval_mina = obj_var%mina
	end function get_interval_mina
	
	subroutine set_interval_mina(obj_var, new_value)
	type (interval_type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%mina = new_value
	end subroutine set_interval_mina
	
	subroutine interval_type_ctor(interval_type_param, maxb_param, mina_param)
	type (interval_type) :: interval_type_param
	real(kind=cp), intent(in) :: maxb_param
	real(kind=cp), intent(in) :: mina_param
	interval_type_param%maxb = maxb_param
	interval_type_param%mina = mina_param
	end subroutine interval_type_ctor
	function get_msym_oper_Phas(obj_var)
	type (MSym_Oper_Type) :: obj_var
	real(kind=cp) :: get_msym_oper_Phas
	get_msym_oper_Phas = obj_var%Phas
	end function get_msym_oper_Phas
	
	subroutine set_msym_oper_Phas(obj_var, new_value)
	type (MSym_Oper_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Phas = new_value
	end subroutine set_msym_oper_Phas
	
	function get_msym_oper_Rot(obj_var)
	type (MSym_Oper_Type) :: obj_var
	integer, dimension(3,3) :: get_msym_oper_Rot
	get_msym_oper_Rot = obj_var%Rot
	end function get_msym_oper_Rot
	
	subroutine set_msym_oper_Rot(obj_var, new_value)
	type (MSym_Oper_Type) :: obj_var
	integer, dimension(3,3), intent(in) :: new_value
	obj_var%Rot = new_value
	end subroutine set_msym_oper_Rot
	
	subroutine MSym_Oper_Type_ctor(MSym_Oper_Type_param, Phas_param, Rot_param)
	type (MSym_Oper_Type) :: MSym_Oper_Type_param
	real(kind=cp), intent(in) :: Phas_param
	integer, dimension(3,3), intent(in) :: Rot_param
	MSym_Oper_Type_param%Phas = Phas_param
	MSym_Oper_Type_param%Rot = Rot_param
	end subroutine MSym_Oper_Type_ctor
	function get_magsymm_k_Latt(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=1) :: get_magsymm_k_Latt
	get_magsymm_k_Latt = obj_var%Latt
	end function get_magsymm_k_Latt
	
	subroutine set_magsymm_k_Latt(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=1), intent(in) :: new_value
	obj_var%Latt = new_value
	end subroutine set_magsymm_k_Latt
	
	function get_magsymm_k_SymopSymb(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=40),   dimension(:),   allocatable :: get_magsymm_k_SymopSymb
	get_magsymm_k_SymopSymb = obj_var%SymopSymb
	end function get_magsymm_k_SymopSymb
	
	subroutine set_magsymm_k_SymopSymb(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=40),   dimension(:),   allocatable, intent(in) :: new_value
	obj_var%SymopSymb = new_value
	end subroutine set_magsymm_k_SymopSymb
	
	function get_magsymm_k_MSymopSymb(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=40),   dimension(:,:), allocatable :: get_magsymm_k_MSymopSymb
	get_magsymm_k_MSymopSymb = obj_var%MSymopSymb
	end function get_magsymm_k_MSymopSymb
	
	subroutine set_magsymm_k_MSymopSymb(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=40),   dimension(:,:), allocatable, intent(in) :: new_value
	obj_var%MSymopSymb = new_value
	end subroutine set_magsymm_k_MSymopSymb
	
	function get_magsymm_k_Numops(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_Numops
	get_magsymm_k_Numops = obj_var%Numops
	end function get_magsymm_k_Numops
	
	subroutine set_magsymm_k_Numops(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Numops = new_value
	end subroutine set_magsymm_k_Numops
	
	function get_magsymm_k_BNS_symbol(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Character(len=34) :: get_magsymm_k_BNS_symbol
	get_magsymm_k_BNS_symbol = obj_var%BNS_symbol
	end function get_magsymm_k_BNS_symbol
	
	subroutine set_magsymm_k_BNS_symbol(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Character(len=34), intent(in) :: new_value
	obj_var%BNS_symbol = new_value
	end subroutine set_magsymm_k_BNS_symbol
	
	function get_magsymm_k_BNS_number(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=15) :: get_magsymm_k_BNS_number
	get_magsymm_k_BNS_number = obj_var%BNS_number
	end function get_magsymm_k_BNS_number
	
	subroutine set_magsymm_k_BNS_number(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=15), intent(in) :: new_value
	obj_var%BNS_number = new_value
	end subroutine set_magsymm_k_BNS_number
	
	function get_magsymm_k_mcentred(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_mcentred
	get_magsymm_k_mcentred = obj_var%mcentred
	end function get_magsymm_k_mcentred
	
	subroutine set_magsymm_k_mcentred(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%mcentred = new_value
	end subroutine set_magsymm_k_mcentred
	
	function get_magsymm_k_MagModel(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=31) :: get_magsymm_k_MagModel
	get_magsymm_k_MagModel = obj_var%MagModel
	end function get_magsymm_k_MagModel
	
	subroutine set_magsymm_k_MagModel(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=31), intent(in) :: new_value
	obj_var%MagModel = new_value
	end subroutine set_magsymm_k_MagModel
	
	function get_magsymm_k_kvec(obj_var)
	type (MagSymm_k_Type) :: obj_var
	real(kind=cp),dimension(3,12) :: get_magsymm_k_kvec
	get_magsymm_k_kvec = obj_var%kvec
	end function get_magsymm_k_kvec
	
	subroutine set_magsymm_k_kvec(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	real(kind=cp),dimension(3,12), intent(in) :: new_value
	obj_var%kvec = new_value
	end subroutine set_magsymm_k_kvec
	
	function get_magsymm_k_nmsym(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_nmsym
	get_magsymm_k_nmsym = obj_var%nmsym
	end function get_magsymm_k_nmsym
	
	subroutine set_magsymm_k_nmsym(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nmsym = new_value
	end subroutine set_magsymm_k_nmsym
	
	function get_magsymm_k_MSymOp(obj_var)
	type (MagSymm_k_Type) :: obj_var
	type(MSym_Oper_Type),dimension(:,:), allocatable :: get_magsymm_k_MSymOp
	get_magsymm_k_MSymOp = obj_var%MSymOp
	end function get_magsymm_k_MSymOp
	
	subroutine set_magsymm_k_MSymOp(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	type(MSym_Oper_Type),dimension(:,:), allocatable, intent(in) :: new_value
	obj_var%MSymOp = new_value
	end subroutine set_magsymm_k_MSymOp
	
	function get_magsymm_k_Num_Lat(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_Num_Lat
	get_magsymm_k_Num_Lat = obj_var%Num_Lat
	end function get_magsymm_k_Num_Lat
	
	subroutine set_magsymm_k_Num_Lat(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_Lat = new_value
	end subroutine set_magsymm_k_Num_Lat
	
	function get_magsymm_k_irrep_action(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Character(len=20),   dimension(4) :: get_magsymm_k_irrep_action
	get_magsymm_k_irrep_action = obj_var%irrep_action
	end function get_magsymm_k_irrep_action
	
	subroutine set_magsymm_k_irrep_action(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Character(len=20),   dimension(4), intent(in) :: new_value
	obj_var%irrep_action = new_value
	end subroutine set_magsymm_k_irrep_action
	
	function get_magsymm_k_small_irrep_dim(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Integer,             dimension(4) :: get_magsymm_k_small_irrep_dim
	get_magsymm_k_small_irrep_dim = obj_var%small_irrep_dim
	end function get_magsymm_k_small_irrep_dim
	
	subroutine set_magsymm_k_small_irrep_dim(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Integer,             dimension(4), intent(in) :: new_value
	obj_var%small_irrep_dim = new_value
	end subroutine set_magsymm_k_small_irrep_dim
	
	function get_magsymm_k_Ltr(obj_var)
	type (MagSymm_k_Type) :: obj_var
	real(kind=cp), dimension(3,4) :: get_magsymm_k_Ltr
	get_magsymm_k_Ltr = obj_var%Ltr
	end function get_magsymm_k_Ltr
	
	subroutine set_magsymm_k_Ltr(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	real(kind=cp), dimension(3,4), intent(in) :: new_value
	obj_var%Ltr = new_value
	end subroutine set_magsymm_k_Ltr
	
	function get_magsymm_k_Parent_num(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Integer :: get_magsymm_k_Parent_num
	get_magsymm_k_Parent_num = obj_var%Parent_num
	end function get_magsymm_k_Parent_num
	
	subroutine set_magsymm_k_Parent_num(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%Parent_num = new_value
	end subroutine set_magsymm_k_Parent_num
	
	function get_magsymm_k_Sk_type(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=15) :: get_magsymm_k_Sk_type
	get_magsymm_k_Sk_type = obj_var%Sk_type
	end function get_magsymm_k_Sk_type
	
	subroutine set_magsymm_k_Sk_type(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=15), intent(in) :: new_value
	obj_var%Sk_type = new_value
	end subroutine set_magsymm_k_Sk_type
	
	function get_magsymm_k_nirreps(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_nirreps
	get_magsymm_k_nirreps = obj_var%nirreps
	end function get_magsymm_k_nirreps
	
	subroutine set_magsymm_k_nirreps(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nirreps = new_value
	end subroutine set_magsymm_k_nirreps
	
	function get_magsymm_k_MagType(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Integer :: get_magsymm_k_MagType
	get_magsymm_k_MagType = obj_var%MagType
	end function get_magsymm_k_MagType
	
	subroutine set_magsymm_k_MagType(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%MagType = new_value
	end subroutine set_magsymm_k_MagType
	
	function get_magsymm_k_OG_number(obj_var)
	type (MagSymm_k_Type) :: obj_var
	character(len=15) :: get_magsymm_k_OG_number
	get_magsymm_k_OG_number = obj_var%OG_number
	end function get_magsymm_k_OG_number
	
	subroutine set_magsymm_k_OG_number(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	character(len=15), intent(in) :: new_value
	obj_var%OG_number = new_value
	end subroutine set_magsymm_k_OG_number
	
	function get_magsymm_k_irrep_dim(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Integer,             dimension(4) :: get_magsymm_k_irrep_dim
	get_magsymm_k_irrep_dim = obj_var%irrep_dim
	end function get_magsymm_k_irrep_dim
	
	subroutine set_magsymm_k_irrep_dim(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Integer,             dimension(4), intent(in) :: new_value
	obj_var%irrep_dim = new_value
	end subroutine set_magsymm_k_irrep_dim
	
	function get_magsymm_k_irrep_modes_number(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Integer,             dimension(4) :: get_magsymm_k_irrep_modes_number
	get_magsymm_k_irrep_modes_number = obj_var%irrep_modes_number
	end function get_magsymm_k_irrep_modes_number
	
	subroutine set_magsymm_k_irrep_modes_number(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Integer,             dimension(4), intent(in) :: new_value
	obj_var%irrep_modes_number = new_value
	end subroutine set_magsymm_k_irrep_modes_number
	
	function get_magsymm_k_nkv(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_nkv
	get_magsymm_k_nkv = obj_var%nkv
	end function get_magsymm_k_nkv
	
	subroutine set_magsymm_k_nkv(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nkv = new_value
	end subroutine set_magsymm_k_nkv
	
	function get_magsymm_k_irrep_direction(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Character(len=20),   dimension(4) :: get_magsymm_k_irrep_direction
	get_magsymm_k_irrep_direction = obj_var%irrep_direction
	end function get_magsymm_k_irrep_direction
	
	subroutine set_magsymm_k_irrep_direction(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Character(len=20),   dimension(4), intent(in) :: new_value
	obj_var%irrep_direction = new_value
	end subroutine set_magsymm_k_irrep_direction
	
	function get_magsymm_k_centred(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_centred
	get_magsymm_k_centred = obj_var%centred
	end function get_magsymm_k_centred
	
	subroutine set_magsymm_k_centred(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%centred = new_value
	end subroutine set_magsymm_k_centred
	
	function get_magsymm_k_basf(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Complex(kind=cp),    dimension(3,12,48,4) :: get_magsymm_k_basf
	get_magsymm_k_basf = obj_var%basf
	end function get_magsymm_k_basf
	
	subroutine set_magsymm_k_basf(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Complex(kind=cp),    dimension(3,12,48,4), intent(in) :: new_value
	obj_var%basf = new_value
	end subroutine set_magsymm_k_basf
	
	function get_magsymm_k_Parent_spg(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Character(len=20) :: get_magsymm_k_Parent_spg
	get_magsymm_k_Parent_spg = obj_var%Parent_spg
	end function get_magsymm_k_Parent_spg
	
	subroutine set_magsymm_k_Parent_spg(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Character(len=20), intent(in) :: new_value
	obj_var%Parent_spg = new_value
	end subroutine set_magsymm_k_Parent_spg
	
	function get_magsymm_k_OG_symbol(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Character(len=34) :: get_magsymm_k_OG_symbol
	get_magsymm_k_OG_symbol = obj_var%OG_symbol
	end function get_magsymm_k_OG_symbol
	
	subroutine set_magsymm_k_OG_symbol(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Character(len=34), intent(in) :: new_value
	obj_var%OG_symbol = new_value
	end subroutine set_magsymm_k_OG_symbol
	
	function get_magsymm_k_SymOp(obj_var)
	type (MagSymm_k_Type) :: obj_var
	type(Sym_Oper_Type), dimension(:),   allocatable :: get_magsymm_k_SymOp
	get_magsymm_k_SymOp = obj_var%SymOp
	end function get_magsymm_k_SymOp
	
	subroutine set_magsymm_k_SymOp(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	type(Sym_Oper_Type), dimension(:),   allocatable, intent(in) :: new_value
	obj_var%SymOp = new_value
	end subroutine set_magsymm_k_SymOp
	
	function get_magsymm_k_irrep_id(obj_var)
	type (MagSymm_k_Type) :: obj_var
	Character(len=15),   dimension(4) :: get_magsymm_k_irrep_id
	get_magsymm_k_irrep_id = obj_var%irrep_id
	end function get_magsymm_k_irrep_id
	
	subroutine set_magsymm_k_irrep_id(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	Character(len=15),   dimension(4), intent(in) :: new_value
	obj_var%irrep_id = new_value
	end subroutine set_magsymm_k_irrep_id
	
	function get_magsymm_k_nbas(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer,             dimension(4) :: get_magsymm_k_nbas
	get_magsymm_k_nbas = obj_var%nbas
	end function get_magsymm_k_nbas
	
	subroutine set_magsymm_k_nbas(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer,             dimension(4), intent(in) :: new_value
	obj_var%nbas = new_value
	end subroutine set_magsymm_k_nbas
	
	function get_magsymm_k_icomp(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer,             dimension(12,4) :: get_magsymm_k_icomp
	get_magsymm_k_icomp = obj_var%icomp
	end function get_magsymm_k_icomp
	
	subroutine set_magsymm_k_icomp(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer,             dimension(12,4), intent(in) :: new_value
	obj_var%icomp = new_value
	end subroutine set_magsymm_k_icomp
	
	function get_magsymm_k_Multip(obj_var)
	type (MagSymm_k_Type) :: obj_var
	integer :: get_magsymm_k_Multip
	get_magsymm_k_Multip = obj_var%Multip
	end function get_magsymm_k_Multip
	
	subroutine set_magsymm_k_Multip(obj_var, new_value)
	type (MagSymm_k_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Multip = new_value
	end subroutine set_magsymm_k_Multip
	
	subroutine MagSymm_k_Type_ctor(MagSymm_k_Type_param, Latt_param, SymopSymb_param, MSymopSymb_param, Numops_param, BNS_symbol_param, BNS_number_param, mcentred_param, MagModel_param, kvec_param, nmsym_param, MSymOp_param, Num_Lat_param, irrep_action_param, small_irrep_dim_param, Ltr_param, Parent_num_param, Sk_type_param, nirreps_param, MagType_param, OG_number_param, irrep_dim_param, irrep_modes_number_param, nkv_param, irrep_direction_param, centred_param, basf_param, Parent_spg_param, OG_symbol_param, SymOp_param, irrep_id_param, nbas_param, icomp_param, Multip_param)
	type (MagSymm_k_Type) :: MagSymm_k_Type_param
	character(len=1), intent(in) :: Latt_param
	character(len=40),   dimension(:),   allocatable, intent(in) :: SymopSymb_param
	character(len=40),   dimension(:,:), allocatable, intent(in) :: MSymopSymb_param
	integer, intent(in) :: Numops_param
	Character(len=34), intent(in) :: BNS_symbol_param
	character(len=15), intent(in) :: BNS_number_param
	integer, intent(in) :: mcentred_param
	character(len=31), intent(in) :: MagModel_param
	real(kind=cp),dimension(3,12), intent(in) :: kvec_param
	integer, intent(in) :: nmsym_param
	type(MSym_Oper_Type),dimension(:,:), allocatable, intent(in) :: MSymOp_param
	integer, intent(in) :: Num_Lat_param
	Character(len=20),   dimension(4), intent(in) :: irrep_action_param
	Integer,             dimension(4), intent(in) :: small_irrep_dim_param
	real(kind=cp), dimension(3,4), intent(in) :: Ltr_param
	Integer, intent(in) :: Parent_num_param
	character(len=15), intent(in) :: Sk_type_param
	integer, intent(in) :: nirreps_param
	Integer, intent(in) :: MagType_param
	character(len=15), intent(in) :: OG_number_param
	Integer,             dimension(4), intent(in) :: irrep_dim_param
	Integer,             dimension(4), intent(in) :: irrep_modes_number_param
	integer, intent(in) :: nkv_param
	Character(len=20),   dimension(4), intent(in) :: irrep_direction_param
	integer, intent(in) :: centred_param
	Complex(kind=cp),    dimension(3,12,48,4), intent(in) :: basf_param
	Character(len=20), intent(in) :: Parent_spg_param
	Character(len=34), intent(in) :: OG_symbol_param
	type(Sym_Oper_Type), dimension(:),   allocatable, intent(in) :: SymOp_param
	Character(len=15),   dimension(4), intent(in) :: irrep_id_param
	integer,             dimension(4), intent(in) :: nbas_param
	integer,             dimension(12,4), intent(in) :: icomp_param
	integer, intent(in) :: Multip_param
	MagSymm_k_Type_param%Latt = Latt_param
	MagSymm_k_Type_param%SymopSymb = SymopSymb_param
	MagSymm_k_Type_param%MSymopSymb = MSymopSymb_param
	MagSymm_k_Type_param%Numops = Numops_param
	MagSymm_k_Type_param%BNS_symbol = BNS_symbol_param
	MagSymm_k_Type_param%BNS_number = BNS_number_param
	MagSymm_k_Type_param%mcentred = mcentred_param
	MagSymm_k_Type_param%MagModel = MagModel_param
	MagSymm_k_Type_param%kvec = kvec_param
	MagSymm_k_Type_param%nmsym = nmsym_param
	MagSymm_k_Type_param%MSymOp = MSymOp_param
	MagSymm_k_Type_param%Num_Lat = Num_Lat_param
	MagSymm_k_Type_param%irrep_action = irrep_action_param
	MagSymm_k_Type_param%small_irrep_dim = small_irrep_dim_param
	MagSymm_k_Type_param%Ltr = Ltr_param
	MagSymm_k_Type_param%Parent_num = Parent_num_param
	MagSymm_k_Type_param%Sk_type = Sk_type_param
	MagSymm_k_Type_param%nirreps = nirreps_param
	MagSymm_k_Type_param%MagType = MagType_param
	MagSymm_k_Type_param%OG_number = OG_number_param
	MagSymm_k_Type_param%irrep_dim = irrep_dim_param
	MagSymm_k_Type_param%irrep_modes_number = irrep_modes_number_param
	MagSymm_k_Type_param%nkv = nkv_param
	MagSymm_k_Type_param%irrep_direction = irrep_direction_param
	MagSymm_k_Type_param%centred = centred_param
	MagSymm_k_Type_param%basf = basf_param
	MagSymm_k_Type_param%Parent_spg = Parent_spg_param
	MagSymm_k_Type_param%OG_symbol = OG_symbol_param
	MagSymm_k_Type_param%SymOp = SymOp_param
	MagSymm_k_Type_param%irrep_id = irrep_id_param
	MagSymm_k_Type_param%nbas = nbas_param
	MagSymm_k_Type_param%icomp = icomp_param
	MagSymm_k_Type_param%Multip = Multip_param
	end subroutine MagSymm_k_Type_ctor
	function get_magnetic_domain_Chir(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	logical :: get_magnetic_domain_Chir
	get_magnetic_domain_Chir = obj_var%Chir
	end function get_magnetic_domain_Chir
	
	subroutine set_magnetic_domain_Chir(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%Chir = new_value
	end subroutine set_magnetic_domain_Chir
	
	function get_magnetic_domain_pop_std(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (2,24) :: get_magnetic_domain_pop_std
	get_magnetic_domain_pop_std = obj_var%pop_std
	end function get_magnetic_domain_pop_std
	
	subroutine set_magnetic_domain_pop_std(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (2,24), intent(in) :: new_value
	obj_var%pop_std = new_value
	end subroutine set_magnetic_domain_pop_std
	
	function get_magnetic_domain_Mpop(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (2,24) :: get_magnetic_domain_Mpop
	get_magnetic_domain_Mpop = obj_var%Mpop
	end function get_magnetic_domain_Mpop
	
	subroutine set_magnetic_domain_Mpop(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (2,24), intent(in) :: new_value
	obj_var%Mpop = new_value
	end subroutine set_magnetic_domain_Mpop
	
	function get_magnetic_domain_nd(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	integer :: get_magnetic_domain_nd
	get_magnetic_domain_nd = obj_var%nd
	end function get_magnetic_domain_nd
	
	subroutine set_magnetic_domain_nd(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%nd = new_value
	end subroutine set_magnetic_domain_nd
	
	function get_magnetic_domain_Lpop(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	integer      , dimension (2,24) :: get_magnetic_domain_Lpop
	get_magnetic_domain_Lpop = obj_var%Lpop
	end function get_magnetic_domain_Lpop
	
	subroutine set_magnetic_domain_Lpop(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	integer      , dimension (2,24), intent(in) :: new_value
	obj_var%Lpop = new_value
	end subroutine set_magnetic_domain_Lpop
	
	function get_magnetic_domain_pop(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (2,24) :: get_magnetic_domain_pop
	get_magnetic_domain_pop = obj_var%pop
	end function get_magnetic_domain_pop
	
	subroutine set_magnetic_domain_pop(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (2,24), intent(in) :: new_value
	obj_var%pop = new_value
	end subroutine set_magnetic_domain_pop
	
	function get_magnetic_domain_Twin(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	logical :: get_magnetic_domain_Twin
	get_magnetic_domain_Twin = obj_var%Twin
	end function get_magnetic_domain_Twin
	
	subroutine set_magnetic_domain_Twin(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%Twin = new_value
	end subroutine set_magnetic_domain_Twin
	
	function get_magnetic_domain_Lab(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	character(len=10),dimension (2,24) :: get_magnetic_domain_Lab
	get_magnetic_domain_Lab = obj_var%Lab
	end function get_magnetic_domain_Lab
	
	subroutine set_magnetic_domain_Lab(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	character(len=10),dimension (2,24), intent(in) :: new_value
	obj_var%Lab = new_value
	end subroutine set_magnetic_domain_Lab
	
	function get_magnetic_domain_DMat(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	integer,dimension(3,3,24) :: get_magnetic_domain_DMat
	get_magnetic_domain_DMat = obj_var%DMat
	end function get_magnetic_domain_DMat
	
	subroutine set_magnetic_domain_DMat(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	integer,dimension(3,3,24), intent(in) :: new_value
	obj_var%DMat = new_value
	end subroutine set_magnetic_domain_DMat
	
	function get_magnetic_domain_Dt(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (3,24) :: get_magnetic_domain_Dt
	get_magnetic_domain_Dt = obj_var%Dt
	end function get_magnetic_domain_Dt
	
	subroutine set_magnetic_domain_Dt(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	real(kind=cp), dimension (3,24), intent(in) :: new_value
	obj_var%Dt = new_value
	end subroutine set_magnetic_domain_Dt
	
	function get_magnetic_domain_trans(obj_var)
	type (Magnetic_Domain_type) :: obj_var
	logical :: get_magnetic_domain_trans
	get_magnetic_domain_trans = obj_var%trans
	end function get_magnetic_domain_trans
	
	subroutine set_magnetic_domain_trans(obj_var, new_value)
	type (Magnetic_Domain_type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%trans = new_value
	end subroutine set_magnetic_domain_trans
	
	subroutine Magnetic_Domain_type_ctor(Magnetic_Domain_type_param, Chir_param, pop_std_param, Mpop_param, nd_param, Lpop_param, pop_param, Twin_param, Lab_param, DMat_param, Dt_param, trans_param)
	type (Magnetic_Domain_type) :: Magnetic_Domain_type_param
	logical, intent(in) :: Chir_param
	real(kind=cp), dimension (2,24), intent(in) :: pop_std_param
	real(kind=cp), dimension (2,24), intent(in) :: Mpop_param
	integer, intent(in) :: nd_param
	integer      , dimension (2,24), intent(in) :: Lpop_param
	real(kind=cp), dimension (2,24), intent(in) :: pop_param
	logical, intent(in) :: Twin_param
	character(len=10),dimension (2,24), intent(in) :: Lab_param
	integer,dimension(3,3,24), intent(in) :: DMat_param
	real(kind=cp), dimension (3,24), intent(in) :: Dt_param
	logical, intent(in) :: trans_param
	Magnetic_Domain_type_param%Chir = Chir_param
	Magnetic_Domain_type_param%pop_std = pop_std_param
	Magnetic_Domain_type_param%Mpop = Mpop_param
	Magnetic_Domain_type_param%nd = nd_param
	Magnetic_Domain_type_param%Lpop = Lpop_param
	Magnetic_Domain_type_param%pop = pop_param
	Magnetic_Domain_type_param%Twin = Twin_param
	Magnetic_Domain_type_param%Lab = Lab_param
	Magnetic_Domain_type_param%DMat = DMat_param
	Magnetic_Domain_type_param%Dt = Dt_param
	Magnetic_Domain_type_param%trans = trans_param
	end subroutine Magnetic_Domain_type_ctor
	function get_magnetic_group_tinv(obj_var)
	type (Magnetic_Group_Type) :: obj_var
	integer, dimension(192) :: get_magnetic_group_tinv
	get_magnetic_group_tinv = obj_var%tinv
	end function get_magnetic_group_tinv
	
	subroutine set_magnetic_group_tinv(obj_var, new_value)
	type (Magnetic_Group_Type) :: obj_var
	integer, dimension(192), intent(in) :: new_value
	obj_var%tinv = new_value
	end subroutine set_magnetic_group_tinv
	
	function get_magnetic_group_Shubnikov(obj_var)
	type (Magnetic_Group_Type) :: obj_var
	Character(len=30) :: get_magnetic_group_Shubnikov
	get_magnetic_group_Shubnikov = obj_var%Shubnikov
	end function get_magnetic_group_Shubnikov
	
	subroutine set_magnetic_group_Shubnikov(obj_var, new_value)
	type (Magnetic_Group_Type) :: obj_var
	Character(len=30), intent(in) :: new_value
	obj_var%Shubnikov = new_value
	end subroutine set_magnetic_group_Shubnikov
	
	function get_magnetic_group_SpG(obj_var)
	type (Magnetic_Group_Type) :: obj_var
	type(Space_Group_Type) :: get_magnetic_group_SpG
	get_magnetic_group_SpG = obj_var%SpG
	end function get_magnetic_group_SpG
	
	subroutine set_magnetic_group_SpG(obj_var, new_value)
	type (Magnetic_Group_Type) :: obj_var
	type(Space_Group_Type), intent(in) :: new_value
	obj_var%SpG = new_value
	end subroutine set_magnetic_group_SpG
	
	subroutine Magnetic_Group_Type_ctor(Magnetic_Group_Type_param, tinv_param, Shubnikov_param, SpG_param)
	type (Magnetic_Group_Type) :: Magnetic_Group_Type_param
	integer, dimension(192), intent(in) :: tinv_param
	Character(len=30), intent(in) :: Shubnikov_param
	type(Space_Group_Type), intent(in) :: SpG_param
	Magnetic_Group_Type_param%tinv = tinv_param
	Magnetic_Group_Type_param%Shubnikov = Shubnikov_param
	Magnetic_Group_Type_param%SpG = SpG_param
	end subroutine Magnetic_Group_Type_ctor
	function get_magnetic_space_group_m_constr(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical :: get_magnetic_space_group_m_constr
	get_magnetic_space_group_m_constr = obj_var%m_constr
	end function get_magnetic_space_group_m_constr
	
	subroutine set_magnetic_space_group_m_constr(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%m_constr = new_value
	end subroutine set_magnetic_space_group_m_constr
	
	function get_magnetic_space_group_Centre_coord(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_magnetic_space_group_Centre_coord
	get_magnetic_space_group_Centre_coord = obj_var%Centre_coord
	end function get_magnetic_space_group_Centre_coord
	
	subroutine set_magnetic_space_group_Centre_coord(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%Centre_coord = new_value
	end subroutine set_magnetic_space_group_Centre_coord
	
	function get_magnetic_space_group_aLatt_trans(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:) :: get_magnetic_space_group_aLatt_trans
	get_magnetic_space_group_aLatt_trans = obj_var%aLatt_trans
	end function get_magnetic_space_group_aLatt_trans
	
	subroutine set_magnetic_space_group_aLatt_trans(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: new_value
	obj_var%aLatt_trans = new_value
	end subroutine set_magnetic_space_group_aLatt_trans
	
	function get_magnetic_space_group_MSymopSymb(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=40),   dimension(:),allocatable :: get_magnetic_space_group_MSymopSymb
	get_magnetic_space_group_MSymopSymb = obj_var%MSymopSymb
	end function get_magnetic_space_group_MSymopSymb
	
	subroutine set_magnetic_space_group_MSymopSymb(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=40),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%MSymopSymb = new_value
	end subroutine set_magnetic_space_group_MSymopSymb
	
	function get_magnetic_space_group_n_wyck(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_n_wyck
	get_magnetic_space_group_n_wyck = obj_var%n_wyck
	end function get_magnetic_space_group_n_wyck
	
	subroutine set_magnetic_space_group_n_wyck(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%n_wyck = new_value
	end subroutine set_magnetic_space_group_n_wyck
	
	function get_magnetic_space_group_BNS_symbol(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=34) :: get_magnetic_space_group_BNS_symbol
	get_magnetic_space_group_BNS_symbol = obj_var%BNS_symbol
	end function get_magnetic_space_group_BNS_symbol
	
	subroutine set_magnetic_space_group_BNS_symbol(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=34), intent(in) :: new_value
	obj_var%BNS_symbol = new_value
	end subroutine set_magnetic_space_group_BNS_symbol
	
	function get_magnetic_space_group_BNS_number(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=15) :: get_magnetic_space_group_BNS_number
	get_magnetic_space_group_BNS_number = obj_var%BNS_number
	end function get_magnetic_space_group_BNS_number
	
	subroutine set_magnetic_space_group_BNS_number(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=15), intent(in) :: new_value
	obj_var%BNS_number = new_value
	end subroutine set_magnetic_space_group_BNS_number
	
	function get_magnetic_space_group_Latt_trans(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:) :: get_magnetic_space_group_Latt_trans
	get_magnetic_space_group_Latt_trans = obj_var%Latt_trans
	end function get_magnetic_space_group_Latt_trans
	
	subroutine set_magnetic_space_group_Latt_trans(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: new_value
	obj_var%Latt_trans = new_value
	end subroutine set_magnetic_space_group_Latt_trans
	
	function get_magnetic_space_group_Sh_number(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_Sh_number
	get_magnetic_space_group_Sh_number = obj_var%Sh_number
	end function get_magnetic_space_group_Sh_number
	
	subroutine set_magnetic_space_group_Sh_number(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%Sh_number = new_value
	end subroutine set_magnetic_space_group_Sh_number
	
	function get_magnetic_space_group_Wyck_Symb(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=40),   dimension(:),allocatable :: get_magnetic_space_group_Wyck_Symb
	get_magnetic_space_group_Wyck_Symb = obj_var%Wyck_Symb
	end function get_magnetic_space_group_Wyck_Symb
	
	subroutine set_magnetic_space_group_Wyck_Symb(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=40),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%Wyck_Symb = new_value
	end subroutine set_magnetic_space_group_Wyck_Symb
	
	function get_magnetic_space_group_CrystalSys(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=12) :: get_magnetic_space_group_CrystalSys
	get_magnetic_space_group_CrystalSys = obj_var%CrystalSys
	end function get_magnetic_space_group_CrystalSys
	
	subroutine set_magnetic_space_group_CrystalSys(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=12), intent(in) :: new_value
	obj_var%CrystalSys = new_value
	end subroutine set_magnetic_space_group_CrystalSys
	
	function get_magnetic_space_group_m_cell(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical :: get_magnetic_space_group_m_cell
	get_magnetic_space_group_m_cell = obj_var%m_cell
	end function get_magnetic_space_group_m_cell
	
	subroutine set_magnetic_space_group_m_cell(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%m_cell = new_value
	end subroutine set_magnetic_space_group_m_cell
	
	function get_magnetic_space_group_irrep_id(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=15),   dimension(:),allocatable :: get_magnetic_space_group_irrep_id
	get_magnetic_space_group_irrep_id = obj_var%irrep_id
	end function get_magnetic_space_group_irrep_id
	
	subroutine set_magnetic_space_group_irrep_id(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=15),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%irrep_id = new_value
	end subroutine set_magnetic_space_group_irrep_id
	
	function get_magnetic_space_group_MSymOp(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	type(MSym_Oper_Type),dimension(:),allocatable :: get_magnetic_space_group_MSymOp
	get_magnetic_space_group_MSymOp = obj_var%MSymOp
	end function get_magnetic_space_group_MSymOp
	
	subroutine set_magnetic_space_group_MSymOp(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	type(MSym_Oper_Type),dimension(:),allocatable, intent(in) :: new_value
	obj_var%MSymOp = new_value
	end subroutine set_magnetic_space_group_MSymOp
	
	function get_magnetic_space_group_Num_Lat(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer :: get_magnetic_space_group_Num_Lat
	get_magnetic_space_group_Num_Lat = obj_var%Num_Lat
	end function get_magnetic_space_group_Num_Lat
	
	subroutine set_magnetic_space_group_Num_Lat(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_Lat = new_value
	end subroutine set_magnetic_space_group_Num_Lat
	
	function get_magnetic_space_group_Num_aLat(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer :: get_magnetic_space_group_Num_aLat
	get_magnetic_space_group_Num_aLat = obj_var%Num_aLat
	end function get_magnetic_space_group_Num_aLat
	
	subroutine set_magnetic_space_group_Num_aLat(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_aLat = new_value
	end subroutine set_magnetic_space_group_Num_aLat
	
	function get_magnetic_space_group_small_irrep_dim(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer,             dimension(:),allocatable :: get_magnetic_space_group_small_irrep_dim
	get_magnetic_space_group_small_irrep_dim = obj_var%small_irrep_dim
	end function get_magnetic_space_group_small_irrep_dim
	
	subroutine set_magnetic_space_group_small_irrep_dim(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer,             dimension(:),allocatable, intent(in) :: new_value
	obj_var%small_irrep_dim = new_value
	end subroutine set_magnetic_space_group_small_irrep_dim
	
	function get_magnetic_space_group_Centred(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer :: get_magnetic_space_group_Centred
	get_magnetic_space_group_Centred = obj_var%Centred
	end function get_magnetic_space_group_Centred
	
	subroutine set_magnetic_space_group_Centred(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Centred = new_value
	end subroutine set_magnetic_space_group_Centred
	
	function get_magnetic_space_group_SPG_lat(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len= 1) :: get_magnetic_space_group_SPG_lat
	get_magnetic_space_group_SPG_lat = obj_var%SPG_lat
	end function get_magnetic_space_group_SPG_lat
	
	subroutine set_magnetic_space_group_SPG_lat(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len= 1), intent(in) :: new_value
	obj_var%SPG_lat = new_value
	end subroutine set_magnetic_space_group_SPG_lat
	
	function get_magnetic_space_group_SymopSymb(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=40),   dimension(:),allocatable :: get_magnetic_space_group_SymopSymb
	get_magnetic_space_group_SymopSymb = obj_var%SymopSymb
	end function get_magnetic_space_group_SymopSymb
	
	subroutine set_magnetic_space_group_SymopSymb(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=40),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%SymopSymb = new_value
	end subroutine set_magnetic_space_group_SymopSymb
	
	function get_magnetic_space_group_Parent_num(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_Parent_num
	get_magnetic_space_group_Parent_num = obj_var%Parent_num
	end function get_magnetic_space_group_Parent_num
	
	subroutine set_magnetic_space_group_Parent_num(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%Parent_num = new_value
	end subroutine set_magnetic_space_group_Parent_num
	
	function get_magnetic_space_group_kv_label(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=15),   dimension(:),allocatable :: get_magnetic_space_group_kv_label
	get_magnetic_space_group_kv_label = obj_var%kv_label
	end function get_magnetic_space_group_kv_label
	
	subroutine set_magnetic_space_group_kv_label(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=15),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%kv_label = new_value
	end subroutine set_magnetic_space_group_kv_label
	
	function get_magnetic_space_group_MagType(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_MagType
	get_magnetic_space_group_MagType = obj_var%MagType
	end function get_magnetic_space_group_MagType
	
	subroutine set_magnetic_space_group_MagType(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%MagType = new_value
	end subroutine set_magnetic_space_group_MagType
	
	function get_magnetic_space_group_irrep_action(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=20),   dimension(:),allocatable :: get_magnetic_space_group_irrep_action
	get_magnetic_space_group_irrep_action = obj_var%irrep_action
	end function get_magnetic_space_group_irrep_action
	
	subroutine set_magnetic_space_group_irrep_action(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=20),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%irrep_action = new_value
	end subroutine set_magnetic_space_group_irrep_action
	
	function get_magnetic_space_group_n_kv(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_n_kv
	get_magnetic_space_group_n_kv = obj_var%n_kv
	end function get_magnetic_space_group_n_kv
	
	subroutine set_magnetic_space_group_n_kv(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%n_kv = new_value
	end subroutine set_magnetic_space_group_n_kv
	
	function get_magnetic_space_group_OG_number(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=15) :: get_magnetic_space_group_OG_number
	get_magnetic_space_group_OG_number = obj_var%OG_number
	end function get_magnetic_space_group_OG_number
	
	subroutine set_magnetic_space_group_OG_number(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=15), intent(in) :: new_value
	obj_var%OG_number = new_value
	end subroutine set_magnetic_space_group_OG_number
	
	function get_magnetic_space_group_n_irreps(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_n_irreps
	get_magnetic_space_group_n_irreps = obj_var%n_irreps
	end function get_magnetic_space_group_n_irreps
	
	subroutine set_magnetic_space_group_n_irreps(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%n_irreps = new_value
	end subroutine set_magnetic_space_group_n_irreps
	
	function get_magnetic_space_group_SPG_latsy(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len= 2) :: get_magnetic_space_group_SPG_latsy
	get_magnetic_space_group_SPG_latsy = obj_var%SPG_latsy
	end function get_magnetic_space_group_SPG_latsy
	
	subroutine set_magnetic_space_group_SPG_latsy(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len= 2), intent(in) :: new_value
	obj_var%SPG_latsy = new_value
	end subroutine set_magnetic_space_group_SPG_latsy
	
	function get_magnetic_space_group_Num_gen(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer :: get_magnetic_space_group_Num_gen
	get_magnetic_space_group_Num_gen = obj_var%Num_gen
	end function get_magnetic_space_group_Num_gen
	
	subroutine set_magnetic_space_group_Num_gen(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_gen = new_value
	end subroutine set_magnetic_space_group_Num_gen
	
	function get_magnetic_space_group_irrep_direction(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=20),   dimension(:),allocatable :: get_magnetic_space_group_irrep_direction
	get_magnetic_space_group_irrep_direction = obj_var%irrep_direction
	end function get_magnetic_space_group_irrep_direction
	
	subroutine set_magnetic_space_group_irrep_direction(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=20),   dimension(:),allocatable, intent(in) :: new_value
	obj_var%irrep_direction = new_value
	end subroutine set_magnetic_space_group_irrep_direction
	
	function get_magnetic_space_group_standard_setting(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical :: get_magnetic_space_group_standard_setting
	get_magnetic_space_group_standard_setting = obj_var%standard_setting
	end function get_magnetic_space_group_standard_setting
	
	subroutine set_magnetic_space_group_standard_setting(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%standard_setting = new_value
	end subroutine set_magnetic_space_group_standard_setting
	
	function get_magnetic_space_group_SymOp(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	type(Sym_Oper_Type), dimension(:),allocatable :: get_magnetic_space_group_SymOp
	get_magnetic_space_group_SymOp = obj_var%SymOp
	end function get_magnetic_space_group_SymOp
	
	subroutine set_magnetic_space_group_SymOp(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	type(Sym_Oper_Type), dimension(:),allocatable, intent(in) :: new_value
	obj_var%SymOp = new_value
	end subroutine set_magnetic_space_group_SymOp
	
	function get_magnetic_space_group_irrep_dim(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer,             dimension(:),allocatable :: get_magnetic_space_group_irrep_dim
	get_magnetic_space_group_irrep_dim = obj_var%irrep_dim
	end function get_magnetic_space_group_irrep_dim
	
	subroutine set_magnetic_space_group_irrep_dim(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer,             dimension(:),allocatable, intent(in) :: new_value
	obj_var%irrep_dim = new_value
	end subroutine set_magnetic_space_group_irrep_dim
	
	function get_magnetic_space_group_Parent_spg(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=20) :: get_magnetic_space_group_Parent_spg
	get_magnetic_space_group_Parent_spg = obj_var%Parent_spg
	end function get_magnetic_space_group_Parent_spg
	
	subroutine set_magnetic_space_group_Parent_spg(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=20), intent(in) :: new_value
	obj_var%Parent_spg = new_value
	end subroutine set_magnetic_space_group_Parent_spg
	
	function get_magnetic_space_group_OG_symbol(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=34) :: get_magnetic_space_group_OG_symbol
	get_magnetic_space_group_OG_symbol = obj_var%OG_symbol
	end function get_magnetic_space_group_OG_symbol
	
	subroutine set_magnetic_space_group_OG_symbol(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=34), intent(in) :: new_value
	obj_var%OG_symbol = new_value
	end subroutine set_magnetic_space_group_OG_symbol
	
	function get_magnetic_space_group_Centre(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=80) :: get_magnetic_space_group_Centre
	get_magnetic_space_group_Centre = obj_var%Centre
	end function get_magnetic_space_group_Centre
	
	subroutine set_magnetic_space_group_Centre(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	character(len=80), intent(in) :: new_value
	obj_var%Centre = new_value
	end subroutine set_magnetic_space_group_Centre
	
	function get_magnetic_space_group_mcif(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical :: get_magnetic_space_group_mcif
	get_magnetic_space_group_mcif = obj_var%mcif
	end function get_magnetic_space_group_mcif
	
	subroutine set_magnetic_space_group_mcif(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%mcif = new_value
	end subroutine set_magnetic_space_group_mcif
	
	function get_magnetic_space_group_NumOps(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer :: get_magnetic_space_group_NumOps
	get_magnetic_space_group_NumOps = obj_var%NumOps
	end function get_magnetic_space_group_NumOps
	
	subroutine set_magnetic_space_group_NumOps(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumOps = new_value
	end subroutine set_magnetic_space_group_NumOps
	
	function get_magnetic_space_group_irrep_modes_number(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer,             dimension(:),allocatable :: get_magnetic_space_group_irrep_modes_number
	get_magnetic_space_group_irrep_modes_number = obj_var%irrep_modes_number
	end function get_magnetic_space_group_irrep_modes_number
	
	subroutine set_magnetic_space_group_irrep_modes_number(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer,             dimension(:),allocatable, intent(in) :: new_value
	obj_var%irrep_modes_number = new_value
	end subroutine set_magnetic_space_group_irrep_modes_number
	
	function get_magnetic_space_group_kv(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp),     dimension(:,:),allocatable :: get_magnetic_space_group_kv
	get_magnetic_space_group_kv = obj_var%kv
	end function get_magnetic_space_group_kv
	
	subroutine set_magnetic_space_group_kv(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	real(kind=cp),     dimension(:,:),allocatable, intent(in) :: new_value
	obj_var%kv = new_value
	end subroutine set_magnetic_space_group_kv
	
	function get_magnetic_space_group_trn_to_standard(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=40) :: get_magnetic_space_group_trn_to_standard
	get_magnetic_space_group_trn_to_standard = obj_var%trn_to_standard
	end function get_magnetic_space_group_trn_to_standard
	
	subroutine set_magnetic_space_group_trn_to_standard(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=40), intent(in) :: new_value
	obj_var%trn_to_standard = new_value
	end subroutine set_magnetic_space_group_trn_to_standard
	
	function get_magnetic_space_group_trn_from_parent(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=40) :: get_magnetic_space_group_trn_from_parent
	get_magnetic_space_group_trn_from_parent = obj_var%trn_from_parent
	end function get_magnetic_space_group_trn_from_parent
	
	subroutine set_magnetic_space_group_trn_from_parent(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Character(len=40), intent(in) :: new_value
	obj_var%trn_from_parent = new_value
	end subroutine set_magnetic_space_group_trn_from_parent
	
	function get_magnetic_space_group_Multip(obj_var)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer :: get_magnetic_space_group_Multip
	get_magnetic_space_group_Multip = obj_var%Multip
	end function get_magnetic_space_group_Multip
	
	subroutine set_magnetic_space_group_Multip(obj_var, new_value)
	type (Magnetic_Space_Group_Type) :: obj_var
	Integer, intent(in) :: new_value
	obj_var%Multip = new_value
	end subroutine set_magnetic_space_group_Multip
	
	subroutine Magnetic_Space_Group_Type_ctor(Magnetic_Space_Group_Type_param, m_constr_param, Centre_coord_param, aLatt_trans_param, MSymopSymb_param, n_wyck_param, BNS_symbol_param, BNS_number_param, Latt_trans_param, Sh_number_param, Wyck_Symb_param, CrystalSys_param, m_cell_param, irrep_id_param, MSymOp_param, Num_Lat_param, Num_aLat_param, small_irrep_dim_param, Centred_param, SPG_lat_param, SymopSymb_param, Parent_num_param, kv_label_param, MagType_param, irrep_action_param, n_kv_param, OG_number_param, n_irreps_param, SPG_latsy_param, Num_gen_param, irrep_direction_param, standard_setting_param, SymOp_param, irrep_dim_param, Parent_spg_param, OG_symbol_param, Centre_param, mcif_param, NumOps_param, irrep_modes_number_param, kv_param, trn_to_standard_param, trn_from_parent_param, Multip_param)
	type (Magnetic_Space_Group_Type) :: Magnetic_Space_Group_Type_param
	logical, intent(in) :: m_constr_param
	real(kind=cp), dimension(3), intent(in) :: Centre_coord_param
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: aLatt_trans_param
	character(len=40),   dimension(:),allocatable, intent(in) :: MSymopSymb_param
	Integer, intent(in) :: n_wyck_param
	Character(len=34), intent(in) :: BNS_symbol_param
	character(len=15), intent(in) :: BNS_number_param
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: Latt_trans_param
	Integer, intent(in) :: Sh_number_param
	character(len=40),   dimension(:),allocatable, intent(in) :: Wyck_Symb_param
	character(len=12), intent(in) :: CrystalSys_param
	logical, intent(in) :: m_cell_param
	Character(len=15),   dimension(:),allocatable, intent(in) :: irrep_id_param
	type(MSym_Oper_Type),dimension(:),allocatable, intent(in) :: MSymOp_param
	integer, intent(in) :: Num_Lat_param
	integer, intent(in) :: Num_aLat_param
	Integer,             dimension(:),allocatable, intent(in) :: small_irrep_dim_param
	integer, intent(in) :: Centred_param
	character(len= 1), intent(in) :: SPG_lat_param
	character(len=40),   dimension(:),allocatable, intent(in) :: SymopSymb_param
	Integer, intent(in) :: Parent_num_param
	Character(len=15),   dimension(:),allocatable, intent(in) :: kv_label_param
	Integer, intent(in) :: MagType_param
	Character(len=20),   dimension(:),allocatable, intent(in) :: irrep_action_param
	Integer, intent(in) :: n_kv_param
	character(len=15), intent(in) :: OG_number_param
	Integer, intent(in) :: n_irreps_param
	character(len= 2), intent(in) :: SPG_latsy_param
	integer, intent(in) :: Num_gen_param
	Character(len=20),   dimension(:),allocatable, intent(in) :: irrep_direction_param
	logical, intent(in) :: standard_setting_param
	type(Sym_Oper_Type), dimension(:),allocatable, intent(in) :: SymOp_param
	Integer,             dimension(:),allocatable, intent(in) :: irrep_dim_param
	Character(len=20), intent(in) :: Parent_spg_param
	Character(len=34), intent(in) :: OG_symbol_param
	character(len=80), intent(in) :: Centre_param
	logical, intent(in) :: mcif_param
	integer, intent(in) :: NumOps_param
	Integer,             dimension(:),allocatable, intent(in) :: irrep_modes_number_param
	real(kind=cp),     dimension(:,:),allocatable, intent(in) :: kv_param
	Character(len=40), intent(in) :: trn_to_standard_param
	Character(len=40), intent(in) :: trn_from_parent_param
	Integer, intent(in) :: Multip_param
	Magnetic_Space_Group_Type_param%m_constr = m_constr_param
	Magnetic_Space_Group_Type_param%Centre_coord = Centre_coord_param
	Magnetic_Space_Group_Type_param%aLatt_trans = aLatt_trans_param
	Magnetic_Space_Group_Type_param%MSymopSymb = MSymopSymb_param
	Magnetic_Space_Group_Type_param%n_wyck = n_wyck_param
	Magnetic_Space_Group_Type_param%BNS_symbol = BNS_symbol_param
	Magnetic_Space_Group_Type_param%BNS_number = BNS_number_param
	Magnetic_Space_Group_Type_param%Latt_trans = Latt_trans_param
	Magnetic_Space_Group_Type_param%Sh_number = Sh_number_param
	Magnetic_Space_Group_Type_param%Wyck_Symb = Wyck_Symb_param
	Magnetic_Space_Group_Type_param%CrystalSys = CrystalSys_param
	Magnetic_Space_Group_Type_param%m_cell = m_cell_param
	Magnetic_Space_Group_Type_param%irrep_id = irrep_id_param
	Magnetic_Space_Group_Type_param%MSymOp = MSymOp_param
	Magnetic_Space_Group_Type_param%Num_Lat = Num_Lat_param
	Magnetic_Space_Group_Type_param%Num_aLat = Num_aLat_param
	Magnetic_Space_Group_Type_param%small_irrep_dim = small_irrep_dim_param
	Magnetic_Space_Group_Type_param%Centred = Centred_param
	Magnetic_Space_Group_Type_param%SPG_lat = SPG_lat_param
	Magnetic_Space_Group_Type_param%SymopSymb = SymopSymb_param
	Magnetic_Space_Group_Type_param%Parent_num = Parent_num_param
	Magnetic_Space_Group_Type_param%kv_label = kv_label_param
	Magnetic_Space_Group_Type_param%MagType = MagType_param
	Magnetic_Space_Group_Type_param%irrep_action = irrep_action_param
	Magnetic_Space_Group_Type_param%n_kv = n_kv_param
	Magnetic_Space_Group_Type_param%OG_number = OG_number_param
	Magnetic_Space_Group_Type_param%n_irreps = n_irreps_param
	Magnetic_Space_Group_Type_param%SPG_latsy = SPG_latsy_param
	Magnetic_Space_Group_Type_param%Num_gen = Num_gen_param
	Magnetic_Space_Group_Type_param%irrep_direction = irrep_direction_param
	Magnetic_Space_Group_Type_param%standard_setting = standard_setting_param
	Magnetic_Space_Group_Type_param%SymOp = SymOp_param
	Magnetic_Space_Group_Type_param%irrep_dim = irrep_dim_param
	Magnetic_Space_Group_Type_param%Parent_spg = Parent_spg_param
	Magnetic_Space_Group_Type_param%OG_symbol = OG_symbol_param
	Magnetic_Space_Group_Type_param%Centre = Centre_param
	Magnetic_Space_Group_Type_param%mcif = mcif_param
	Magnetic_Space_Group_Type_param%NumOps = NumOps_param
	Magnetic_Space_Group_Type_param%irrep_modes_number = irrep_modes_number_param
	Magnetic_Space_Group_Type_param%kv = kv_param
	Magnetic_Space_Group_Type_param%trn_to_standard = trn_to_standard_param
	Magnetic_Space_Group_Type_param%trn_from_parent = trn_from_parent_param
	Magnetic_Space_Group_Type_param%Multip = Multip_param
	end subroutine Magnetic_Space_Group_Type_ctor
	function get_maghd_list_Nref(obj_var)
	type (MagHD_List_Type) :: obj_var
	integer :: get_maghd_list_Nref
	get_maghd_list_Nref = obj_var%Nref
	end function get_maghd_list_Nref
	
	subroutine set_maghd_list_Nref(obj_var, new_value)
	type (MagHD_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Nref = new_value
	end subroutine set_maghd_list_Nref
	
	function get_maghd_list_Mh(obj_var)
	type (MagHD_List_Type) :: obj_var
	Type(MagHD_Type),allocatable, dimension(:) :: get_maghd_list_Mh
	get_maghd_list_Mh = obj_var%Mh
	end function get_maghd_list_Mh
	
	subroutine set_maghd_list_Mh(obj_var, new_value)
	type (MagHD_List_Type) :: obj_var
	Type(MagHD_Type),allocatable, dimension(:), intent(in) :: new_value
	obj_var%Mh = new_value
	end subroutine set_maghd_list_Mh
	
	subroutine MagHD_List_Type_ctor(MagHD_List_Type_param, Nref_param, Mh_param)
	type (MagHD_List_Type) :: MagHD_List_Type_param
	integer, intent(in) :: Nref_param
	Type(MagHD_Type),allocatable, dimension(:), intent(in) :: Mh_param
	MagHD_List_Type_param%Nref = Nref_param
	MagHD_List_Type_param%Mh = Mh_param
	end subroutine MagHD_List_Type_ctor
	function get_maghd_sqAMiV(obj_var)
	type (MagHD_Type) :: obj_var
	real(kind=cp) :: get_maghd_sqAMiV
	get_maghd_sqAMiV = obj_var%sqAMiV
	end function get_maghd_sqAMiV
	
	subroutine set_maghd_sqAMiV(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%sqAMiV = new_value
	end subroutine set_maghd_sqAMiV
	
	function get_maghd_num_k(obj_var)
	type (MagHD_Type) :: obj_var
	integer :: get_maghd_num_k
	get_maghd_num_k = obj_var%num_k
	end function get_maghd_num_k
	
	subroutine set_maghd_num_k(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%num_k = new_value
	end subroutine set_maghd_num_k
	
	function get_maghd_H(obj_var)
	type (MagHD_Type) :: obj_var
	real(kind=cp),   dimension(3) :: get_maghd_H
	get_maghd_H = obj_var%H
	end function get_maghd_H
	
	subroutine set_maghd_H(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	real(kind=cp),   dimension(3), intent(in) :: new_value
	obj_var%H = new_value
	end subroutine set_maghd_H
	
	function get_maghd_sqMiV(obj_var)
	type (MagHD_Type) :: obj_var
	real(kind=cp) :: get_maghd_sqMiV
	get_maghd_sqMiV = obj_var%sqMiV
	end function get_maghd_sqMiV
	
	subroutine set_maghd_sqMiV(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%sqMiV = new_value
	end subroutine set_maghd_sqMiV
	
	function get_maghd_s(obj_var)
	type (MagHD_Type) :: obj_var
	real(kind=cp) :: get_maghd_s
	get_maghd_s = obj_var%s
	end function get_maghd_s
	
	subroutine set_maghd_s(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%s = new_value
	end subroutine set_maghd_s
	
	function get_maghd_MiVC(obj_var)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3,2,24) :: get_maghd_MiVC
	get_maghd_MiVC = obj_var%MiVC
	end function get_maghd_MiVC
	
	subroutine set_maghd_MiVC(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3,2,24), intent(in) :: new_value
	obj_var%MiVC = new_value
	end subroutine set_maghd_MiVC
	
	function get_maghd_signp(obj_var)
	type (MagHD_Type) :: obj_var
	real(kind=cp) :: get_maghd_signp
	get_maghd_signp = obj_var%signp
	end function get_maghd_signp
	
	subroutine set_maghd_signp(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%signp = new_value
	end subroutine set_maghd_signp
	
	function get_maghd_MsF(obj_var)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3,2,24) :: get_maghd_MsF
	get_maghd_MsF = obj_var%MsF
	end function get_maghd_MsF
	
	subroutine set_maghd_MsF(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3,2,24), intent(in) :: new_value
	obj_var%MsF = new_value
	end subroutine set_maghd_MsF
	
	function get_maghd_AMiV(obj_var)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3) :: get_maghd_AMiV
	get_maghd_AMiV = obj_var%AMiV
	end function get_maghd_AMiV
	
	subroutine set_maghd_AMiV(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3), intent(in) :: new_value
	obj_var%AMiV = new_value
	end subroutine set_maghd_AMiV
	
	function get_maghd_keqv_minus(obj_var)
	type (MagHD_Type) :: obj_var
	logical :: get_maghd_keqv_minus
	get_maghd_keqv_minus = obj_var%keqv_minus
	end function get_maghd_keqv_minus
	
	subroutine set_maghd_keqv_minus(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%keqv_minus = new_value
	end subroutine set_maghd_keqv_minus
	
	function get_maghd_MiV(obj_var)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3,2,24) :: get_maghd_MiV
	get_maghd_MiV = obj_var%MiV
	end function get_maghd_MiV
	
	subroutine set_maghd_MiV(obj_var, new_value)
	type (MagHD_Type) :: obj_var
	complex(kind=cp),dimension(3,2,24), intent(in) :: new_value
	obj_var%MiV = new_value
	end subroutine set_maghd_MiV
	
	subroutine MagHD_Type_ctor(MagHD_Type_param, sqAMiV_param, num_k_param, H_param, sqMiV_param, s_param, MiVC_param, signp_param, MsF_param, AMiV_param, keqv_minus_param, MiV_param)
	type (MagHD_Type) :: MagHD_Type_param
	real(kind=cp), intent(in) :: sqAMiV_param
	integer, intent(in) :: num_k_param
	real(kind=cp),   dimension(3), intent(in) :: H_param
	real(kind=cp), intent(in) :: sqMiV_param
	real(kind=cp), intent(in) :: s_param
	complex(kind=cp),dimension(3,2,24), intent(in) :: MiVC_param
	real(kind=cp), intent(in) :: signp_param
	complex(kind=cp),dimension(3,2,24), intent(in) :: MsF_param
	complex(kind=cp),dimension(3), intent(in) :: AMiV_param
	logical, intent(in) :: keqv_minus_param
	complex(kind=cp),dimension(3,2,24), intent(in) :: MiV_param
	MagHD_Type_param%sqAMiV = sqAMiV_param
	MagHD_Type_param%num_k = num_k_param
	MagHD_Type_param%H = H_param
	MagHD_Type_param%sqMiV = sqMiV_param
	MagHD_Type_param%s = s_param
	MagHD_Type_param%MiVC = MiVC_param
	MagHD_Type_param%signp = signp_param
	MagHD_Type_param%MsF = MsF_param
	MagHD_Type_param%AMiV = AMiV_param
	MagHD_Type_param%keqv_minus = keqv_minus_param
	MagHD_Type_param%MiV = MiV_param
	end subroutine MagHD_Type_ctor
	function get_magh_list_Nref(obj_var)
	type (MagH_List_Type) :: obj_var
	integer :: get_magh_list_Nref
	get_magh_list_Nref = obj_var%Nref
	end function get_magh_list_Nref
	
	subroutine set_magh_list_Nref(obj_var, new_value)
	type (MagH_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Nref = new_value
	end subroutine set_magh_list_Nref
	
	function get_magh_list_Mh(obj_var)
	type (MagH_List_Type) :: obj_var
	Type(MagH_Type),allocatable, dimension(:) :: get_magh_list_Mh
	get_magh_list_Mh = obj_var%Mh
	end function get_magh_list_Mh
	
	subroutine set_magh_list_Mh(obj_var, new_value)
	type (MagH_List_Type) :: obj_var
	Type(MagH_Type),allocatable, dimension(:), intent(in) :: new_value
	obj_var%Mh = new_value
	end subroutine set_magh_list_Mh
	
	subroutine MagH_List_Type_ctor(MagH_List_Type_param, Nref_param, Mh_param)
	type (MagH_List_Type) :: MagH_List_Type_param
	integer, intent(in) :: Nref_param
	Type(MagH_Type),allocatable, dimension(:), intent(in) :: Mh_param
	MagH_List_Type_param%Nref = Nref_param
	MagH_List_Type_param%Mh = Mh_param
	end subroutine MagH_List_Type_ctor
	function get_magh_num_k(obj_var)
	type (MagH_Type) :: obj_var
	integer :: get_magh_num_k
	get_magh_num_k = obj_var%num_k
	end function get_magh_num_k
	
	subroutine set_magh_num_k(obj_var, new_value)
	type (MagH_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%num_k = new_value
	end subroutine set_magh_num_k
	
	function get_magh_H(obj_var)
	type (MagH_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_magh_H
	get_magh_H = obj_var%H
	end function get_magh_H
	
	subroutine set_magh_H(obj_var, new_value)
	type (MagH_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%H = new_value
	end subroutine set_magh_H
	
	function get_magh_sqMiV(obj_var)
	type (MagH_Type) :: obj_var
	real(kind=cp) :: get_magh_sqMiV
	get_magh_sqMiV = obj_var%sqMiV
	end function get_magh_sqMiV
	
	subroutine set_magh_sqMiV(obj_var, new_value)
	type (MagH_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%sqMiV = new_value
	end subroutine set_magh_sqMiV
	
	function get_magh_s(obj_var)
	type (MagH_Type) :: obj_var
	real(kind=cp) :: get_magh_s
	get_magh_s = obj_var%s
	end function get_magh_s
	
	subroutine set_magh_s(obj_var, new_value)
	type (MagH_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%s = new_value
	end subroutine set_magh_s
	
	function get_magh_MiVC(obj_var)
	type (MagH_Type) :: obj_var
	complex(kind=cp), dimension(3) :: get_magh_MiVC
	get_magh_MiVC = obj_var%MiVC
	end function get_magh_MiVC
	
	subroutine set_magh_MiVC(obj_var, new_value)
	type (MagH_Type) :: obj_var
	complex(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%MiVC = new_value
	end subroutine set_magh_MiVC
	
	function get_magh_signp(obj_var)
	type (MagH_Type) :: obj_var
	real(kind=cp) :: get_magh_signp
	get_magh_signp = obj_var%signp
	end function get_magh_signp
	
	subroutine set_magh_signp(obj_var, new_value)
	type (MagH_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%signp = new_value
	end subroutine set_magh_signp
	
	function get_magh_keqv_minus(obj_var)
	type (MagH_Type) :: obj_var
	logical :: get_magh_keqv_minus
	get_magh_keqv_minus = obj_var%keqv_minus
	end function get_magh_keqv_minus
	
	subroutine set_magh_keqv_minus(obj_var, new_value)
	type (MagH_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%keqv_minus = new_value
	end subroutine set_magh_keqv_minus
	
	function get_magh_MsF(obj_var)
	type (MagH_Type) :: obj_var
	complex(kind=cp), dimension(3) :: get_magh_MsF
	get_magh_MsF = obj_var%MsF
	end function get_magh_MsF
	
	subroutine set_magh_MsF(obj_var, new_value)
	type (MagH_Type) :: obj_var
	complex(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%MsF = new_value
	end subroutine set_magh_MsF
	
	function get_magh_mult(obj_var)
	type (MagH_Type) :: obj_var
	integer :: get_magh_mult
	get_magh_mult = obj_var%mult
	end function get_magh_mult
	
	subroutine set_magh_mult(obj_var, new_value)
	type (MagH_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%mult = new_value
	end subroutine set_magh_mult
	
	function get_magh_MiV(obj_var)
	type (MagH_Type) :: obj_var
	complex(kind=cp), dimension(3) :: get_magh_MiV
	get_magh_MiV = obj_var%MiV
	end function get_magh_MiV
	
	subroutine set_magh_MiV(obj_var, new_value)
	type (MagH_Type) :: obj_var
	complex(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%MiV = new_value
	end subroutine set_magh_MiV
	
	subroutine MagH_Type_ctor(MagH_Type_param, num_k_param, H_param, sqMiV_param, s_param, MiVC_param, signp_param, keqv_minus_param, MsF_param, mult_param, MiV_param)
	type (MagH_Type) :: MagH_Type_param
	integer, intent(in) :: num_k_param
	real(kind=cp), dimension(3), intent(in) :: H_param
	real(kind=cp), intent(in) :: sqMiV_param
	real(kind=cp), intent(in) :: s_param
	complex(kind=cp), dimension(3), intent(in) :: MiVC_param
	real(kind=cp), intent(in) :: signp_param
	logical, intent(in) :: keqv_minus_param
	complex(kind=cp), dimension(3), intent(in) :: MsF_param
	integer, intent(in) :: mult_param
	complex(kind=cp), dimension(3), intent(in) :: MiV_param
	MagH_Type_param%num_k = num_k_param
	MagH_Type_param%H = H_param
	MagH_Type_param%sqMiV = sqMiV_param
	MagH_Type_param%s = s_param
	MagH_Type_param%MiVC = MiVC_param
	MagH_Type_param%signp = signp_param
	MagH_Type_param%keqv_minus = keqv_minus_param
	MagH_Type_param%MsF = MsF_param
	MagH_Type_param%mult = mult_param
	MagH_Type_param%MiV = MiV_param
	end subroutine MagH_Type_ctor
	function get_reflect_H(obj_var)
	type (Reflect_Type) :: obj_var
	integer,dimension(3) :: get_reflect_H
	get_reflect_H = obj_var%H
	end function get_reflect_H
	
	subroutine set_reflect_H(obj_var, new_value)
	type (Reflect_Type) :: obj_var
	integer,dimension(3), intent(in) :: new_value
	obj_var%H = new_value
	end subroutine set_reflect_H
	
	function get_reflect_S(obj_var)
	type (Reflect_Type) :: obj_var
	real(kind=cp) :: get_reflect_S
	get_reflect_S = obj_var%S
	end function get_reflect_S
	
	subroutine set_reflect_S(obj_var, new_value)
	type (Reflect_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%S = new_value
	end subroutine set_reflect_S
	
	function get_reflect_Mult(obj_var)
	type (Reflect_Type) :: obj_var
	integer :: get_reflect_Mult
	get_reflect_Mult = obj_var%Mult
	end function get_reflect_Mult
	
	subroutine set_reflect_Mult(obj_var, new_value)
	type (Reflect_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Mult = new_value
	end subroutine set_reflect_Mult
	
	subroutine Reflect_Type_ctor(Reflect_Type_param, H_param, S_param, Mult_param)
	type (Reflect_Type) :: Reflect_Type_param
	integer,dimension(3), intent(in) :: H_param
	real(kind=cp), intent(in) :: S_param
	integer, intent(in) :: Mult_param
	Reflect_Type_param%H = H_param
	Reflect_Type_param%S = S_param
	Reflect_Type_param%Mult = Mult_param
	end subroutine Reflect_Type_ctor
	function get_reflection_list_Ref(obj_var)
	type (Reflection_List_Type) :: obj_var
	type(reflection_type),allocatable, dimension(:) :: get_reflection_list_Ref
	get_reflection_list_Ref = obj_var%Ref
	end function get_reflection_list_Ref
	
	subroutine set_reflection_list_Ref(obj_var, new_value)
	type (Reflection_List_Type) :: obj_var
	type(reflection_type),allocatable, dimension(:), intent(in) :: new_value
	obj_var%Ref = new_value
	end subroutine set_reflection_list_Ref
	
	function get_reflection_list_NRef(obj_var)
	type (Reflection_List_Type) :: obj_var
	integer :: get_reflection_list_NRef
	get_reflection_list_NRef = obj_var%NRef
	end function get_reflection_list_NRef
	
	subroutine set_reflection_list_NRef(obj_var, new_value)
	type (Reflection_List_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NRef = new_value
	end subroutine set_reflection_list_NRef
	
	subroutine Reflection_List_Type_ctor(Reflection_List_Type_param, Ref_param, NRef_param)
	type (Reflection_List_Type) :: Reflection_List_Type_param
	type(reflection_type),allocatable, dimension(:), intent(in) :: Ref_param
	integer, intent(in) :: NRef_param
	Reflection_List_Type_param%Ref = Ref_param
	Reflection_List_Type_param%NRef = NRef_param
	end subroutine Reflection_List_Type_ctor
	function get_reflection_A(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_A
	get_reflection_A = obj_var%A
	end function get_reflection_A
	
	subroutine set_reflection_A(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%A = new_value
	end subroutine set_reflection_A
	
	function get_reflection_AA(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_AA
	get_reflection_AA = obj_var%AA
	end function get_reflection_AA
	
	subroutine set_reflection_AA(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%AA = new_value
	end subroutine set_reflection_AA
	
	function get_reflection_B(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_B
	get_reflection_B = obj_var%B
	end function get_reflection_B
	
	subroutine set_reflection_B(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%B = new_value
	end subroutine set_reflection_B
	
	function get_reflection_BB(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_BB
	get_reflection_BB = obj_var%BB
	end function get_reflection_BB
	
	subroutine set_reflection_BB(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%BB = new_value
	end subroutine set_reflection_BB
	
	function get_reflection_H(obj_var)
	type (Reflection_Type) :: obj_var
	integer,dimension(3) :: get_reflection_H
	get_reflection_H = obj_var%H
	end function get_reflection_H
	
	subroutine set_reflection_H(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	integer,dimension(3), intent(in) :: new_value
	obj_var%H = new_value
	end subroutine set_reflection_H
	
	function get_reflection_SFo(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_SFo
	get_reflection_SFo = obj_var%SFo
	end function get_reflection_SFo
	
	subroutine set_reflection_SFo(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%SFo = new_value
	end subroutine set_reflection_SFo
	
	function get_reflection_S(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_S
	get_reflection_S = obj_var%S
	end function get_reflection_S
	
	subroutine set_reflection_S(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%S = new_value
	end subroutine set_reflection_S
	
	function get_reflection_Fc(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_Fc
	get_reflection_Fc = obj_var%Fc
	end function get_reflection_Fc
	
	subroutine set_reflection_Fc(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Fc = new_value
	end subroutine set_reflection_Fc
	
	function get_reflection_W(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_W
	get_reflection_W = obj_var%W
	end function get_reflection_W
	
	subroutine set_reflection_W(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%W = new_value
	end subroutine set_reflection_W
	
	function get_reflection_Phase(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_Phase
	get_reflection_Phase = obj_var%Phase
	end function get_reflection_Phase
	
	subroutine set_reflection_Phase(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Phase = new_value
	end subroutine set_reflection_Phase
	
	function get_reflection_Mult(obj_var)
	type (Reflection_Type) :: obj_var
	integer :: get_reflection_Mult
	get_reflection_Mult = obj_var%Mult
	end function get_reflection_Mult
	
	subroutine set_reflection_Mult(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Mult = new_value
	end subroutine set_reflection_Mult
	
	function get_reflection_Fo(obj_var)
	type (Reflection_Type) :: obj_var
	real(kind=cp) :: get_reflection_Fo
	get_reflection_Fo = obj_var%Fo
	end function get_reflection_Fo
	
	subroutine set_reflection_Fo(obj_var, new_value)
	type (Reflection_Type) :: obj_var
	real(kind=cp), intent(in) :: new_value
	obj_var%Fo = new_value
	end subroutine set_reflection_Fo
	
	subroutine Reflection_Type_ctor(Reflection_Type_param, A_param, AA_param, B_param, BB_param, H_param, SFo_param, S_param, Fc_param, W_param, Phase_param, Mult_param, Fo_param)
	type (Reflection_Type) :: Reflection_Type_param
	real(kind=cp), intent(in) :: A_param
	real(kind=cp), intent(in) :: AA_param
	real(kind=cp), intent(in) :: B_param
	real(kind=cp), intent(in) :: BB_param
	integer,dimension(3), intent(in) :: H_param
	real(kind=cp), intent(in) :: SFo_param
	real(kind=cp), intent(in) :: S_param
	real(kind=cp), intent(in) :: Fc_param
	real(kind=cp), intent(in) :: W_param
	real(kind=cp), intent(in) :: Phase_param
	integer, intent(in) :: Mult_param
	real(kind=cp), intent(in) :: Fo_param
	Reflection_Type_param%A = A_param
	Reflection_Type_param%AA = AA_param
	Reflection_Type_param%B = B_param
	Reflection_Type_param%BB = BB_param
	Reflection_Type_param%H = H_param
	Reflection_Type_param%SFo = SFo_param
	Reflection_Type_param%S = S_param
	Reflection_Type_param%Fc = Fc_param
	Reflection_Type_param%W = W_param
	Reflection_Type_param%Phase = Phase_param
	Reflection_Type_param%Mult = Mult_param
	Reflection_Type_param%Fo = Fo_param
	end subroutine Reflection_Type_ctor
	function get_ns_space_group_Centred(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	integer :: get_ns_space_group_Centred
	get_ns_space_group_Centred = obj_var%Centred
	end function get_ns_space_group_Centred
	
	subroutine set_ns_space_group_Centred(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Centred = new_value
	end subroutine set_ns_space_group_Centred
	
	function get_ns_space_group_SymopSymb(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=50),      allocatable,dimension(:) :: get_ns_space_group_SymopSymb
	get_ns_space_group_SymopSymb = obj_var%SymopSymb
	end function get_ns_space_group_SymopSymb
	
	subroutine set_ns_space_group_SymopSymb(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=50),      allocatable,dimension(:), intent(in) :: new_value
	obj_var%SymopSymb = new_value
	end subroutine set_ns_space_group_SymopSymb
	
	function get_ns_space_group_NumSpg(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	integer :: get_ns_space_group_NumSpg
	get_ns_space_group_NumSpg = obj_var%NumSpg
	end function get_ns_space_group_NumSpg
	
	subroutine set_ns_space_group_NumSpg(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumSpg = new_value
	end subroutine set_ns_space_group_NumSpg
	
	function get_ns_space_group_Latt_trans(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:) :: get_ns_space_group_Latt_trans
	get_ns_space_group_Latt_trans = obj_var%Latt_trans
	end function get_ns_space_group_Latt_trans
	
	subroutine set_ns_space_group_Latt_trans(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: new_value
	obj_var%Latt_trans = new_value
	end subroutine set_ns_space_group_Latt_trans
	
	function get_ns_space_group_CrystalSys(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=12) :: get_ns_space_group_CrystalSys
	get_ns_space_group_CrystalSys = obj_var%CrystalSys
	end function get_ns_space_group_CrystalSys
	
	subroutine set_ns_space_group_CrystalSys(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=12), intent(in) :: new_value
	obj_var%CrystalSys = new_value
	end subroutine set_ns_space_group_CrystalSys
	
	function get_ns_space_group_NumLat(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	integer :: get_ns_space_group_NumLat
	get_ns_space_group_NumLat = obj_var%NumLat
	end function get_ns_space_group_NumLat
	
	subroutine set_ns_space_group_NumLat(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumLat = new_value
	end subroutine set_ns_space_group_NumLat
	
	function get_ns_space_group_PG(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 5) :: get_ns_space_group_PG
	get_ns_space_group_PG = obj_var%PG
	end function get_ns_space_group_PG
	
	subroutine set_ns_space_group_PG(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 5), intent(in) :: new_value
	obj_var%PG = new_value
	end subroutine set_ns_space_group_PG
	
	function get_ns_space_group_Hall(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=16) :: get_ns_space_group_Hall
	get_ns_space_group_Hall = obj_var%Hall
	end function get_ns_space_group_Hall
	
	subroutine set_ns_space_group_Hall(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=16), intent(in) :: new_value
	obj_var%Hall = new_value
	end subroutine set_ns_space_group_Hall
	
	function get_ns_space_group_Info(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 5) :: get_ns_space_group_Info
	get_ns_space_group_Info = obj_var%Info
	end function get_ns_space_group_Info
	
	subroutine set_ns_space_group_Info(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 5), intent(in) :: new_value
	obj_var%Info = new_value
	end subroutine set_ns_space_group_Info
	
	function get_ns_space_group_SPG_lat(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 1) :: get_ns_space_group_SPG_lat
	get_ns_space_group_SPG_lat = obj_var%SPG_lat
	end function get_ns_space_group_SPG_lat
	
	subroutine set_ns_space_group_SPG_lat(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 1), intent(in) :: new_value
	obj_var%SPG_lat = new_value
	end subroutine set_ns_space_group_SPG_lat
	
	function get_ns_space_group_Laue(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 5) :: get_ns_space_group_Laue
	get_ns_space_group_Laue = obj_var%Laue
	end function get_ns_space_group_Laue
	
	subroutine set_ns_space_group_Laue(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 5), intent(in) :: new_value
	obj_var%Laue = new_value
	end subroutine set_ns_space_group_Laue
	
	function get_ns_space_group_SPG_latsy(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 2) :: get_ns_space_group_SPG_latsy
	get_ns_space_group_SPG_latsy = obj_var%SPG_latsy
	end function get_ns_space_group_SPG_latsy
	
	subroutine set_ns_space_group_SPG_latsy(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len= 2), intent(in) :: new_value
	obj_var%SPG_latsy = new_value
	end subroutine set_ns_space_group_SPG_latsy
	
	function get_ns_space_group_Num_gen(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	integer :: get_ns_space_group_Num_gen
	get_ns_space_group_Num_gen = obj_var%Num_gen
	end function get_ns_space_group_Num_gen
	
	subroutine set_ns_space_group_Num_gen(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_gen = new_value
	end subroutine set_ns_space_group_Num_gen
	
	function get_ns_space_group_Bravais(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=51) :: get_ns_space_group_Bravais
	get_ns_space_group_Bravais = obj_var%Bravais
	end function get_ns_space_group_Bravais
	
	subroutine set_ns_space_group_Bravais(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=51), intent(in) :: new_value
	obj_var%Bravais = new_value
	end subroutine set_ns_space_group_Bravais
	
	function get_ns_space_group_SG_setting(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=90) :: get_ns_space_group_SG_setting
	get_ns_space_group_SG_setting = obj_var%SG_setting
	end function get_ns_space_group_SG_setting
	
	subroutine set_ns_space_group_SG_setting(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=90), intent(in) :: new_value
	obj_var%SG_setting = new_value
	end subroutine set_ns_space_group_SG_setting
	
	function get_ns_space_group_gHall(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=90) :: get_ns_space_group_gHall
	get_ns_space_group_gHall = obj_var%gHall
	end function get_ns_space_group_gHall
	
	subroutine set_ns_space_group_gHall(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=90), intent(in) :: new_value
	obj_var%gHall = new_value
	end subroutine set_ns_space_group_gHall
	
	function get_ns_space_group_SPG_Symb(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=20) :: get_ns_space_group_SPG_Symb
	get_ns_space_group_SPG_Symb = obj_var%SPG_Symb
	end function get_ns_space_group_SPG_Symb
	
	subroutine set_ns_space_group_SPG_Symb(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=20), intent(in) :: new_value
	obj_var%SPG_Symb = new_value
	end subroutine set_ns_space_group_SPG_Symb
	
	function get_ns_space_group_Centre_coord(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_ns_space_group_Centre_coord
	get_ns_space_group_Centre_coord = obj_var%Centre_coord
	end function get_ns_space_group_Centre_coord
	
	subroutine set_ns_space_group_Centre_coord(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%Centre_coord = new_value
	end subroutine set_ns_space_group_Centre_coord
	
	function get_ns_space_group_SymOp(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	type(NS_Sym_Oper_Type), allocatable,dimension(:) :: get_ns_space_group_SymOp
	get_ns_space_group_SymOp = obj_var%SymOp
	end function get_ns_space_group_SymOp
	
	subroutine set_ns_space_group_SymOp(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	type(NS_Sym_Oper_Type), allocatable,dimension(:), intent(in) :: new_value
	obj_var%SymOp = new_value
	end subroutine set_ns_space_group_SymOp
	
	function get_ns_space_group_Centre(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	character(len=80) :: get_ns_space_group_Centre
	get_ns_space_group_Centre = obj_var%Centre
	end function get_ns_space_group_Centre
	
	subroutine set_ns_space_group_Centre(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	character(len=80), intent(in) :: new_value
	obj_var%Centre = new_value
	end subroutine set_ns_space_group_Centre
	
	function get_ns_space_group_NumOps(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	integer :: get_ns_space_group_NumOps
	get_ns_space_group_NumOps = obj_var%NumOps
	end function get_ns_space_group_NumOps
	
	subroutine set_ns_space_group_NumOps(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumOps = new_value
	end subroutine set_ns_space_group_NumOps
	
	function get_ns_space_group_Multip(obj_var)
	type (NS_Space_Group_Type) :: obj_var
	integer :: get_ns_space_group_Multip
	get_ns_space_group_Multip = obj_var%Multip
	end function get_ns_space_group_Multip
	
	subroutine set_ns_space_group_Multip(obj_var, new_value)
	type (NS_Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Multip = new_value
	end subroutine set_ns_space_group_Multip
	
	subroutine NS_Space_Group_Type_ctor(NS_Space_Group_Type_param, Centred_param, SymopSymb_param, NumSpg_param, Latt_trans_param, CrystalSys_param, NumLat_param, PG_param, Hall_param, Info_param, SPG_lat_param, Laue_param, SPG_latsy_param, Num_gen_param, Bravais_param, SG_setting_param, gHall_param, SPG_Symb_param, Centre_coord_param, SymOp_param, Centre_param, NumOps_param, Multip_param)
	type (NS_Space_Group_Type) :: NS_Space_Group_Type_param
	integer, intent(in) :: Centred_param
	character(len=50),      allocatable,dimension(:), intent(in) :: SymopSymb_param
	integer, intent(in) :: NumSpg_param
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: Latt_trans_param
	character(len=12), intent(in) :: CrystalSys_param
	integer, intent(in) :: NumLat_param
	character(len= 5), intent(in) :: PG_param
	character(len=16), intent(in) :: Hall_param
	character(len= 5), intent(in) :: Info_param
	character(len= 1), intent(in) :: SPG_lat_param
	character(len= 5), intent(in) :: Laue_param
	character(len= 2), intent(in) :: SPG_latsy_param
	integer, intent(in) :: Num_gen_param
	character(len=51), intent(in) :: Bravais_param
	character(len=90), intent(in) :: SG_setting_param
	character(len=90), intent(in) :: gHall_param
	character(len=20), intent(in) :: SPG_Symb_param
	real(kind=cp), dimension(3), intent(in) :: Centre_coord_param
	type(NS_Sym_Oper_Type), allocatable,dimension(:), intent(in) :: SymOp_param
	character(len=80), intent(in) :: Centre_param
	integer, intent(in) :: NumOps_param
	integer, intent(in) :: Multip_param
	NS_Space_Group_Type_param%Centred = Centred_param
	NS_Space_Group_Type_param%SymopSymb = SymopSymb_param
	NS_Space_Group_Type_param%NumSpg = NumSpg_param
	NS_Space_Group_Type_param%Latt_trans = Latt_trans_param
	NS_Space_Group_Type_param%CrystalSys = CrystalSys_param
	NS_Space_Group_Type_param%NumLat = NumLat_param
	NS_Space_Group_Type_param%PG = PG_param
	NS_Space_Group_Type_param%Hall = Hall_param
	NS_Space_Group_Type_param%Info = Info_param
	NS_Space_Group_Type_param%SPG_lat = SPG_lat_param
	NS_Space_Group_Type_param%Laue = Laue_param
	NS_Space_Group_Type_param%SPG_latsy = SPG_latsy_param
	NS_Space_Group_Type_param%Num_gen = Num_gen_param
	NS_Space_Group_Type_param%Bravais = Bravais_param
	NS_Space_Group_Type_param%SG_setting = SG_setting_param
	NS_Space_Group_Type_param%gHall = gHall_param
	NS_Space_Group_Type_param%SPG_Symb = SPG_Symb_param
	NS_Space_Group_Type_param%Centre_coord = Centre_coord_param
	NS_Space_Group_Type_param%SymOp = SymOp_param
	NS_Space_Group_Type_param%Centre = Centre_param
	NS_Space_Group_Type_param%NumOps = NumOps_param
	NS_Space_Group_Type_param%Multip = Multip_param
	end subroutine NS_Space_Group_Type_ctor
	function get_ns_sym_oper_Tr(obj_var)
	type (NS_Sym_Oper_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_ns_sym_oper_Tr
	get_ns_sym_oper_Tr = obj_var%Tr
	end function get_ns_sym_oper_Tr
	
	subroutine set_ns_sym_oper_Tr(obj_var, new_value)
	type (NS_Sym_Oper_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%Tr = new_value
	end subroutine set_ns_sym_oper_Tr
	
	function get_ns_sym_oper_Rot(obj_var)
	type (NS_Sym_Oper_Type) :: obj_var
	real(kind=cp), dimension(3,3) :: get_ns_sym_oper_Rot
	get_ns_sym_oper_Rot = obj_var%Rot
	end function get_ns_sym_oper_Rot
	
	subroutine set_ns_sym_oper_Rot(obj_var, new_value)
	type (NS_Sym_Oper_Type) :: obj_var
	real(kind=cp), dimension(3,3), intent(in) :: new_value
	obj_var%Rot = new_value
	end subroutine set_ns_sym_oper_Rot
	
	subroutine NS_Sym_Oper_Type_ctor(NS_Sym_Oper_Type_param, Tr_param, Rot_param)
	type (NS_Sym_Oper_Type) :: NS_Sym_Oper_Type_param
	real(kind=cp), dimension(3), intent(in) :: Tr_param
	real(kind=cp), dimension(3,3), intent(in) :: Rot_param
	NS_Sym_Oper_Type_param%Tr = Tr_param
	NS_Sym_Oper_Type_param%Rot = Rot_param
	end subroutine NS_Sym_Oper_Type_ctor
	function get_space_group_Centred(obj_var)
	type (Space_Group_Type) :: obj_var
	integer :: get_space_group_Centred
	get_space_group_Centred = obj_var%Centred
	end function get_space_group_Centred
	
	subroutine set_space_group_Centred(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Centred = new_value
	end subroutine set_space_group_Centred
	
	function get_space_group_Centre_coord(obj_var)
	type (Space_Group_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_space_group_Centre_coord
	get_space_group_Centre_coord = obj_var%Centre_coord
	end function get_space_group_Centre_coord
	
	subroutine set_space_group_Centre_coord(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%Centre_coord = new_value
	end subroutine set_space_group_Centre_coord
	
	function get_space_group_Latt_trans(obj_var)
	type (Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:) :: get_space_group_Latt_trans
	get_space_group_Latt_trans = obj_var%Latt_trans
	end function get_space_group_Latt_trans
	
	subroutine set_space_group_Latt_trans(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: new_value
	obj_var%Latt_trans = new_value
	end subroutine set_space_group_Latt_trans
	
	function get_space_group_Hexa(obj_var)
	type (Space_Group_Type) :: obj_var
	logical :: get_space_group_Hexa
	get_space_group_Hexa = obj_var%Hexa
	end function get_space_group_Hexa
	
	subroutine set_space_group_Hexa(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	logical, intent(in) :: new_value
	obj_var%Hexa = new_value
	end subroutine set_space_group_Hexa
	
	function get_space_group_NumSpg(obj_var)
	type (Space_Group_Type) :: obj_var
	integer :: get_space_group_NumSpg
	get_space_group_NumSpg = obj_var%NumSpg
	end function get_space_group_NumSpg
	
	subroutine set_space_group_NumSpg(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumSpg = new_value
	end subroutine set_space_group_NumSpg
	
	function get_space_group_SymopSymb(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=50),   allocatable,dimension(:) :: get_space_group_SymopSymb
	get_space_group_SymopSymb = obj_var%SymopSymb
	end function get_space_group_SymopSymb
	
	subroutine set_space_group_SymopSymb(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=50),   allocatable,dimension(:), intent(in) :: new_value
	obj_var%SymopSymb = new_value
	end subroutine set_space_group_SymopSymb
	
	function get_space_group_CrystalSys(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=12) :: get_space_group_CrystalSys
	get_space_group_CrystalSys = obj_var%CrystalSys
	end function get_space_group_CrystalSys
	
	subroutine set_space_group_CrystalSys(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=12), intent(in) :: new_value
	obj_var%CrystalSys = new_value
	end subroutine set_space_group_CrystalSys
	
	function get_space_group_NumLat(obj_var)
	type (Space_Group_Type) :: obj_var
	integer :: get_space_group_NumLat
	get_space_group_NumLat = obj_var%NumLat
	end function get_space_group_NumLat
	
	subroutine set_space_group_NumLat(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumLat = new_value
	end subroutine set_space_group_NumLat
	
	function get_space_group_PG(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len= 5) :: get_space_group_PG
	get_space_group_PG = obj_var%PG
	end function get_space_group_PG
	
	subroutine set_space_group_PG(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len= 5), intent(in) :: new_value
	obj_var%PG = new_value
	end subroutine set_space_group_PG
	
	function get_space_group_Wyckoff(obj_var)
	type (Space_Group_Type) :: obj_var
	type(Wyckoff_Type) :: get_space_group_Wyckoff
	get_space_group_Wyckoff = obj_var%Wyckoff
	end function get_space_group_Wyckoff
	
	subroutine set_space_group_Wyckoff(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	type(Wyckoff_Type), intent(in) :: new_value
	obj_var%Wyckoff = new_value
	end subroutine set_space_group_Wyckoff
	
	function get_space_group_Hall(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=16) :: get_space_group_Hall
	get_space_group_Hall = obj_var%Hall
	end function get_space_group_Hall
	
	subroutine set_space_group_Hall(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=16), intent(in) :: new_value
	obj_var%Hall = new_value
	end subroutine set_space_group_Hall
	
	function get_space_group_Info(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len= 5) :: get_space_group_Info
	get_space_group_Info = obj_var%Info
	end function get_space_group_Info
	
	subroutine set_space_group_Info(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len= 5), intent(in) :: new_value
	obj_var%Info = new_value
	end subroutine set_space_group_Info
	
	function get_space_group_SPG_lat(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len= 1) :: get_space_group_SPG_lat
	get_space_group_SPG_lat = obj_var%SPG_lat
	end function get_space_group_SPG_lat
	
	subroutine set_space_group_SPG_lat(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len= 1), intent(in) :: new_value
	obj_var%SPG_lat = new_value
	end subroutine set_space_group_SPG_lat
	
	function get_space_group_Laue(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len= 5) :: get_space_group_Laue
	get_space_group_Laue = obj_var%Laue
	end function get_space_group_Laue
	
	subroutine set_space_group_Laue(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len= 5), intent(in) :: new_value
	obj_var%Laue = new_value
	end subroutine set_space_group_Laue
	
	function get_space_group_SPG_latsy(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len= 2) :: get_space_group_SPG_latsy
	get_space_group_SPG_latsy = obj_var%SPG_latsy
	end function get_space_group_SPG_latsy
	
	subroutine set_space_group_SPG_latsy(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len= 2), intent(in) :: new_value
	obj_var%SPG_latsy = new_value
	end subroutine set_space_group_SPG_latsy
	
	function get_space_group_Num_gen(obj_var)
	type (Space_Group_Type) :: obj_var
	integer :: get_space_group_Num_gen
	get_space_group_Num_gen = obj_var%Num_gen
	end function get_space_group_Num_gen
	
	subroutine set_space_group_Num_gen(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Num_gen = new_value
	end subroutine set_space_group_Num_gen
	
	function get_space_group_Bravais(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=51) :: get_space_group_Bravais
	get_space_group_Bravais = obj_var%Bravais
	end function get_space_group_Bravais
	
	subroutine set_space_group_Bravais(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=51), intent(in) :: new_value
	obj_var%Bravais = new_value
	end subroutine set_space_group_Bravais
	
	function get_space_group_SG_setting(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=90) :: get_space_group_SG_setting
	get_space_group_SG_setting = obj_var%SG_setting
	end function get_space_group_SG_setting
	
	subroutine set_space_group_SG_setting(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=90), intent(in) :: new_value
	obj_var%SG_setting = new_value
	end subroutine set_space_group_SG_setting
	
	function get_space_group_gHall(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=90) :: get_space_group_gHall
	get_space_group_gHall = obj_var%gHall
	end function get_space_group_gHall
	
	subroutine set_space_group_gHall(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=90), intent(in) :: new_value
	obj_var%gHall = new_value
	end subroutine set_space_group_gHall
	
	function get_space_group_SPG_Symb(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=20) :: get_space_group_SPG_Symb
	get_space_group_SPG_Symb = obj_var%SPG_Symb
	end function get_space_group_SPG_Symb
	
	subroutine set_space_group_SPG_Symb(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=20), intent(in) :: new_value
	obj_var%SPG_Symb = new_value
	end subroutine set_space_group_SPG_Symb
	
	function get_space_group_Centre(obj_var)
	type (Space_Group_Type) :: obj_var
	character(len=80) :: get_space_group_Centre
	get_space_group_Centre = obj_var%Centre
	end function get_space_group_Centre
	
	subroutine set_space_group_Centre(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	character(len=80), intent(in) :: new_value
	obj_var%Centre = new_value
	end subroutine set_space_group_Centre
	
	function get_space_group_SymOp(obj_var)
	type (Space_Group_Type) :: obj_var
	type(Sym_Oper_Type), allocatable,dimension(:) :: get_space_group_SymOp
	get_space_group_SymOp = obj_var%SymOp
	end function get_space_group_SymOp
	
	subroutine set_space_group_SymOp(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	type(Sym_Oper_Type), allocatable,dimension(:), intent(in) :: new_value
	obj_var%SymOp = new_value
	end subroutine set_space_group_SymOp
	
	function get_space_group_NumOps(obj_var)
	type (Space_Group_Type) :: obj_var
	integer :: get_space_group_NumOps
	get_space_group_NumOps = obj_var%NumOps
	end function get_space_group_NumOps
	
	subroutine set_space_group_NumOps(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%NumOps = new_value
	end subroutine set_space_group_NumOps
	
	function get_space_group_R_Asym_Unit(obj_var)
	type (Space_Group_Type) :: obj_var
	real(kind=cp),dimension(3,2) :: get_space_group_R_Asym_Unit
	get_space_group_R_Asym_Unit = obj_var%R_Asym_Unit
	end function get_space_group_R_Asym_Unit
	
	subroutine set_space_group_R_Asym_Unit(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	real(kind=cp),dimension(3,2), intent(in) :: new_value
	obj_var%R_Asym_Unit = new_value
	end subroutine set_space_group_R_Asym_Unit
	
	function get_space_group_Multip(obj_var)
	type (Space_Group_Type) :: obj_var
	integer :: get_space_group_Multip
	get_space_group_Multip = obj_var%Multip
	end function get_space_group_Multip
	
	subroutine set_space_group_Multip(obj_var, new_value)
	type (Space_Group_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%Multip = new_value
	end subroutine set_space_group_Multip
	
	subroutine Space_Group_Type_ctor(Space_Group_Type_param, Centred_param, Centre_coord_param, Latt_trans_param, Hexa_param, NumSpg_param, SymopSymb_param, CrystalSys_param, NumLat_param, PG_param, Wyckoff_param, Hall_param, Info_param, SPG_lat_param, Laue_param, SPG_latsy_param, Num_gen_param, Bravais_param, SG_setting_param, gHall_param, SPG_Symb_param, Centre_param, SymOp_param, NumOps_param, R_Asym_Unit_param, Multip_param)
	type (Space_Group_Type) :: Space_Group_Type_param
	integer, intent(in) :: Centred_param
	real(kind=cp), dimension(3), intent(in) :: Centre_coord_param
	real(kind=cp), allocatable,dimension(:,:), intent(in) :: Latt_trans_param
	logical, intent(in) :: Hexa_param
	integer, intent(in) :: NumSpg_param
	character(len=50),   allocatable,dimension(:), intent(in) :: SymopSymb_param
	character(len=12), intent(in) :: CrystalSys_param
	integer, intent(in) :: NumLat_param
	character(len= 5), intent(in) :: PG_param
	type(Wyckoff_Type), intent(in) :: Wyckoff_param
	character(len=16), intent(in) :: Hall_param
	character(len= 5), intent(in) :: Info_param
	character(len= 1), intent(in) :: SPG_lat_param
	character(len= 5), intent(in) :: Laue_param
	character(len= 2), intent(in) :: SPG_latsy_param
	integer, intent(in) :: Num_gen_param
	character(len=51), intent(in) :: Bravais_param
	character(len=90), intent(in) :: SG_setting_param
	character(len=90), intent(in) :: gHall_param
	character(len=20), intent(in) :: SPG_Symb_param
	character(len=80), intent(in) :: Centre_param
	type(Sym_Oper_Type), allocatable,dimension(:), intent(in) :: SymOp_param
	integer, intent(in) :: NumOps_param
	real(kind=cp),dimension(3,2), intent(in) :: R_Asym_Unit_param
	integer, intent(in) :: Multip_param
	Space_Group_Type_param%Centred = Centred_param
	Space_Group_Type_param%Centre_coord = Centre_coord_param
	Space_Group_Type_param%Latt_trans = Latt_trans_param
	Space_Group_Type_param%Hexa = Hexa_param
	Space_Group_Type_param%NumSpg = NumSpg_param
	Space_Group_Type_param%SymopSymb = SymopSymb_param
	Space_Group_Type_param%CrystalSys = CrystalSys_param
	Space_Group_Type_param%NumLat = NumLat_param
	Space_Group_Type_param%PG = PG_param
	Space_Group_Type_param%Wyckoff = Wyckoff_param
	Space_Group_Type_param%Hall = Hall_param
	Space_Group_Type_param%Info = Info_param
	Space_Group_Type_param%SPG_lat = SPG_lat_param
	Space_Group_Type_param%Laue = Laue_param
	Space_Group_Type_param%SPG_latsy = SPG_latsy_param
	Space_Group_Type_param%Num_gen = Num_gen_param
	Space_Group_Type_param%Bravais = Bravais_param
	Space_Group_Type_param%SG_setting = SG_setting_param
	Space_Group_Type_param%gHall = gHall_param
	Space_Group_Type_param%SPG_Symb = SPG_Symb_param
	Space_Group_Type_param%Centre = Centre_param
	Space_Group_Type_param%SymOp = SymOp_param
	Space_Group_Type_param%NumOps = NumOps_param
	Space_Group_Type_param%R_Asym_Unit = R_Asym_Unit_param
	Space_Group_Type_param%Multip = Multip_param
	end subroutine Space_Group_Type_ctor
	function get_sym_oper_Tr(obj_var)
	type (Sym_Oper_Type) :: obj_var
	real(kind=cp), dimension(3) :: get_sym_oper_Tr
	get_sym_oper_Tr = obj_var%Tr
	end function get_sym_oper_Tr
	
	subroutine set_sym_oper_Tr(obj_var, new_value)
	type (Sym_Oper_Type) :: obj_var
	real(kind=cp), dimension(3), intent(in) :: new_value
	obj_var%Tr = new_value
	end subroutine set_sym_oper_Tr
	
	function get_sym_oper_Rot(obj_var)
	type (Sym_Oper_Type) :: obj_var
	integer,       dimension(3,3) :: get_sym_oper_Rot
	get_sym_oper_Rot = obj_var%Rot
	end function get_sym_oper_Rot
	
	subroutine set_sym_oper_Rot(obj_var, new_value)
	type (Sym_Oper_Type) :: obj_var
	integer,       dimension(3,3), intent(in) :: new_value
	obj_var%Rot = new_value
	end subroutine set_sym_oper_Rot
	
	subroutine Sym_Oper_Type_ctor(Sym_Oper_Type_param, Tr_param, Rot_param)
	type (Sym_Oper_Type) :: Sym_Oper_Type_param
	real(kind=cp), dimension(3), intent(in) :: Tr_param
	integer,       dimension(3,3), intent(in) :: Rot_param
	Sym_Oper_Type_param%Tr = Tr_param
	Sym_Oper_Type_param%Rot = Rot_param
	end subroutine Sym_Oper_Type_ctor
	function get_wyck_pos_norb(obj_var)
	type (Wyck_Pos_Type) :: obj_var
	integer :: get_wyck_pos_norb
	get_wyck_pos_norb = obj_var%norb
	end function get_wyck_pos_norb
	
	subroutine set_wyck_pos_norb(obj_var, new_value)
	type (Wyck_Pos_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%norb = new_value
	end subroutine set_wyck_pos_norb
	
	function get_wyck_pos_str_orig(obj_var)
	type (Wyck_Pos_Type) :: obj_var
	character(len=40) :: get_wyck_pos_str_orig
	get_wyck_pos_str_orig = obj_var%str_orig
	end function get_wyck_pos_str_orig
	
	subroutine set_wyck_pos_str_orig(obj_var, new_value)
	type (Wyck_Pos_Type) :: obj_var
	character(len=40), intent(in) :: new_value
	obj_var%str_orig = new_value
	end subroutine set_wyck_pos_str_orig
	
	function get_wyck_pos_multp(obj_var)
	type (Wyck_Pos_Type) :: obj_var
	integer :: get_wyck_pos_multp
	get_wyck_pos_multp = obj_var%multp
	end function get_wyck_pos_multp
	
	subroutine set_wyck_pos_multp(obj_var, new_value)
	type (Wyck_Pos_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%multp = new_value
	end subroutine set_wyck_pos_multp
	
	function get_wyck_pos_site(obj_var)
	type (Wyck_Pos_Type) :: obj_var
	character(len= 6) :: get_wyck_pos_site
	get_wyck_pos_site = obj_var%site
	end function get_wyck_pos_site
	
	subroutine set_wyck_pos_site(obj_var, new_value)
	type (Wyck_Pos_Type) :: obj_var
	character(len= 6), intent(in) :: new_value
	obj_var%site = new_value
	end subroutine set_wyck_pos_site
	
	function get_wyck_pos_str_orbit(obj_var)
	type (Wyck_Pos_Type) :: obj_var
	character(len=40),dimension(48) :: get_wyck_pos_str_orbit
	get_wyck_pos_str_orbit = obj_var%str_orbit
	end function get_wyck_pos_str_orbit
	
	subroutine set_wyck_pos_str_orbit(obj_var, new_value)
	type (Wyck_Pos_Type) :: obj_var
	character(len=40),dimension(48), intent(in) :: new_value
	obj_var%str_orbit = new_value
	end subroutine set_wyck_pos_str_orbit
	
	subroutine Wyck_Pos_Type_ctor(Wyck_Pos_Type_param, norb_param, str_orig_param, multp_param, site_param, str_orbit_param)
	type (Wyck_Pos_Type) :: Wyck_Pos_Type_param
	integer, intent(in) :: norb_param
	character(len=40), intent(in) :: str_orig_param
	integer, intent(in) :: multp_param
	character(len= 6), intent(in) :: site_param
	character(len=40),dimension(48), intent(in) :: str_orbit_param
	Wyck_Pos_Type_param%norb = norb_param
	Wyck_Pos_Type_param%str_orig = str_orig_param
	Wyck_Pos_Type_param%multp = multp_param
	Wyck_Pos_Type_param%site = site_param
	Wyck_Pos_Type_param%str_orbit = str_orbit_param
	end subroutine Wyck_Pos_Type_ctor
	function get_wyckoff_num_orbit(obj_var)
	type (Wyckoff_Type) :: obj_var
	integer :: get_wyckoff_num_orbit
	get_wyckoff_num_orbit = obj_var%num_orbit
	end function get_wyckoff_num_orbit
	
	subroutine set_wyckoff_num_orbit(obj_var, new_value)
	type (Wyckoff_Type) :: obj_var
	integer, intent(in) :: new_value
	obj_var%num_orbit = new_value
	end subroutine set_wyckoff_num_orbit
	
	function get_wyckoff_orbit(obj_var)
	type (Wyckoff_Type) :: obj_var
	type(wyck_pos_type), dimension(26) :: get_wyckoff_orbit
	get_wyckoff_orbit = obj_var%orbit
	end function get_wyckoff_orbit
	
	subroutine set_wyckoff_orbit(obj_var, new_value)
	type (Wyckoff_Type) :: obj_var
	type(wyck_pos_type), dimension(26), intent(in) :: new_value
	obj_var%orbit = new_value
	end subroutine set_wyckoff_orbit
	
	subroutine Wyckoff_Type_ctor(Wyckoff_Type_param, num_orbit_param, orbit_param)
	type (Wyckoff_Type) :: Wyckoff_Type_param
	integer, intent(in) :: num_orbit_param
	type(wyck_pos_type), dimension(26), intent(in) :: orbit_param
	Wyckoff_Type_param%num_orbit = num_orbit_param
	Wyckoff_Type_param%orbit = orbit_param
	end subroutine Wyckoff_Type_ctor
End Module cfml_python
