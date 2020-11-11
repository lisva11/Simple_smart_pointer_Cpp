// ---------------------------------------------------------------------------------
//
//    Nombre: int_ptr.cpp
//    Autor: Unai De Zía
//    Fecha: 11/11/2020
//    Licencia: CC BY-NC 4.0 https://creativecommons.org/licenses/by-nc/4.0/
//
// ---------------------------------------------------------------------------------

#include <iostream>

#include "int_ptr.h"

// Class "Int_ptr" definitions
Int_ptr::Int_ptr() : ptr(new int(NULL)) {}
Int_ptr::Int_ptr(int i) : ptr(new int(i)) {}
Int_ptr::Int_ptr(const Int_ptr& t_ptr) : ptr(new int(*(t_ptr.ptr))) {}

Int_ptr::~Int_ptr() 
{
	delete ptr;
	std::cout << "[Smart_pointer] Destruido" << std::endl; 
}

Int_ptr& Int_ptr::operator=(const Int_ptr& t_ptr)
{
	*ptr = *(t_ptr.ptr);
	return *this;
}
Int_ptr::operator bool() const
{
	return ptr != nullptr ? true : false;
}
int& Int_ptr::operator*() const
{
	return *ptr;
}

int* Int_ptr::get() const
{
	return ptr;
}

void Int_ptr::reset(int* t_ptr) 
{
	ptr = t_ptr;
}