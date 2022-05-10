/*
Autor:        Benja Ajú
fecha:        Tue May 10 11:35:35 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema1.out problema1.c
Librerias:     stdio
resumen:      Lectura de 3 numeros realesdel teclado que escriba 
              la media aritmetica en numeros positivos
*/

//librerias
#include <stdio.h>

int main(){
//declaro mis variables globales y las inicializo desde 0
int n=0;
int i=0;
float x=0;
float med=0;
while (i<3)  //declaramos un ciclo el cual inicia desde i=0 y termina hasta la tercera entrada
{
    puts("Ingrese el valor para x:"); //mensaje para pedir los numeros.
    scanf("%f", &x); //lee los datos 
    if (x>=0)       //dentro del ciclo se debe cumplir una condición de x mayor a 0.
    {
        n++; //n incrementa mientras pasan los ciclos
        med+=x; //almacenamos los valores de las entradas en x y se van sumando
    }
    i++;    //en la fase final del ciclo while siempre se va a incrementar el contador i de numeros ingresados
}
if (n==0)           //ahora bien mientras n sea 0 significa que no se encontraron positivos, por lo tanto saldra un mensaje.
{
        puts(" No hay positivos");
}else
{
    printf("La media es: %f", med/n); //
}
return 0;
}