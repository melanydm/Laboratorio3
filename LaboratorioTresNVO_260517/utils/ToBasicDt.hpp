#include "string"
#include "sstream"

using namespace std;

int toInt(string);
float toFloat(string);

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