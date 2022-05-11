/*
Autor:        Benja Ajú
fecha:        Tue May 10 11:36:01 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema4.out problema4.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
//desarrolle un prograaque lea un numero mayor a 1 y determine si
//es primo
int n=0, i=2, primo=1;
int main(){
    puts("Ingrese el numero que desea saber si es primo (mayor a 1):"); //pedimos el valor de n 
    scanf("%d", &n);
        while (i<(n-1) && primo ==1 ) // generamos un ciclo 
    {
        if ((n%i)==0)       // se siente que cumplir que el residuo de n e i sea 0
        {
            primo=0;    // si es así primo será 0
        }else
        {
            i++;        //sino solo incrementará el i 
        }      
    }
    if (primo==0)           //saliendo del ciclo hacemos condicionales para mostrar el resultado
    {
        puts("El número no es primo"); // si primo es 0 entonces se imprimira que no es primo xd
    }else
    {
        puts("El numero si es primo");// si no entonces si es primo jaja 
    }
    return 0;
}
