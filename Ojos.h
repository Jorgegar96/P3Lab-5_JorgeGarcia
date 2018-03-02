#ifndef OJOS_H
#define OJOS_H

#include <string>

using namespace std;

class Ojos{

	private:
		string color;
		bool vision_nocturna;

	public:
		Ojos();
		Ojos(string, bool);
		~Ojos();

};

#endif
