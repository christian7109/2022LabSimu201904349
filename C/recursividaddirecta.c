/*
Autor:        Benja Ajú
fecha:        Wed Apr 20 12:27:06 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o recursividaddirecta.out recursividaddirecta.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
//prototipo de funcion a utilizar
long fibonacci(int n);

int main(){
    //declaracion de las variables
    //n valor de numero al que queremos ejecutar la secuencia de fibonacci
    //k variable de conteo 
    int n,k;
    //limitar al usuario a mis condiciones n>0
    do
    {
        puts("Ingrese el valor de n: ");
        scanf("%d",&n);
    } while (n <=1);
    
    //ejecucion de la serie de numeros de fibonacci
    //el conteo de la variable k debe de llegar hasta n
    for (k = 0; k <= n+1; k++)
    {
        printf("%ld %s", fibonacci(k), (k %7==0 ? "\n":""));
    }
    
    return 0;
}
//Recursividad directa
//funcion que valua fibonacci, se llama a si misma dependiendo del numero de n
long fibonacci(int n){
    //valuar si n es igual a 0 o 1
    if (n==0 || n==1)
    {
        return n;
    }else
    {
        // se utiliza el algoritmo de la secuencia de fibonacci
        return fibonacci(n-1)+fibonacci(n-2);
    }
}