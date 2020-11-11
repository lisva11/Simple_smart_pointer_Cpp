// ---------------------------------------------------------------------------------
//
//    Nombre: int_ptr.h
//    Autor: Unai De Zía
//    Fecha: 11/11/2020
//    Licencia: CC BY-NC 4.0 https://creativecommons.org/licenses/by-nc/4.0/
//
// ---------------------------------------------------------------------------------

#ifndef _INT_PTR_H_
#define INT_PTR_H

#include <iostream>

class Int_ptr
{
	private:	
		int* ptr = nullptr;
	public:
		// Constructores
		Int_ptr();
		explicit Int_ptr(int i);

		// Copy constructor
		Int_ptr(const Int_ptr& t_ptr);

		// Destructor
		~Int_ptr();

		// Overloaded operators
		Int_ptr& operator=(const Int_ptr& t_ptr);
		explicit operator bool() const;
		int& operator*() const;

		// Accessors
		int* get() const;

		// Mutators
		void reset(int* t_ptr = nullptr);
};

#endif