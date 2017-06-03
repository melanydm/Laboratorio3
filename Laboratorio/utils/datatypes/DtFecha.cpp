#include "DtFecha.hpp"

#include "string"
#include "iomanip"
#include "iostream"

DtFecha::DtFecha(){
  this->aa = "";
  this->mm = "";
  this->dd = "";
}

string DtFecha :: getAa(){
  return this->aa;
}
string DtFecha :: getMm(){
  return this->mm;
}
string DtFecha :: getDd(){
  return this->dd;
}
void DtFecha :: setDd(string dd){
  this->dd = dd;
}
void DtFecha :: setMm(string mm){
  this->mm = mm;
}
void DtFecha :: setAa(string aa){
  this->aa = aa;
}


// Operators

bool DtFecha:: operator == (DtFecha f){
  if (this->getDd() == f.getDd() &&	this->getMm() == f.getMm() &&	this->getAa() == f.getAa()){
		  return true;
	}
return false;
}

istream& operator>>(istream& in, DtFecha f) {
		string aux;
		in>> setw(2) >> aux;
		f.setDd(aux);
		in.ignore(1);
		in>>setw(2) >> aux;
		f.setMm(aux);
		in.ignore(1);
		in>>setw(4) >> aux;
		f.setAa(aux);
		return in;
}

ostream& operator<<(ostream& out, DtFecha f) {
	out << f.getDd() << "/"
		<< f.getMm() << "/"
		<< f.getAa() << "\r\n";
	return out;
}




