#include "NodoCola.hpp"

NodoCola::NodoCola()
{
}

NodoCola::NodoCola(Pasajero p, NodoCola* sig)
{
    pasajero_nc = p;
    siguiente_nc = sig;
}

NodoCola::~NodoCola()
{
}

NodoCola* NodoCola::getSiguiente()
{
    return siguiente_nc;
}

Pasajero NodoCola::getPasajeroNC()
{
    return pasajero_nc;
}