#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"
#include "Pasajero.hpp"

class NodoCola;

class Cola
{
public:
    Cola();
    ~Cola();
    void encolar(Pasajero p);
    void desencolar(); //solo para cola_inicial (para insertar en árbol)
    void imprimir();
    
    //getters y setters
    Pasajero getPrimeroPasajero();
    NodoCola* getPrimero();
    NodoCola* getUltimo();
    bool isVacia(); 
    
private:
    NodoCola* primero;
    NodoCola* ultimo;

};

#endif // COLA_HPP
