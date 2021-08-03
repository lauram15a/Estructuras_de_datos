#include "Pasajero.hpp"

Pasajero::Pasajero()
{
}

Pasajero::Pasajero(int idPasajero, int horaLlegada, int duracionAtencion)
{
    id_pasajero = idPasajero;
    hora_llegada = horaLlegada;
    duracion_atencion = duracionAtencion;    
    tiempo_espera = 0;
    tiempo_box = 0;
}

Pasajero::~Pasajero()
{
}

//GETTERS Y SETTERS

int Pasajero::getId_pasajero()
{
    return id_pasajero;
}

int Pasajero::getHora_llegada()
{
    return hora_llegada;
}

int Pasajero::getDuracion_atencion()
{
    return duracion_atencion;
}

int Pasajero::getTiempo_espera()
{
    return tiempo_espera;
}

int Pasajero::getTiempo_box()
{
    return tiempo_box;
}

void Pasajero::setId_pasajero(int idPasajero)
{
    id_pasajero = idPasajero;
}

void Pasajero::setHora_llegada(int horaLlegada)
{
    hora_llegada = horaLlegada;
}

void Pasajero::setDuracion_atencion(int duracionAtencion)
{
    duracion_atencion = duracionAtencion;
}

void Pasajero::setTiempo_espera(int tiempoEspera)
{
    tiempo_espera = tiempoEspera;
}

void Pasajero::setTiempo_box(int tiempo)
{
    tiempo_box = tiempo + duracion_atencion;
}



