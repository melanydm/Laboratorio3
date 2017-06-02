#include "ToBasicDt.hpp"
#include <string>

#include "string"
#include "sstream"


int toInt(string s) {
    int aux = 0;
    stringstream ss(s);
    ss >> aux;
    return aux;
}

float toFloat(string s) {
	float aux = 0;
	stringstream ss(s);
	ss >> aux;
	return aux;
}