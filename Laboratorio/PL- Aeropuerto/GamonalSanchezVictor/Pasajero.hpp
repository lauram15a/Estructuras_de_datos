#ifndef PASAJERO_HPP
#define PASAJERO_HPP

#include <iostream>
#include <string.h>
#include <cmath> 

using namespace std;

class Pasajero
{
public:
    Pasajero();  //lo dejamos para cuando creamos un atributo de esta clase no de error
    Pasajero (int idPasajero, int horaLlegada, int duracionAtencion);  //constructor
    ~Pasajero();
    
    //getter y setter
    int getId_pasajero();
    int getHora_llegada();
    int getDuracion_atencion();
    int getTiempo_espera();
    int getTiempo_box();
    
    void setId_pasajero(int idPasajero);
    void setHora_llegada(int horaLlegada);
    void setDuracion_atencion(int duracionAtencion);
    void setTiempo_espera(int tiempoEspera);
    void setTiempo_box(int tiempo);
    
private: //atributos
    int id_pasajero, hora_llegada, duracion_atencion, tiempo_espera;
    int tiempo_box;

};

#endif // PASAJERO_HPP
