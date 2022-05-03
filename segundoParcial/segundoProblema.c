/*
Autor:        Benja Ajú
fecha:        Mon May 2 19:27:06 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o segundoProblema.out segundoProblema.c -lm
Librerias:     stdio, stdlib, math
resumen:      
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipamos las funciones
float f(float x);
float df(float x);
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);
 //maxiter=maximo numero de iteraciones, *actiter=valor anterior y *sol= solución

void main (void)
{
    //definir las variables floats e ints 
    float x_inicial, tolerancia, xS;
    int iteraciones, Aiteracion;
    printf("Ingrese el valor aproximado de x: ");//pedimos el x_i que en nuestro caso es 1 
    scanf("%f",&x_inicial);                      //obtenemos en la variable x_inicial
    printf("Ingrese el valor de tolerancia que no sea menor o igual a 0: ");  //pedimos el numero de toleracia que vienen siendo los pasitos a mover    
    scanf("%f",&tolerancia);                     //obtenemos en la variable toleracia    
    printf("Ingrese el valor maximo de iteraciones: "); //pedimos el numeros de iteraciones
    scanf("%d",&iteraciones);                           //obtenemos el valor de las iteraciones y la guardamos en una variable.

    NewtonRaphson(x_inicial, tolerancia, iteraciones, &Aiteracion, &xS); //en los &'s guardamos la información en dichos punteros 
    if (Aiteracion == iteraciones)
        printf("\nNo hay solucion despues de %d iteraciones\n",iteraciones);
    else
    {
        printf("\nLuego de %d iteraciones la solucion es %.4f\n",Aiteracion,xS); //solución del problema 
    }
}

void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol)
{                       //definimos las variables locales
    float xant, x, dif; //xant=x anterior, x actual y diferencia
    int i=1;            // el numero de iteraciones
    xant=x0;            //renombramos el x anterior a x0
    x=xant-f(xant)/df(xant); //hacemos la solución a la primera iteración 
    dif = x-xant;            //sacamos el valor de la diferecia, verificando que no sea 0  
    (dif<0)?dif=-dif:dif;    //hacemos el valor absoluto con un if 
    printf("%f\n",dif);      //imprimimos la diferencia, esto por puro placermio xd 
    while (dif>tol && i<maxiter)   //aquí lo que hacemos es realizar las demás iteraciones mientras la diferencia sea mayor que 
    {                              //la toleracia y las iteracion sea menor al máximo de iteración
        xant=x;                    //vemos que es el mismo codigo de la primera iteración pero aquí usamos como x inical el "x" 
        x=xant-f(xant)/df(xant);
        i++;
        dif = x-xant;
        (dif<0)?dif=-dif:dif; 
        printf("%f\n",dif);
    }
    *sol=x;     //se van apuntando valores de puntero para cada iteración.
    *actiter = i;
}
//Agregamos la ecuación 
float f(float x){
    float respuesta =0;
    respuesta = 2+cos(exp(x-2))-exp(x);
    return respuesta;
}
//Agregamos la primera derivada 
float df(float x){
    float respuesta =0;
    respuesta=-exp(x)*(1+sin(exp(x)-2));
    return respuesta;
}