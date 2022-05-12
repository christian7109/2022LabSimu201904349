/*
Autor:        Benja Ajú
fecha:        Wed May 11 15:20:23 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema5.out problema5.c
Librerias:     stdio
resumen:      Es un programa que encuentra el factorial de un numero entero ingresado, debe de utilizar una
funcion recursiva.
*/

//librerias
#include <stdio.h>
int factorial(int numero){ //realizamos una funcion llamada factorial 
    if (numero <1)          // realizamos una condicion donde numero deba ser menor a 1 
    {                       //al cumplirse se termina el programa
        return 0;
    }else if (numero == 1)  //otra condición donde cuando numero es 1 se regresa el valor.
    {
        return 1;
    }else
    {
        return numero * factorial(numero-1); // y si no se cumplen esas condiciones se tendrá la respuesta de regreso 
                                            // el producto de numero con la funcion factorial de numero -1, esto  dado a la recursividad
    }
}
int main(){         //en el main simplemente pedimos el numero y mandamos a llamar el resultado dado por la funcion factorial.
    int numero;
    int resultado;
    printf("Ingrese el numero:");
    scanf("%d", &numero);
    resultado=factorial(numero);
    printf("El factorial de  %d, es: %d \n", numero, resultado);

}