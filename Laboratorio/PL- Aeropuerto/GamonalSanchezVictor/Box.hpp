#ifndef BOX_HPP
#define BOX_HPP

#include "Pasajero.hpp"

class Box
{
public:
    Box();
    ~Box();
    void meter(Pasajero p, int tiempo);
    void sacar();
    void imprimir(int tiempo);
    //getters y setters
    bool isVacio();
    Pasajero getPasajero();
    void setPasajero(Pasajero pasajeroBox);
    
private:
    bool lleno;
    Pasajero pasajero_box;
};

#endif // BOX_HPP