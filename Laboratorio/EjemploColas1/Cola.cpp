#include "Cola.hpp"

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    
}


void Cola :: insertar (int v){
    
    pnc nuevo;
    nuevo = new NodoCola(v);
    if (ultimo){
        
        ultimo->siguiente = nuevo;  //el siguiente del último apunta a nuevo
    }
    ultimo = nuevo;
    if(!primero){
        primero = nuevo;
    }
        
}

int Cola :: eliminar(){
    
    pnc nodo; 
    int v;
    nodo = primero;
    if(!nodo){
        return 0;
    }
    
    primero = nodo->siguiente;
    v = nodo->valor;
    delete nodo;
    if(!primero){  //para saber si hemos eliminado todos
        ultimo = NULL;
    }
    return v;
    
}

void Cola :: mostrar(){
    
    pnc aux = primero;
    cout << "Cola: ";
    while (aux) {
        
        cout << "-> " << aux->valor;
        aux = aux->siguiente;
        
    }
    
    cout << endl;
    
}

Cola::~Cola()
{
    
    while(primero){
        eliminar();
    }
    
}

