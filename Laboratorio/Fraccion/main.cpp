#include "Fraccion.hpp"
#include <stdio.h>

Fraccion Sumar(Fraccion x, Fraccion y)
{
    int auxden = x.GetDen() * y.GetDen();
    int auxnum = (x.GetNum() * y.GetDen()) + (x.GetDen() * y.GetNum());
    Fraccion f(auxnum, auxden);
    return f;
}

int main(int argc, char** argv)
{
    cout << "Ejemplos con constructor" << endl;
    Fraccion f; // Constructor por defecto
    f.Escribir();
    cout << endl;
    Fraccion f2(4, 6); // Constructor con parámetro
    f2.Escribir();
    cout << endl;
    Fraccion* f3 = new Fraccion(14, 8); // Puntero
    // Dos formas de acceder a los métodos:
    cout << "Forma 1: ";
    (*f3).Escribir();
    cout << endl;
    cout << "Forma 2: ";
    f3->Escribir();
    cout << endl << endl;
    cout << "Ejemplos con introduccion de datos: " << endl;
    cout << "Primera fraccion: " << endl;
    f.Crear();
    cout << " Segunda fracción: " << endl;
    f2.Crear();
    cout << "Resultado de la suma:" << endl;
    *f3 = Sumar(f, f2);
    (*f3).Escribir();

    cout << endl << "Resultado de la multiplicación: " << endl;

    Fraccion f4;
    f4.HazMulti(f, f2);
    f4.Escribir();

    return 0;
}
