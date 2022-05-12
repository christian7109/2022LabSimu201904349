/*
Autor:        Benja Ajú
fecha:        Wed May 11 15:20:06 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema2.out problema2.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
int vector[5]; //declaramos un vector de 5 entradas
int numero; //variable
int main(){
    puts("Ingrese 5 numeros enteros"); //solicitamos 5 numeros enteros
    puts("-------------------------");
    numero=0; //le damos valor a numero
    int aux; 
    for (int i = 0; i < 5; i++) { //for para llenar la matriz
    scanf("%d", &numero);
    vector[i] = numero;
    }
    puts("El vector ordenado de forma ascendente es:"); //imprimimos mensaje de descripción
    //aqui vamos a ordenar
    for (int i = 0; i < 4; i++) //con el metodo de ordenaminento 
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (vector[j]> vector[j+1]) //aplicamos que minetras la entrada j sea menor a j+1 entonces se hacen los siguentes cambios
            {
                aux =vector[j+1];  
                vector[j+1]=vector[j];
                vector[j]=aux; //de esta manera corremos los datos para luego imprimirlos ordenados de forma ascendete
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d \t", vector[i]);//aqui imprimos los datos en un vector de  5.
    }
    
    
}