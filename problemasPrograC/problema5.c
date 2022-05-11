/*
Autor:        Benja Ajú
fecha:        Tue May 10 11:36:09 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema5.out problema5.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
//desarrolle un programa que lea dos numeros enteros para generar un
//rango y que muestre todos los numeros primos en ese rango
int n1, n2, primo, i, j;
int esPrimo(int i, int j);  //prototipamos la función
int main() {
    puts("Ingrese el primer número para el rango (mayor a 1):"); //pedimos el valor de n1 
    scanf("%d", &n1);
    puts("Ingrese el segundo número para el rango (mayor al número anterior):"); //pedimos el valor de n2 
    scanf("%d", &n2);
    i=n1; //declaramos n1 como i
    while (i<=n2)       // creamos un ciclo en el cual nos dice que mientras i sea menor al segundo numero se cumplía
    {
        esPrimo( i, j); //llamamos a la funcion esPrimo
        if (primo==1) //creamos una condicion que mientras primo sea 1 entonces se imprimirá el numero i
        {
            printf("%d  \n", i);
        }
        i++; // al terminar esto no importa si fue primo o no i se incrementa.
    }
    return 0;
}
int esPrimo(int i, int j){ // realizamos la funcion esPrimo en la cual como en el problema anterior nos muestra si el numero es primo
    j=2;
    primo=1;
    while ( j<i && primo==1 )
    {
        if (i%j==0)
        {
            primo=0;
        }
        j++;
    }
}