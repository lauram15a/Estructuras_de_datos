#include "Aeropuerto.hpp"

Aeropuerto::Aeropuerto()
{
}

Aeropuerto::~Aeropuerto()
{
}

Cola Aeropuerto::gestionAeropuerto(Cola cola_inicio)
{
    // VARIABLES //
    Arbol arbol;
    Box box;
    Cola cola_final;
    NodoArbol* nabb = arbol.getRaiz();
    Lista lista_arbol;
    Pila pila;
    Lista lista;                    //entran en la lista con su hora de llegada
    //int tiempo_espera_total = 0;    //la suma de todos los tiempos de espera de los pasajeros que pasan por el box
    int tiempo = 0;                 //se va incrementando +1 cada vuelta
    
    cout << "********** COLA INICIO **********" << endl;
    cout << " " << endl;
    cola_inicio.imprimir();
    while(!cola_inicio.isVacia())                      // COLA_INICIO --> ARBOL
    {
        Pasajero p = cola_inicio.getPrimeroPasajero(); // cogemos el primer pasajero de la cola de inicio
        arbol.insertar(p, nabb);                       // metemos el pasajero en el arbol
        cola_inicio.desencolar();                      // desencolamos quitando el primer pasajero que ya hemos metido en el arbol
    }

    cout << "************* ARBOL *************" << endl;
    cout << " " << endl;
    arbol.imprimir(nabb, 0);
    cout << "  " << endl;

    lista_arbol = arbol.inorden(nabb, lista_arbol);     // ARBOL --> LISTA_ARBOL

    cout << "********** LISTA ARBOL **********" << endl;
    cout << " " << endl;
    lista_arbol.imprimir();

    while(!lista_arbol.isVacia())                       // LISTA_ARBOL --> PILA
    {
        Pasajero pa = lista_arbol.getPrimeroPasajero(); // cogemos el primer pasajero de la lista_arbol
        pila.apilar(pa);                                // metemos el pasajero en la pila (último abajo con menor ID, cima con mayor ID)
        lista_arbol.desenlistar();                      // desenlistamos quitando el pasajero que hemos metido en la pila
    }

    cout << "************** PILA **************" << endl;
    cout << " " << endl;
    pila.imprimir();
    
    //pila vacia --> todos en el aeropuerto   
    //lista vacia --> todos han pasado al box  
    //box vacio --> todos atendidos y fuera del aeropuerto
                                                        
    while((!pila.isVacia()) || (!lista.isVacia()) || (!box.isVacio()))  //PILA --> LISTA --> BOX
    {
        if (!pila.isVacia())
        {
            Pasajero pasajeroPila = pila.getCimaPasajero();
            if(pasajeroPila.getHora_llegada() == tiempo) // PILA --> LISTA
            {
                lista.enlistar(pasajeroPila);
                pila.desapilar();
                cout << " ####### BIENVENIDO A AEROLINEAS EEDD S.A. ####### " << endl;
                cout << "Entra en el aeropuerto el pasajero con ID: " << pasajeroPila.getId_pasajero() << " con tiempo: " << tiempo << endl;
                cout << "" << endl;
            }
        }

        // DE LISTA NORMAL A BOX
        if (!lista.isVacia())                       //la lista esta llena
        {
            Pasajero pasajeroLista = lista.getPrimeroPasajero();
            if(box.isVacio()) 
            {
                box.meter(pasajeroLista, tiempo-1); // LISTA --> BOX
                //tiempo_espera_total = tiempo_espera_total + box.getPasajero().getTiempo_espera();
                lista.desenlistar();
                box.imprimir(tiempo);
            }
            else   //cuando en el box hay un pasajero
            {
                if (box.getPasajero().getTiempo_box() == tiempo) 
                {
                    cola_final.encolar(box.getPasajero());
                    box.sacar();
                }  
            }
        }
        else        //la lista esta vacia
        {
            if (!box.isVacio())
            {
               if (box.getPasajero().getTiempo_box() == tiempo) 
                {
                    cola_final.encolar(box.getPasajero());
                    box.sacar();
                } 
            }            
        }
        tiempo++;
    }
    return cola_final;
}




