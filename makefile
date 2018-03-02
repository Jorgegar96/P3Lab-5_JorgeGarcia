temp:	main.o Zoologico.o Animal.o Patas.o Pelaje.o Ojos.o Orejas.o Cola.o
		g++ main.o Zoologico.o Animal.o Patas.o Pelaje.o Ojos.o Orejas.o Cola.o -o temp
main.o:	main.cpp Zoologico.h Animal.h Patas.h Pelaje.h Ojos.h Orejas.h Cola.h
		g++ -c main.cpp
Zoologico.o:	Zoologico.cpp Zoologico.h Animal.h
		g++ -c Zoologico.cpp
Animal.o:	Animal.cpp Animal.h Patas.h Pelaje.h Ojos.h Orejas.h Cola.h
		g++ -c Animal.cpp
Patas.o:	Patas.cpp Patas.h
		g++ -c Patas.cpp
Pelaje.o:	Pelaje.cpp Pelaje.h
		g++ -c Pelaje.cpp
Ojos.o:	Ojos.cpp Ojos.h
		g++ -c Ojos.cpp
Orejas.o:	Orejas.cpp Orejas.h
		g++ -c Orejas.cpp
Cola.o:	Cola.cpp Cola.h
		g++ -c Cola.cpp
