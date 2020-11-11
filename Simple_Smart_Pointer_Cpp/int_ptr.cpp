// ---------------------------------------------------------------------------------
//
//    Nombre: int_ptr.cpp
//    Autor: Unai De Zía
//    Fecha: 11/11/2020
//    Licencia: CC BY-NC 4.0 https://creativecommons.org/licenses/by-nc/4.0/
//
// ---------------------------------------------------------------------------------

#include "int_ptr.h"

// Class "Int_ptr" definitions
Int_ptr::Int_ptr() : ptr(new int) {}
Int_ptr::Int_ptr(int i) : ptr(new int(3)) {}