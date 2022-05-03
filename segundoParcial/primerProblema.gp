unset label
clear
set terminal pdf
set output "Comportamientocombus.pdf"
set title "Comportamiento del combustible"
set xlabel "Semana"
set xrange [1:10]
set yrange [20:24]
set ylabel "Precio"
set grid
set style data lines
plot "datos" using 1:2,  0.445515*x + 19.666668



