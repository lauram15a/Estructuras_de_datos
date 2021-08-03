#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"

class Pila
{
public:
    Pila();
    ~Pila();
    
    void insertar (int v);
    int extraer();
    void mostrar();
    
private: 
    pnp ultimo;


};

#endif // PILA_HPP
