#ifndef NODOPILA_HPP
#define NODOPILA_HPP

#include "Pasajero.hpp"

#include <iostream>
using namespace std;

class Pasajero;

class NodoPila
{
public:
    NodoPila(Pasajero p, NodoPila* sig); 
    ~NodoPila();
    
private:
    Pasajero pasajero_np;
    NodoPila* siguiente_np;
    friend class Pila;
};

#endif // NODOPILA_HPP