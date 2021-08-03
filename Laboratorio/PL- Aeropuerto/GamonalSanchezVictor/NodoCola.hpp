#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

#include "Pasajero.hpp"

class NodoCola
{
public:
    NodoCola(); //lo dejamos para cuando creamos un atributo de esta clase no de error
    NodoCola(Pasajero p, NodoCola* sig);
    ~NodoCola();
    NodoCola* getSiguiente();
    Pasajero getPasajeroNC();

private:
    Pasajero pasajero_nc;
    NodoCola* siguiente_nc;

    friend class Cola;
};

#endif // NODOCOLA_HPP