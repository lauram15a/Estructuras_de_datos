#ifndef PILA_HPP
#define PILA_HPP

#include "NodoPila.hpp"
#include "Pasajero.hpp"

class Pila
{
public:
    Pila();
    ~Pila();
    
    //metodos y funciones
    void apilar(Pasajero p);
    void desapilar();
    void imprimir();
    
    //getter y setter
    Pasajero getCimaPasajero();
    bool isVacia();
    
private:
    NodoPila* cima;
};

#endif // PILA_HPP
