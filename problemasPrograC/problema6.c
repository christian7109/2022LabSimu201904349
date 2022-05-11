/*
Autor:        Benja Ajú
fecha:        Tue May 10 11:36:19 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema6.out problema6.c
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
int nV, nSum;
int cont=0;
float sumatoria=0;
float A;
int main(){
    puts("Ingrese el número de vertices de su poligono (>3)"); //pedimos los vertices
    scanf("%d", &nV);
    int matrizXY[nV][2]; //definimos una matriz 
if (nV>=3)
{
    for (cont = 0; cont < nV; cont++)
    {
        puts("Ingrese las coordenada x");   //obtenemos las coordenadas de los vertices
        scanf("%d \n", &matrizXY[cont][0]);
        puts("Ingrese las coordenada y");
        scanf("%d \n", &matrizXY[cont][1]);
    }
    printf("\n");
    //imprimimos la matriz
    puts("Tu poligono tiene estás vertices:");
    for (cont = 0; cont < nV; cont++)
    {
        printf("(%d, %d) \n", matrizXY[cont][0],matrizXY[cont][1] ); //imprimimos las coordenadas 
    }
    //hacemos el n de la sumatoria
    nSum=nV-1;
    for (int i = 0; i < nSum; i++)  //hacemos las sumatorias
    {
        sumatoria +=(matrizXY[i][0]*matrizXY[i+1][1]) - (matrizXY[i+1][0]*matrizXY[i][1]);
    }
    A +=(matrizXY[nSum][0]*matrizXY[0][1])-(matrizXY[0][0]*matrizXY[nSum][1]);
    A=A/2;
    printf("El área de tu poligono es: %0.2f \n" , A); //imprimimos
}

}

