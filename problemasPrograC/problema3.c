/*
Autor:        Benja Ajú
fecha:        Tue May 10 11:35:50 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema3.out problema3.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <math.h>

int n=0, r=1; // declaramos variables 
int main(){ 
    puts("Ingrese el valor del numero N"); //pedimos el valor de n 
    scanf("%d", &n); //obtenemos el valor del entero en la variabe  n
    if (n>=0) //tendrá que cumplir que n sea mayor a 0 esto por fines propios mios
    {
            if (r>=0) //tendrá cumplir que r sea mayor a 0 tambien 
        {
            while (r*r<= n) // entonces entra en un ciclo en el cual debe 
            {
                r++; //mientras se cumpla el ciclo incrementa r 
            }
            r=r-1; //se le da nuevo valor a la variable r e imprimimos la respuesta
            printf("La raíz cuadrada entera por defecto de un numero N es: %d \n", r);
        }
    }else{
    puts("Se ingreso un numero negativo, no tiene raíz entera"); //esto es para que solo funcione el programa solo con numeros positivos
    } 
    return 0;
}