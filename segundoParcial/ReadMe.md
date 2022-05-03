### Número de carnet: 201904349
# Problema 1: Precio del Combustible
## Metodología
## Abstracción del problema
## Pseudocódigo 
Paso 1:
Paso 2:
Paso 3: 
Paso 4:      
Paso 5:
Paso 6:  
Paso 7:  
Paso 8: 
## Respuesta
# Problema 2: Biseccion- Newton Raphson
## Metodología
El método de Newton Raphson es un procedimiento algorítmico que permite hallar raíces de funciones, conociendo un valor numérico cercano a la raíz. Es metódo abierto e iterativo, muy útil para el cálculo de raíces cuadradas y de mayor grado, aunque para algunos casos el método presenta inconvenientes, por ejemplo si existen raíces múltiples, en este caso se tendría que aplicar diferentes soluciones para así lograr encontrar la raíz sin abandonar el método.  
Para nuestro caso usamos la siguiente ecuación:
$$ x_{i+1}=x_{i}-\frac{f(x_{i})}{f'(x_{i})} $$
\begin{align*}
 x_{i+1}=x_{i}-\frac{f(x_{i})}{f'(x_{i})}
\end{align*}

ecuaion 
derivada 
entradas y salidas 
## Abstracción del problema
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
## Respuesta
