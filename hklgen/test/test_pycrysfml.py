import unittest
from pycrysfml import *

class TestCrysFMLIO(unittest.TestCase):
    def test_cfl_reader(self):
        pass
    def test_pcr_reader(self):
        pass
    def test_cif_reader(self):
        pass
    def test_mcif_reader(self):
        pass
    def test_Crystal_Cell(self):
        pass
    def test_SpaceGroup(self):
        pass
    def test_AtomList(self):
        pass
    def test_magAtomList(self):
        pass
    def test_MagSymmetry(self):
        pass
class TestStrFactors(unittest.TestCase):
    def test_test(self):
        "test of green"
        self.assertEqual(type("hello"), str, msg="hello")
        self.assertEqual(type("hello2"), int, msg="NOT AN INT")
    def test_mag_orthohombic(self):
        "Test magnetic structure factor calculations for orthorhombic crystall cell"
        pass
    def test_mag_hexagonal(self):
        "Test magnetic structure factor calculations for hexagonal crystall cell"
        pass
    