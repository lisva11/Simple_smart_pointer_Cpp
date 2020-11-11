// ---------------------------------------------------------------------------------
//
//    Nombre: main.cpp
//    Autor: Unai De Zía
//    Fecha: 11/11/2020
//    Licencia: CC BY-NC 4.0 https://creativecommons.org/licenses/by-nc/4.0/
//
// ---------------------------------------------------------------------------------
  
#include <iostream>

#include "int_ptr.h"
 
int main(int argc, char** argv) {
 
    // Tildes
    setlocale(LC_ALL, "spanish");
 
    {
        // Entorno local
        Int_ptr smart_ptr(5);

        std::cout << *smart_ptr << std::endl;

        Int_ptr copy_ptr(85);
        smart_ptr = copy_ptr;

        std::cout << *smart_ptr << std::endl;

        if (smart_ptr)
        {
            std::cout << "TRUE" << std::endl;
        }
        else
        {
            std::cout << "FALSE" << std::endl;
        }

        std::cout << *smart_ptr.get() << std::endl;
    }

    std::cout << "Fin del programa\n";

    // Devuelve 0 si se ejecuta correctamente
    return 0;
}