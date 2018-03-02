#include "Pelaje.h"
#include <string>


Pelaje:: Pelaje(){
	color = "Marron";
	grosor = 5;
	largo = 5;
}

Pelaje:: Pelaje(string color, double grosor, double largo){
	this-> color = color;
	this-> grosor = grosor;
	this-> largo = largo;
}

Pelaje:: ~Pelaje(){

}
