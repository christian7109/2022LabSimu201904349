/*
Autor:        Benja Ajú
fecha:        Mon May 2 15:10:56 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o intentoprimerP.out intentoprimerP.c -lm
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <math.h>

//declaro e inicializo variables globales
float x[]={1,2,3,4,5,6,7,8,9,10}, y[]={20.20,20.90,20.60,21.30,21.75,22.05,23.62,22.95,23.80,24.00};
//medimos el tamanio del vector por medio del tamanio de los bytes que ocupa cada elemento
int n = sizeof(x)/sizeof(x[0]);

//prototipar funciones
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);


int main(){
     FILE * flujo =fopen("datos", "rb");
    if (flujo==NULL){
        perror("Error en la apertura del archivo");
        return 1;
    }
    char caracter;
    while(feof(flujo)==0){
        caracter=fgetc(flujo);
        printf("%c", caracter);
    }
    fclose(flujo);
    printf("\n\nSe han leido los datos sobre el combustible \n");
//Se declaran las variables del problema
    float b, m, r, tiempo;
    //los valores de ecuacion lineal, por medio de minimos cuadrados
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n;
    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));
    //imprime la ecuacion lineal
    printf("y = %fx + %f\n",m,b);
    //imprime coeificiente de determinacion el r cuadrado
    printf("Coeficiente de determinacion: %f\n",r*r);

   
    printf("Asumiendo que el gobierno tiene un tope de 30 quetzales por galon, determinemos en cuanto tiempo se llegara a ese tope si el precio mantiene este comportamiento. \n");
    tiempo=m*30+b;
    printf("El tiempo de tope será en: %f \n", tiempo); 
    printf("Para obtener la grafica escriba en terminal gnuplot primerProblema.gp\n");
    return 0;
}
//reliza la suma de los elementos de un vector ingresado
float suma(float datos[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos[i];
    }
    return resp;
}

//realiza la suma de los elementos de dos vectores ingresados
float sumaMulti(float datos1[], float datos2[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}


