/*
Autor:        Benja Ajú
fecha:        Wed Apr 20 12:24:29 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o ejemploredondeodedatos.out ejemploredondeodedatos.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <math.h>

int main(){
    int exp;
    double d;
    printf("Aproximanción hacia arriba 3.7: %f \n aproximación hacía abajo de 3.7: %f \n", ceil(3.7),floor(3.7));
    d= cos(3.7);
    printf("coseno de 3.7 es %f", d);
    d =frexp(16.0, &exp);
    //printf("mantisa de 16: %f, exponente de 16: %d \n", d,);
    return 0;
}