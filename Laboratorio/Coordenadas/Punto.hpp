#ifndef PUNTO_HPP
#define PUNTO_HPP

#include <math.h>

class Punto
{
public:
    Punto();
    int LeerX();
    int LeerY();
    void FijarX(int valor);
    void FijarY(int valor);
    double Distancia();
    ~Punto();
private:
    int x;
    int y;
};

#endif // PUNTO_HPP
