unset label
clear
set terminal pdf                            #definimos la extensión
set output "Comportamientocombus.pdf"       #se redirige la pantalla al archivo, en el cual se le agrega el nombre a donde se va a guardar
set title "Comportamiento del combustible"  #titulo de la gráfica
set xlabel "Semana"                         #agregamos la descripcion del eje x
set xrange [1:10]                           #rango en x
set yrange [20:24]                          #rango en y
set ylabel "Precio"                         #agregamos la descripcion del eje y
set grid                                    #agregamos la cuadricula de fondo
set style data lines                        #especificamos que el estilo de los datos sean conectados por lineas
plot "datos" using 1:2,  0.445515*x + 19.666668 #graficamos los datos encontrados en el archivo "datos" y tambien la pendiente de dicha ecuación



