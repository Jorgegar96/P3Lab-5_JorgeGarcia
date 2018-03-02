#include "Ojos.h"
#include <string>

using namespace std;

Ojos:: Ojos(){
	color = "amarillo";
	vision_nocturna = true;
}

Ojos:: Ojos(string color, bool vision_nocturna){
	this-> color = color;
	this-> vision_nocturna = vision_nocturna;

}

Ojos:: ~Ojos(){

}
