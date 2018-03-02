#ifndef PELAJE_H
#define PELAJE_H



#include <string>

using namespace std;

class Pelaje{

	private:
		string color;
		double grosor;
		double largo;

	public:
		Pelaje();
		Pelaje(string, double, double);
		~Pelaje();

};

#endif
