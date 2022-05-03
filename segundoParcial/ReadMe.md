# Número de carnet: 201904349
### Problema 1: Precio del Combustible
### Problema 2: Biseccion- Newton Raphson
## Pseudocódigo 
Paso 1: Definir i=1  
Paso 2: Leer y obtener el valor de x_inicial, la toleracia y las iteraciones.   
Paso 3: Mientras i<= de iteraciones repetir los pasos del 4 al 7  
Paso 4: Tomamos x=x_inicial - f(x_inicial)/f'(x_inicial) y calcular xi      
Paso 5: Si xi=|x-x_inicial|< tolerancia, entonces  
              xS=x (Recordemos que xS es la solución del problema o la raíz)    
              y el programa pararía  
Paso 6: Si xi=|x-x_inicial|> tolerancia entonces aumenta i=i+1   
Paso 7: Sustituimos x_inicial = x y regresaría al paso 4   
Paso 8: En caso no encuentre la solución o raíz entonces saldrá un mensaje en donde se advierte el fracaso. 

