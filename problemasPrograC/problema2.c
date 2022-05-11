/*
Autor:        Benja Ajú
fecha:        Tue May 10 11:35:44 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema2.out problema2.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
int n=0, x=0, max=0, min=0; //declaramos variables globales 
float med=0;
int main(){
    puts("Ingrese el valor de la altura:"); //pedimos el ingreso de alturas
    scanf("%d", &x);        //retemos datos en x 
    max=x, min=x;           //almacenamos el valor de x en las variables min y max
    while (x>=0) //hacemos el ciclo cuando x sea mayor o igual a 0 
    {
        n++;    //se incrementa el valor de n el cual es el contador
        med+=x; // se van sumando los valores de x
        if (x> max)    // se hace una condicion que cumpla que x sea mayor a max
        {
            max=x; // si la condicion se cumple entonces ese x será el nuevo max
        }else if (x<min) //agregamos otra condicion donde si x es menor a min 
        {
            min=x; //si x es menor a min entonces x tomara el nuevo valor de min 
        }else
        {
        puts("Ingrese el valor de la altura:"); //al no cumplirse ninguna condicion se debera de preguntar de nuevo las alturas
        scanf("%d", &x);
        }   
    }
        if (n==0)           //ahora bien mientras n sea 0 significa que no se encontraron positivos, por lo tanto saldra un mensaje.
    {
            puts("Los valores ingresados eran negativos");
    }else
    {
        med=med/n;
        printf("La media es: %f, \n El valor minimo es: %d, El valor maximo es: %d\n ", med, min, max); //se imprime los datos pedidos 
    }
    return 0;    
}