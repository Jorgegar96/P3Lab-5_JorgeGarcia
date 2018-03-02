#include "Zoologico.h"
#include <string>
#include "Animal.h"
#include <vector>
#include <iostream>

using namespace std;

Zoologico:: Zoologico(){
	capacidad_p = 100;
	tamano = 1000;
	nombre = "Zoologico";
}

Zoologico:: Zoologico(string nombre, int capacidad_p, int tamano){
	this-> nombre = nombre;
	this-> capacidad_p = capacidad_p;
	this-> tamano = tamano;
}

string Zoologico:: getNombre(){
	return nombre;
}	

void Zoologico:: setNombre(string nombre){
	this-> nombre = nombre;
}

int Zoologico:: getTamano(){
	return tamano;
}

void Zoologico:: setTamano(int tamano){
	this-> tamano = tamano;
}

int Zoologico:: getCapacidad_p(){
	return capacidad_p;
}

void Zoologico:: setCapacidad_p(int capacidad_p){
	this-> capacidad_p = capacidad_p;
}

void Zoologico:: addArtica(Animal animal){
	artica.push_back(animal);
}

void Zoologico:: addDesertica(Animal animal){
	desertica.push_back(animal);
}

void Zoologico:: addTropical(Animal animal){
	tropical.push_back(animal);
}

void Zoologico:: addSabana(Animal animal){
	sabana.push_back(animal);
}

void Zoologico:: listarTodo(){
	cout<<"Animales Articos"<<endl;
	for (int i = 0; i < artica.size(); i++){
		cout<<(i+1)<<") "<<artica.at(i).getNombre()<<" - "<<artica.at(i).getEspecie()<<endl;
	}
	cout<<"Animales Deserticos"<<endl;
	for (int i = 0; i < desertica.size(); i++){
		cout<<(i+1)<<") "<<desertica.at(i).getNombre()<<" - "<<desertica.at(i).getEspecie()<<endl;
	}
	cout<<"Animales Jungla Tropical"<<endl;
	for (int i = 0; i < tropical.size(); i++){
		cout<<(i+1)<<") "<<tropical.at(i).getNombre()<<" - "<<tropical.at(i).getEspecie()<<endl;
	}
	cout<<"Animales Sabana"<<endl;
	for (int i = 0; i < sabana.size(); i++){
		cout<<(i+1)<<") "<<sabana.at(i).getNombre()<<" - "<<sabana.at(i).getEspecie()<<endl;
	}
}
