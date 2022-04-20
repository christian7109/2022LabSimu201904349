/*
Autor:        Benja Ajú
fecha:        Wed Apr 20 12:26:21 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o ejemplovolumencono.out ejemplovolumencono.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
//definición de constantes y funciones de una sola line
#define pi 3.1416
#define Vcono(radio, altura)(1/3.0* pi*(radio*radio)*altura)
//declaro las variables del programa 
float radio, altura, volumen;

int main(){
    puts("Ingrese el valor del radio: ");
    scanf("%f",&radio);
    puts("Ingrese el valor del altura: ");
    scanf("%f",&altura);
    volumen=Vcono(radio,altura);
    printf("Volumen del cono es: %.2f \n",volumen);
    return 0;
}