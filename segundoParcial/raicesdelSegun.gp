unset label
clear
set terminal pdf                #definimos la extensión
set output "Praices.pdf"        #se redirige la pantalla al archivo, en el cual se le agrega el nombre a donde se va a guardar
set title "Posibles raíces"     #titulo de la gráfica
set grid                        #agregamos la cuadricula de fondo
set style data lines            #especificamos que el estilo de los datos sean conectados por lineas
plot[-3:4][-10:10] 2+cos(exp(x)-2)-exp(x) #graficamos la función expuesta
#el 0 esta entre x=0 y x=2 basicamente en 1 
