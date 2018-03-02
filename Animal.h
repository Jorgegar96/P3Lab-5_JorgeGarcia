#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

using namespace std;

class Animal{

	private:
		string nombre;
		string especie;
		double tamano;
		string tipo;
		Patas* patas;
		Pelaje* pelaje;
		Ojos* ojos;
		Orejas* orejas;
		Cola* cola;

	public: 
		Animal();
		Animal(string, string, double, string,
		       /*Patas*/int, double, string, 
		       /*Pelaje*/string, double, double,
		       /*Ojos*/string, bool,
		       /*Orejas*/double, int, 
		       /*Cola*/double, bool);
		string getNombre();
		void setNombre(string);
		string getEspecie();
		void setEspecie(string);
		double getTamano();
		void setTamano(double);
		string getTipo();
		void setTipo(string);
		~Animal();

};

#endif
