/*
Autor:        Benja Ajú
fecha:        Wed May 11 15:20:30 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema6.out problema6.c -lm
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <math.h>
float incisoA(int n);   //prototipamos las funciones
float incisoB(int n);
float incisoC(int n);
float incisoD(int n);

int main(){
    int n;
    puts("Ingrese el valor de N como numero máximo de las sumatorias:"); //pedimos el valor de n para las sumatorias 
    scanf("%d", &n);
    if (n>=1)
    {
        printf("a) La sumatoria cuando n=%d de Σk^2(k-3) es:\t %.2f \n", n, incisoA(n));        //aqui en el main mostramos los resultados despues de ingresar el n
        printf("b) La sumatoria cuando n=%d de Σ 3/(k-1) es:\t %.2f \n", n, incisoB(n));
        printf("c) La sumatoria cuando n=%d del tercer inciso es:\t %.2f \n", n, incisoC(n));
        printf("d) La sucesión de Bode cuando n=%d es: \t %.2f \n", n, incisoD(n) );
    }
    
}
float incisoA(int n){   //realizamos la función del inciso a el cual nos muestra una sumatoria de 1 a n 
    float respuesta=0;
    for (int k = 1; k <= n; k++)
    {
        respuesta += pow(k,2)*(k-3);   //hacemos la sumatoria de la expresión    
    }return respuesta;                  //retornamos a la respuesta inicial
}
float incisoB(int n){
    float respuesta=0;
    for (int k = 2; k <= n; k++)
    {
        respuesta += 3.0/(k-1);       //basicamente el funcionamiento de cada sumatoria dada es la misma, lo unico que cambia es la expresión
    }return respuesta;
}
float incisoC(int n){
    float respuesta=0;
    float a=sqrt(5);        //se agregaron variables flotantes para resolver mejor la expresión.
    float b=(1-sqrt(5))/2;
    float c=(1+sqrt(5))/2;
    for (int k = 1; k <= n; k++)
    {
        respuesta += pow(c,k)/a - pow(b,k)/a;     
    }return respuesta;
}
float incisoD(int n){
    float respuesta=0;
    for (int k = 2; k <= n; k++)
    {
        respuesta += (0.1)*(3.0*pow(2.0, (k-2.0))+4.0);       
    }return respuesta;
}