# $< : La primera dependencia
# $@: target

all: fig.pdf

suma.x: suma.cpp

%.x: %.cpp
	g++ $< -o $@

datos.txt: suma.x
	./$< > $@

fig.pdf: plot.gp datos.txt
	gnuplot $<

#suma.x: suma.cpp
#	g++ $< -o $@
#resta.x: resta.cpp
#	g++ $< -o $@

clean:
	rm -f a.out *.x *.txt *.pdf *~
