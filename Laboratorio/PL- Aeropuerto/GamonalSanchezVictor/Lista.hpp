#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"

class Lista
{
public:
    Lista();
    ~Lista();
    void enlistar(Pasajero p);
    void insertarDerecha(Pasajero p);
    void insertarIzquierda(Pasajero p); 
    void desenlistar();
    void imprimir();
    
    //getters y setters
    Pasajero getPrimeroPasajero();
    Pasajero getUltimoPasajero();
    bool isVacia();
    
private:
    NodoLista* primero;
    NodoLista* ultimo;

};

#endif // LISTA_HPP
