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
 #include <stdlib.h>
//declaramos las variables globales y les agregamos los datos de las semanas y el precio de combustible
float x[]={1,2,3,4,5,6,7,8,9,10}, y[]={20.20,20.90,20.60,21.30,21.75,22.05,23.62,22.95,23.80,24.00};
//medimos el tamaño del vector por medio del tamaño de los bytes que ocupa cada elemento
int n = sizeof(x)/sizeof(x[0]);

//prototipar funciones o en otras palabras declaramos las funciones al incio del programa.
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);

//creamos la funcion main, el cual es el punto de inicio del programa 
int main(){
     FILE * flujo =fopen("datos", "rb"); //aquí creamos un puntero en el cual obtiene datos del archivo "datos", el rb es porque el
    if (flujo==NULL){                    //archivo se leerá en binario(read binary)   
        perror("Error en la apertura del archivo"); //si el archivo no se lee bien saldrá este mensaje
        return 1; //por si hay algún error
    }
    char caracter; //creamos un char llamado caracter el cual puede almacenar enteros pequeños
    while(feof(flujo)==0){   //agregamos el feof para comprobar el indicador de fin de archivo en el flujo de archivos
        caracter=fgetc(flujo);// fgetc lee un caracter desde un fichero, en este caso flujo
        printf("%c", caracter);
    }
    fclose(flujo); //cerramos el puntero
    printf("\n\nSe han leido los datos sobre el combustible \n"); // se imprime un mensaje en el cual se indica que el archivo se leyó correctamente
//es de destacar que se agregó este puntero con el único fin de mostrar los datos al usuario
//Se declaran las variables del problema para encontrar el minimo cuadrado
    float b, m, r, tiempo;
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n;
    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));
    //imprime la ecuacion lineal
    printf("y = %fx + %f\n",m,b);
   //se plantea un problema el cual será resuelto seguidamente.
    printf("Asumiendo que el gobierno tiene un tope de 30 quetzales por galon, determinemos en cuanto tiempo se llegara a ese tope si el precio mantiene este comportamiento. \n");
    tiempo=m*30+b;
    printf("El tiempo de tope será en la semana: %f \n", tiempo); 
    //se da una instrucción o recomendación para generar una grafica, lamentablemente no se obtuvo información para enlazar gnuplot y c
    //se intento usar un puntero con fopen
    printf("Para obtener la grafica escriba en terminal gnuplot primerProblema.gp\n");
    system("gnuplot primerProblema.gp");
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


