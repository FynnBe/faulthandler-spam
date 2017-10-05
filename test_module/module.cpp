#include <Python.h>
#include <iostream>

PyObject* test_error() {
    try {
        throw std::runtime_error("c++ error message");
    }
    catch (std::runtime_error& error) {
        std::cerr << "caught test error: " << error.what() << std::endl;
    }
    Py_RETURN_NONE;
}

static PyMethodDef test_methods[] = {
    // The first property is the name exposed to python, the second is the C++ function name        
    { "test_error", (PyCFunction)test_error, METH_NOARGS, nullptr },

    // Terminate the array with an object containing nulls.
    { nullptr, nullptr, 0, nullptr }
};

static PyModuleDef test_module = {
    PyModuleDef_HEAD_INIT,
    "test_module",                   // Module name
    "Provides some test functions",  // Module description
    0,
    test_methods                     // Structure that defines the methods
};

PyMODINIT_FUNC PyInit_test_module() {
    return PyModule_Create(&test_module);
}
