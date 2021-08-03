#ifndef AEROPUERTO_HPP
#define AEROPUERTO_HPP

#include <conio.h>
#include <stdio.h>
#include <unistd.h>

#include "Arbol.hpp"
#include "Box.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
#include "NodoArbol.hpp"
#include "Pasajero.hpp"
#include "Pila.hpp"

class Aeropuerto
{
public:
    Aeropuerto();
    ~Aeropuerto();
    Cola gestionAeropuerto(Cola cola_inicio);
};

#endif // AEROPUERTO_HPP
