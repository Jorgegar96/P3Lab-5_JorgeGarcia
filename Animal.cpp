#include "Animal.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
#include <string>
#include <iostream>

using namespace std;

Animal:: Animal(){
	nombre = "Animal_default";
	especie = "Especie_default";
	tipo = "Artico";
tamano = 10;

}

Animal:: Animal(string nombre, string especie, double tamano, string tipo, 
		/*Patas*/int cantidad_pat, double largo_pat, string tipo_pat,
		/*Pelaje*/ string color_pel, double grosor, double largo_pel,
		/*Ojos*/ string color_ojo, bool vision_nocturna,
		/*Orejas*/ double tamano_ore, int capacidad_aud,
		/*Cola*/ double largo_col, bool peluda){
	this-> nombre = nombre;
	this-> especie = especie;
	this-> tamano = tamano;
	this-> tipo = tipo;
	patas = new Patas(cantidad_pat, largo_pat, tipo_pat);
	pelaje = new Pelaje(color_pel, grosor, largo_pel);
	ojos = new Ojos(color_ojo, vision_nocturna);
	orejas = new Orejas(tamano_ore, capacidad_aud);
	cola = new Cola(largo_col, peluda);
}

string Animal:: getNombre(){
	return nombre;
}

void Animal:: setNombre(string nombre){
	this-> nombre = nombre;
}

string Animal:: getEspecie(){
	return especie;
}

void Animal:: setEspecie(string especie){
	this-> especie = especie;
}

double Animal:: getTamano(){
	return tamano;
}

void Animal:: setTamano(double tamano){
	this-> tamano = tamano;
}

string Animal:: getTipo(){
	return tipo;
}

void Animal:: setTipo(string tipo){
	this-> tipo = tipo;

}

Animal:: ~Animal(){
	/*delete patas;
	patas = NULL;
       	delete pelaje;
	pelaje = NULL;
	delete ojos;
	ojos = NULL;
	delete orejas;
	orejas = NULL;
	delete cola;
	cola = NULL;*/	
}
