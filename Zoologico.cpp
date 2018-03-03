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
	ordenarAlfabeticamente();
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

void Zoologico:: ordenarAlfabeticamente(){
	vector<Animal> temporal;
	//cout<<"1"<<endl;
	if(desertica.size()>0){
		for (int i=0; i < desertica.size(); i++){
			//cout<<"2"<<endl;
			if (i < desertica.size()-1){
				int j =0;
				while(j < desertica.at(i).getNombre().length() && j < desertica.at(i+1).getNombre().length() ){
					if ((int)(desertica.at(i).getNombre().at(j)) > (int)(desertica.at(i+1).getNombre().at(j)) ){
						temporal.push_back(desertica.at(i));
						desertica.erase(desertica.begin()+i);
						desertica.insert(desertica.begin()+i+1, temporal.at(0));
						temporal.clear();
						break;
					}
					j++;
				}
			}
		}
	}
	if (artica.size()>0){
		for (int i=0; i < artica.size(); i++){
			//cout<<"2"<<endl;
			if (i < artica.size()-1){
				int j =0;
				while(j < artica.at(i).getNombre().length() && j < artica.at(i+1).getNombre().length() ){
					if ((int)(artica.at(i).getNombre().at(j)) > (int)(artica.at(i+1).getNombre().at(j)) ){
						temporal.push_back(artica.at(i));
						artica.erase(artica.begin()+i);
						artica.insert(artica.begin()+i+1, temporal.at(0));
						temporal.clear();
						break;
					}
					j++;
				}
			}
		}
	}
	if (tropical.size()>0){
		for (int i=0; i < tropical.size(); i++){
			//cout<<"2"<<endl;
			if (i < tropical.size()-1){
				int j =0;
				while(j < tropical.at(i).getNombre().length() && j < tropical.at(i+1).getNombre().length() ){
					if ((int)(tropical.at(i).getNombre().at(j)) > (int)(tropical.at(i+1).getNombre().at(j)) ){
						temporal.push_back(tropical.at(i));
						tropical.erase(tropical.begin()+i);
						tropical.insert(tropical.begin()+i+1, temporal.at(0));
						temporal.clear();
						break;
					}
					j++;
				}
			}
		}
	}
	if (sabana.size()>0){
		for (int i=0; i < sabana.size(); i++){
			//cout<<"2"<<endl;
			if (i < sabana.size()-1){
				int j =0;
				while(j < sabana.at(i).getNombre().length() && j < sabana.at(i+1).getNombre().length() ){
					if ((int)(sabana.at(i).getNombre().at(j)) > (int)(sabana.at(i+1).getNombre().at(j)) ){
						temporal.push_back(sabana.at(i));
						sabana.erase(sabana.begin()+i);
						sabana.insert(sabana.begin()+i+1, temporal.at(0));
						temporal.clear();
						break;
					}
					j++;
				}
			}
		}
	}
}
