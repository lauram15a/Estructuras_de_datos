#include "NodoPila.hpp"

//constructor
NodoPila::NodoPila(Pasajero p, NodoPila* sig)
{
    pasajero_np = p;
    siguiente_np = sig;
}

NodoPila::~NodoPila()
{
}
