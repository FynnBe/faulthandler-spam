from distutils.core import setup, Extension, DEBUG

sfc_module = Extension('test_module', sources = ['module.cpp'])

setup(name = 'test_module', version = '1.0',
    description = 'Python Package with test functions',
    ext_modules = [sfc_module]
    )
