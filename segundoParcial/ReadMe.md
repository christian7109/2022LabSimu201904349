### Número de carnet: 201904349
# Problema 1: Precio del Combustible
## Metodología
Del estudio estudio del comportamiento de los precios del combustible tipo regular, asumiendo que
estos tiene un comportamiento lineal y en base a la tabla de datos:
<table class="demo" align="center">
	<thead>
	<tr>
		<th>Semana</th>
		<th>precio (Q por galón)</th>
	</tr>
	<tr>
		<td>&nbsp;1</td>
		<td>&nbsp;20.20</td>
	</tr>
	<tr>
		<td>&nbsp;2<br></td>
		<td>20.90&nbsp;</td>
	</tr>
	<tr>
		<td>&nbsp;3</td>
		<td>&nbsp;20.60</td>
	</tr>
	<tr>
		<td>4&nbsp;</td>
		<td>&nbsp;21.30</td>
	</tr>
	<tr>
		<td>5&nbsp;</td>
		<td>&nbsp;21.75</td>
	</tr>
	<tr>
		<td>6</td>
		<td>&nbsp;22.05</td>
	</tr>
	<tr>
		<td>7</td>
		<td>&nbsp;23.62</td>
	</tr>
	<tr>
		<td>8</td>
		<td>&nbsp;22.95</td>
	</tr>
	<tr>
		<td>9</td>
		<td>&nbsp;23.80</td>
	</tr>
	<tr>
		<td>10</td>
		<td>&nbsp;24.00</td>
	</tr>	</thead>
</table>
Por lo cual se necesito de:

### Minimos cuadrados	
Es un procedimiento de análisis numérico en la que, dados un conjunto de datos pares ordenados y familia de funciones, se intenta determinar la función continua que mejor se aproxime a los datos, línea de regresión o la línea de mejor ajuste.
En nuestro caso presentamos la recta y=mx+b, esto se logró teniendo las siguientes ecuaciones.
 <p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/Imagenes/CodeCogsEqn.png" alt="Ecuación de Newton-Raphson" width="200"/>
</p>
 <p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/Imagenes/CodeCogsEqn%20(3).png" alt="Ecuación de Newton-Raphson" width="200"/>
</p>


## Abstracción del problema
Vemos que con la tabla dada guardada en el archivo "datos" podemos graficarlo, pero lo que hace caracteristico este problema es:
### int main 
En dicha función teniendo los vectores almacenados de x y y, se obtienen los siguientes valores guardados en as variables b, m y r, en este problema se omitió imprimir el coeficiente de correlación.	

Parte del main se implemento para llamar un archivo en el cual se leyeron los datos, esto se logró implementando un puntero. (Queda a decisión del usuario implementarlo).	

Y se da una instrucción para generar la gráfica.
### float suma
En esta función se realiza la suma de todas las entradas del vector.
### sumaMulti
En esta función se realiza la multiplicación de dos vectores que se ingresan.
## Pseudocódigo 
Paso 1: Declaramos los vectores globales y prototipar

Paso 2: Leer los datos del enunciado y mostrarlos	

Paso 3: Realizar las sumatorias necesarias y los productos de las sumatorias y encontrar la recta y=mx+b

Paso 4: Generar una gráfica sobre los datos tabulados			     

Paso 5: Generar una gráfica con la pendiente obtenida por la fórmula encontrada en el paso 3			
## Respuesta
	Se muestra la gráfica con valores tabulados y la recta que mejor aproxima el comportamiento.
 <p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/Imagenes/Comportamientocombus.jpg" alt="Ecuación de Newton-Raphson" width="200"/>
</p>

	Y el tiempo de 33.032116 semanas se llegará al tope de los Q30 

# Problema 2: Biseccion- Newton Raphson
## Metodología
El método de Newton Raphson es un procedimiento algorítmico que permite hallar raíces de funciones, conociendo un valor numérico cercano a la raíz. Es metódo abierto e iterativo, muy útil para el cálculo de raíces cuadradas y de mayor grado, aunque para algunos casos el método presenta inconvenientes, por ejemplo si existen raíces múltiples, en este caso se tendría que aplicar diferentes soluciones para así lograr encontrar la raíz sin abandonar el método.  
Para nuestro caso usamos la siguiente ecuación:
 <p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/ecuacion.PNG" alt="Ecuación de Newton-Raphson" width="200"/>
</p>
Donde se buscó la raíz de la siguiente ecuación:
<p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/Imagenes/ecuacionof.PNG" alt="Ecuación de Newton-Raphson" width="200"/>
</p>
y su derivada es:
<p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/Imagenes/otradije.PNG" alt="Ecuación de Newton-Raphson" width="200"/>
</p>
Teniendo ya esto pues y siguiendo los pasos del Pseudocódigo junto con un boseto no agregado del diagrama de flujos agregamos las posibles variables de entrada y variables de salida.
<table class="demo" align="center">
	<caption>Variables</caption>
	<thead>
	<tr>
		<th>Variables de Entrada</th>
		<th>Variables de Salida</th>
	</tr>
	</thead>
	<tbody>
	<tr>
		<td>&nbsp;x_inicial&nbsp; &nbsp;float</td>
		<td>&nbsp;xS float (Solución del problema)</td>
	</tr>
	<tr>
		<td>&nbsp;toleracia float</td>
		<td>&nbsp;mensaje de error&nbsp;</td>
	</tr>
	<tr>
		<td>&nbsp;iteraciones int</td>
		<td>&nbsp;</td>
	</tr>
	</tbody>
</table>

## Abstracción del problema   
La solución a este problema se divide en tres partes importantes y que a la vez hicieron agilizar la programación del código, es de destacar que para este problema se tuvieron que realizar procesos manuales como es el caso de hallar la derivada de la función, pero seguidamente el problema se comprendío de la siguiente manera.
### void main
En el void main recordemos que la función main es el punto de inicio del programa, en el cual en nuestro programa se leen las variables y se obtiene la información necesaria. 
También hay una parte en la que se en la que se se guarda información en dos punteros dados, seguidamente se aplican dos condiciones en las cuales se imprime el resultado del problema.
### void NewtonRaphson
Esta función ejecuta la ecuación de NewtonRaphson hasta que se cumplan un n número de iteraciones. 
Lo curioso de está función es que se divide en dos partes, ya que se al principio de debe de generar la primera iteración y luego se hacía el resto.
Está función se encarga de guardar valores de puntero en cada iteración.
### float f y df 
Estás funciones valuan el valor de x en cada función matemática dada, ya sea en la función f(x) o su derivada.
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
    x=1.0719 cuando f(x)=0
<p align="center">
<img src="https://github.com/christian7109/2022LabSimu201904349/blob/main/segundoParcial/Imagenes/Praices.jpg" alt="Ecuación de Newton-Raphson" width="200"/>
</p>

