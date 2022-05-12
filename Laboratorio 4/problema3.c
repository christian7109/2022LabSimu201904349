/*
Autor:        Benja Ajú
fecha:        Wed May 11 15:20:12 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0 
compilar:     gcc -o problema3.out problema3.c -lm
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <math.h>
float vector1[3]; // declaramos vectores 
float vector2[3];
int valorV1, valorV2; // variables
float magnitud(float vec[3]);   //prototipamos funciones
float sumamulti( float vecSum1[3], float vecSum2[3]);
float sumaSimple();
float productoEscalar();

int main (){
    puts("Ingrese las coordenadas del primero vector(x,yz)"); //solicitamos las entradas de los dos vectores
    for (int i = 0; i < 3; i++) {   //con un ciclo for llenamos el vector1 y vector2.
    scanf("%d", &valorV1);
    vector1[i] = valorV1;
    }
    puts("Ingrese las coordenadas del segundo vector(x,yz)");
    for (int i = 0; i < 3; i++) {
    scanf("%d", &valorV2);
    vector2[i] = valorV2;
    }
    printf("La magnitud del vector 1 es: %.2f \t y el del vector 2 es: %.2f.\n", magnitud(vector1), magnitud(vector2)); 
    printf("La suma de estos dos vectores es este vector:"); sumaSimple();  //en esta sección imprimimos los resultados, usando las funciones.
    printf("\n");
    printf("El producto punto de los dos vectores es: %.2f \n", sumamulti(vector1,vector2));
    printf("El producto Escalar de los dos vectores es: \t"); productoEscalar(vector1,vector2);
    printf("\n");
}
//creamos una función en la cual se van sumando los productos de dos vectores y tambien es el productopunto
float sumamulti( float vecSum1[3], float vecSum2[3]){
    int sumatoriaProd=0;
    for (int i = 0; i < 3; i++)
    {
        sumatoriaProd += vecSum1[i]*vecSum2[i];
    }
    return sumatoriaProd;
}

//sacamos la magnitud del vector
float magnitud(float vec[3]){
    float magnitudVector=0;
    magnitudVector = sqrt(sumamulti(vec,vec));
    return magnitudVector;
}
//sacamos la suma simple de vectores
float sumaSimple(){
    float vectorDeSuma[3];
    for (int i = 0; i < 3; i++)
    {
        vectorDeSuma[i]=vector1[i]+vector2[i];
        printf("%.2f \t", vectorDeSuma[i]);
    }
    
}
//scamos el producto escalar, nos facilitamos el trabajo de esta manera para no incluir más formulas.
float productoEscalar(float vEsca1[],float vEsca2[] ){
    float respuesta[3];
    respuesta[0] = vEsca1[1]*vEsca2[2] - vEsca1[2]*vEsca2[1];
    respuesta[1] = vEsca1[2]*vEsca2[0] - vEsca1[0]*vEsca2[2];
    respuesta[2] = vEsca1[0]*vEsca2[1] - vEsca1[1]*vEsca2[0];
    printf("%.2f i,\t %.2f j,\t %.2f k", respuesta[0], respuesta[1], respuesta[2]);
}

