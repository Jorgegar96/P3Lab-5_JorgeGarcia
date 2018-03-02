#ifndef PATAS_H
#define PATAS_H

#include <string>

using namespace std;

class Patas{

	private:
		int cantidad;
		double largo;
		string tipo;

	public:
		Patas();
		Patas(int, double, string);
		~Patas();

};
#endif
