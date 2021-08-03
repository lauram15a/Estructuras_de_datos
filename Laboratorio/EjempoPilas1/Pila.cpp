#include "Pila.hpp"

Pila::Pila()
{
    
    ultimo = NULL;
    
}

void Pila :: insertar(int v){
    
    pnp nuevo;
    nuevo = new NodoPila (v, ultimo);  //se crea pila vacía
    ultimo = nuevo;    //el ultimo elemento va a ser siempre el nuevo (LIFO)
    
    
}

int Pila :: extraer(){
    
    pnp nodo;
    int v;
    
    if (!ultimo) return 0;
    
    nodo = ultimo;
    ultimo = nodo -> siguiente;   //último va a apuntar a la siguiente del nodo
    v = nodo -> valor;
    
    delete nodo;
    return v;
    
}

void Pila :: mostrar(){
    
    pnp aux = ultimo;
    cout << "Mi pila: ";
    while (aux) {
        
        cout << "-> " << aux->valor;
        aux = aux->siguiente;
        
    }
    
    cout << endl;
    
}




Pila::~Pila()
{
    
    pnp aux;
    while(ultimo){
        
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
    
}

