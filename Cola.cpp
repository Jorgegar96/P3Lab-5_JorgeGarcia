#include "Cola.h"

using namespace std;

Cola:: Cola(){
	largo = 10;
	peluda = true;
}

Cola:: Cola(double largo, bool peluda){
	this-> largo = largo;
	this-> peluda = peluda;
}

Cola:: ~Cola(){

}
