#include <string>
#include <iostream>
#include <vector>
#include "Animal.h"

using namespace std;

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

class Zoologico{

	private:
		string nombre;
		int tamano;
		int capacidad_p;
		vector <Animal> artica;
		vector <Animal> desertica;
		vector <Animal> tropical;
		vector <Animal> sabana;
		
	public:
		Zoologico();
		Zoologico(string, int, int);
		string getNombre();
		void setNombre(string);
		int getTamano();
		void setTamano(int);
		int getCapacidad_p();
		void setCapacidad_p(int);
		void addArtica(Animal);
		void addDesertica(Animal);
		void addTropical(Animal);
		void addSabana(Animal);
		void listarTodo();
		~Zoologico();
};

#endif


