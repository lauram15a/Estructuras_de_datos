#ifndef ARBOL_HPP
#define ARBOL_HPP

#include "NodoArbol.hpp"
#include "Lista.hpp"

#include <iostream>
#include <string.h>

using namespace std;

class Arbol
{
public:
    Arbol();
    ~Arbol();
    Lista inorden(NodoArbol* nabb, Lista& lista_arbol); //el primer parametro que tenemos que meter es la raiz del arbol
    void insertar(Pasajero, NodoArbol*&); //paso por referancia para que el arbol se modifique
    void imprimir(NodoArbol* nodo, int contador);
    
    //getters y setters
    NodoArbol* getRaiz();
    int getRaizPasajero();
    
private:
    NodoArbol* raizz;
    NodoArbol* izquierda;
    NodoArbol* derecha;
    
    friend class Lista;

};
#endif // ARBOL_HPP
