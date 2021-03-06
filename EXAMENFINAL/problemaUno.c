/*
Autor:        Benja Ajú
fecha:        Mon May 16 08:33:03 CST 2022
compilador:   gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
compilar:     gcc -o problemaUno.out problemaUno.c -lm
Librerias:     stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <math.h>
//declaraamos las constantes, como variables globales.
float G=6.639E-11; 
float Rt=6.378E6;
float Mt=5.9736E24;
float R=287.06;
float L=6.5E-3;
float g_0=9.81;
float T_0=288.15;
float P_0=101325;
float y=0.49;
float densidadAire(); //prototipamos funciones en las cuales se ve que hay muchas variables.
float friccionatm(float condicionCD, float seccionTA);
float gdeY();
float Consumo(float ts_i,float E_i0);
float dfCombus(float consumoEm, float empuje_0);
float masaTotalCombustible(float masaCombusInicial,float Mpropulsor, float ts_i,float E_i0);

int main(){
    float cohete1[]={3E7, 3.248E-4, 61.27, 201.06, 1.1E5, 1.5E6}; //guardamos los valores constantes especificos para cada cohete
    float cohete2[]={2.7E7,2.248E-4, 61.27,201.06,1.1E5,1.5E6};
    float cohete3[]={2.5E7, 2.248E-4,70.25, 215,1.8E5, 2.1E6};
    Consumo(3.248E-4,3E7);

}


float densidadAire( ){  // se desarrolla la ecuación que nos encuentra la densidad del aire 
    float rho=0;
    rho=(P_0/(R*T_0)* pow((1-((L*y)/T_0)),(g_0/(R*L)))); //este sería el resultado 
    return rho;
}
float friccionatm(float condicionCD, float seccionTA){  //aquí se obtiene la friccion de la atmosfera, la cual depende de la velocidad del cohete
    float F_a=0;
    F_a=0.5*(densidadAire()*condicionCD*seccionTA );
}
float gdeY(){
    float g=(G*Mt)/pow((Rt+y),2); //en esta funcion se obtiene la gravedad que depende de la altura
    return g;
}

float masaTotalCombustible(float masaCombusInicial,float Mpropulsor, float ts_i,float E_i0 ){   //esta funcion nos muetra la masa  
    float masatotalC=masaCombusInicial;     //total en la cual está en funcion de otra función llamada combustible
    masatotalC= Mpropulsor * Consumo(ts_i,E_i0);
    return masatotalC;
}

float Consumo(float ts_i,float E_i0){ //en esa funcion se busco encontrar la perdida de combustible con respecto del tiempo 
    float deltah=0.1;
    float t=0;
    float masaCombust;
    while (masaCombust >= 0)
    {
        masaCombust+=dfCombus(ts_i,E_i0);
        t+=deltah; 
        printf("Msa del combustible: %.2f \t, tiempo: %f\n", masaCombust, t);
    }
    

}
float dfCombus(float consumoEm, float empuje_0){ //en esta función tenemos la derivada de la masa en la que varia el combustible 
    float resp; 
    resp=-consumoEm*empuje_0;
    return resp;
}
