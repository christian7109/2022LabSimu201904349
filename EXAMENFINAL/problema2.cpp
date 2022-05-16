/*
Autor:         Benja Aju
Fecha:         Mon May 16 13:47:50 CST 2022
compilador:    g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:      g++ -o problema2.out problema2.cpp
Librerias:     iostream
Resumen:      
*/

//librerias
#include <iostream>     //poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std;    //es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.

class Cohete
{
    public:
        // Aqui agregamos los publicos
        double E_0, TSFC;
    public:
        Cohete(double A, double B, double C, double D, double F, double G)
        { 
            E_0=A;
            TSFC=B;   
        }
};

int main() {
    Cohete cohete1(3E7, 3.248E-4, 61.27, 201.06, 1.1E5, 1.5E6);
    Cohete cohete2(2.7E7,2.248E-4, 61.27,201.06,1.1E5,1.5E6);
    Cohete cohete3(2.5E7, 2.248E-4,70.25, 215,1.8E5, 2.1E6);
    cout << "Para el cohete 1 son: \n";
    cohete1.Unico();
    cout << "Para el cohete 2 son: \n";
    cohete2.Unico();
    cout << "Para el cohete 3 son: \n";
    cohete3.Unico();
    cout << endl;
    return 0;
}