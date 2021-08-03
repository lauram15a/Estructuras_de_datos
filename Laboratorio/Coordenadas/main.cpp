#include "Punto.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a, b;
    Punto p;
    
    cout<< "Dame las coordenadas x e y de un punto: ";
    cin >> a >> b;
    p.FijarX(a);
    p.FijarY(b);
    cout << "El valor de x en el punto p es " << p.LeerX() << endl;
    cout << "El valor de y en el punto p es " << p.LeerY() << endl;
    cout << "La distancia al origen del punto p es " << p.Distancia() << endl;
    
    
    return 0;
}