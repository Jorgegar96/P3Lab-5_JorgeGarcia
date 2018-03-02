#include <string>
#include <iostream>
#include "Zoologico.h"
#include "Animal.h"
#include "Patas.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
#include <iostream>

using namespace std;


//funcion de menu
int menu();

//funcion de listar todos los animales
//void listarZoologico(Zoologico*);

//funcion para crear un animal
Animal crearAnimal();



int main(){
	vector <Animal> lista_espera;
	Zoologico* zoo;
	cout<<"Ingrese el nombre del zoologico:";
	string nombre;
	cin>>nombre;
	cout<<"Ingrese el tamaño del zoologico:";
	int tamano;
	cin>>tamano;
	cout<<"Ingrese la capacidad de personas:";
	int capacidad;
	cin>>capacidad;
	zoo = new Zoologico(nombre, capacidad, tamano);
	bool salir = false;
	while (!salir){
		switch(menu()){
			case 1:
				lista_espera.push_back(crearAnimal());
				break;
			case 2:
				for(int i = 0; i < lista_espera.size(); i++){
					lista_espera.at(i).getNombre();
					if (lista_espera.at(i).getTipo() == "artico"){
						zoo->addArtica(lista_espera.at(i));
					}else if (lista_espera.at(i).getTipo() == "desertico"){
						zoo->addDesertica(lista_espera.at(i));
					}else if (lista_espera.at(i).getTipo() == "tropical"){
						zoo->addTropical(lista_espera.at(i));
					}else if (lista_espera.at(i).getTipo() == "sabana"){
						zoo->addSabana(lista_espera.at(i));
					}
					
					/*switch(lista_espera.at(i).getTipo()){
						case "artico":
							zoo->addAtrica(lista_espera.at(i));
							break;
						case "desertico":
							zoo->addDesertica(lista_espera.at(i));
							break;
						case "tropical":
							zoo->addTropical(lista_espera.at(i));
							break;
						case "sabana":
							zoo->addSabana(lista_espera.at(i));
							break;
					}*/
					//delete lista_espera.at(i);
					//lista_espera.at(i) = NULL;
				}
				lista_espera.clear();
				break;
			case 3:
				//listarZoologico(zoo);
				zoo->listarTodo();
				break;
			case 4:
				if(lista_espera.size()>0){
					for(int i = 0; i < lista_espera.size(); i++){
						cout<<(i+1)<<") "<<lista_espera.at(i).getTipo()
					    	    <<" - "<<lista_espera.at(i).getNombre()
					    	    <<" - "<<lista_espera.at(i).getEspecie()
					    	    <<endl;
						
					}		
					int indice;
					cin>>indice;
					indice --;
					lista_espera.erase(lista_espera.begin()+indice);
				}else{
					cout<<"La lista esta vacia."<<endl;
				}
				break;
			case 5:
				salir = true;
				break;
		}
	}

	return 0;
}

Animal crearAnimal(){
	Animal* animal;

	cout<<"Ingrese el nombre del animal:"<<endl;
	string nombre;
	cin>>nombre;

	cout<<"Ingrese la especie del animal:"<<endl;
	string especie;
	cin>>especie;

	cout<<"Ingrese el tamaño del animal:"<<endl;
	double tamano;
	cin>>tamano;

	int resp = 0;
	bool repetir = true;
	string tipo;
	while (repetir){
		cout<<"Vision Nocturna:"<<endl
		    <<"1) Artico"<<endl
		    <<"2) Desertica"<<endl
		    <<"3) Jungla Tropical"<<endl
		    <<"4) Sabana"<<endl
		    ;
		cin>>resp;
		switch(resp){
			case 1:
				repetir = false;
				tipo = "artico";
				break;
			case 2:
				tipo = "desertico";
				repetir = false;
				break;
			case 3:
				tipo = "tropical";
				repetir = false;
				break;
			case 4:
				tipo = "sabana";
				repetir = false;
				break;
		}
	}
	repetir = true;
	cout<<"Ingrese la cantidad de patas del animal:"<<endl;
	int cantidad_pat;
	cin>>cantidad_pat;

	cout<<"Ingrese el largo de las patas del animal:"<<endl;
	double largo_pat;
	cin>>largo_pat;

	cout<<"Ingrese el tipo de patas del animal:"<<endl;
	string tipo_pat;
	cin>>tipo_pat;

	cout<<"Ingrese el color del pelaje del animal:"<<endl;
	string color_pel;
	cin>>color_pel;

	cout<<"Ingrese el grosor del pelaje del animal:"<<endl;
	double grosor;
	cin>>grosor;

	cout<<"Ingrese el largo del pelaje del animal:"<<endl;
	double largo_pel;
	cin>>largo_pel;

	cout<<"Ingrese el color de los ojos del animal:"<<endl;
	string color_ojo;
	cin>>color_ojo;

	resp = 0;
	repetir = true;
	bool vision_nocturna= false;
	while (repetir){
		cout<<"Vision Nocturna:"<<endl
		    <<"1) Si"<<endl
		    <<"2) No"<<endl
		    ;
		cin>>resp;
		switch(resp){
			case 1:
				repetir = false;
				vision_nocturna = true;
				break;
			case 2:
				vision_nocturna = false;
				repetir = false;
				break;
			default:
				break;
		}
	}
	repetir = true;
	cout<<"Ingrese el tamaño de las orejas del animal:"<<endl;
	double tamano_ore;
	cin>>tamano_ore;

	cout<<"Ingrese la capacidad de audicion del animal:"<<endl;
	int capacidad_aud;
	cin>>capacidad_aud;

	cout<<"Ingrese el largo de la cola del animal:"<<endl;
	double largo_col;
	cin>>largo_col;

	resp = 0;
	repetir = true;
	bool peluda= false;
	while (repetir){
		cout<<"Cola Peluda:"<<endl
		    <<"1) Si"<<endl
		    <<"2) No"<<endl
		    ;
		cin>>resp;
		switch(resp){
			case 1:
				repetir = false;
				peluda = true;
				break;
			case 2:
				peluda = false;
				repetir = false;
				break;
			default:
				break;
		}
	}
	animal = new Animal(nombre, especie, tamano, tipo,
			    cantidad_pat, largo_pat, tipo_pat,
			    color_pel, grosor, largo_pel,
			    color_ojo, vision_nocturna,
			    tamano_ore, capacidad_aud,
			    largo_col, peluda);
	return (*animal);
}

/*void listarZoologico(*Zoologico zoo){
	zoo->listarTodo();
}*/

int menu(){
	cout<<"menu"<<endl
	    <<"1) Crear Animal"<<endl
	    <<"2) Agregar Animales a Zoológico" << endl
	    <<"3) Listar Animales"<<endl
	    <<"4) Eliminar de lista de espera"<<endl
	    <<"5) Salir"<<endl
	    ;
	int opcion;
       	cin>>opcion;
	return opcion; 	
}
