#include "Arbol.hpp"

Arbol::Arbol()
{
    raizz = NULL;
    izquierda = NULL;
    derecha = NULL;
}

Arbol::~Arbol()
{
}


Lista Arbol::inorden(NodoArbol* nabb, Lista& lista_arbol) //el primer parametro que tenemos que meter es la raiz del arbol
{
    if (nabb != NULL)  //la raiz distinta de nulo
    {
        inorden(nabb->izquierda_na, lista_arbol);
        lista_arbol.enlistar(nabb->pasajero_na);
        inorden(nabb->derecha_na, lista_arbol);
    }
    return lista_arbol;
}


void Arbol::insertar(Pasajero p, NodoArbol*& nabb)    //nabb va a ser la raiz cuando lo llamemos por primera vez
{
    NodoArbol* nodo_nuevo = new NodoArbol (p, NULL, NULL);
    
    if (!nabb) //el arbol no tiene raiz, es decir, esta vacio
    {
        nabb = nodo_nuevo;
        raizz = nabb;
    }
    else //sí hay raiz, arbol no vacio
    {
        if (p.getId_pasajero() <= nabb->pasajero_na.getId_pasajero()) //si el id es menor o igual, es decir, por la izquierda
        {
            if (nabb->izquierda_na == NULL)  //si el nodo izq esta vacio
            {
                nabb->izquierda_na = nodo_nuevo;
            }
            else
            {
                insertar(p, nabb->izquierda_na);
            } 
        }
        else //mayor, es decir, por la derecha
        {
            if (nabb->derecha_na == NULL)  //si el nodo dcho esta vacio
            {
                nabb->derecha_na = nodo_nuevo;
            }
            else
            {
                insertar(p, nabb->derecha_na);
            }
        }
    }
}


void Arbol::imprimir(NodoArbol* nodo, int contador)
{
    if (!nodo)  //nodo == NULL arbol esta vacio
    {
        return;
    }
    else  //arbol no vacio
    {
        imprimir(nodo->derecha_na, contador + 1);
        for (int i = 0; i<contador; i++)
        {
            cout << "  ";
        }
        cout << nodo->pasajero_na.getId_pasajero() << endl;
        imprimir(nodo->izquierda_na, contador + 1);
    }
}


//GETTERS Y SETTERS

NodoArbol* Arbol::getRaiz()
{
    return raizz;
} 

int Arbol::getRaizPasajero()
{
    return raizz->pasajero_na.getId_pasajero();
}

