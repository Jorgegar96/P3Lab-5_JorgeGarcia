#include <string>
#include "Patas.h"

using namespace std;

Patas:: Patas(){
	cantidad = 4;
	largo = 10;
	tipo = "pezuñas";
}

Patas:: Patas(int cantidad, double largo, string tipo){
	this-> cantidad = cantidad;
	this-> largo = largo;
	this-> tipo = tipo;

}

Patas:: ~Patas(){

}
