/*
Autor:        Benja Ajú
fecha:        Wed May 11 15:19:37 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema1.out problema1.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
char caracter;
int vector[10]={2,4,6,8,10,12,14,16,18,20}; //declaramos la matriz con entradas parres
int main (){
    puts("¿Cómo quiere ver el vector?: “a”verlos de forma ascendente, “d”descendente"); //solicitamos una respuesta entre a y d
    scanf("%c", &caracter);
    if (caracter=='a') //hacemos la condicion para ordenar el vector de manera ascendente
    {
        for (int i = 0; i < 10; i++)
        {
            printf("%d  \n", vector[i]); //crece conforme i
        }
        
    }else if (caracter=='d') //hacemos la condición para ordenar el vector de manera descendete
    {
        for (int i = 9; i >= 0; i--) //decrece con forme i
        {
            printf("%d \n", vector[i]);
        }
    }else
    {
        printf("No mi loco, dijimos a o d, otra letra NO!"); //se ingreso otra respuesta.
    }
    
    
    
    
    
}
