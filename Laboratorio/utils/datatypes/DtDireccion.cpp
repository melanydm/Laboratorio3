#include "DtDireccion.hpp"

#include <string>

DtDireccion :: DtDireccion(){
  this->departamento = "";
  this->calle = "";
  this->numero = "";
}
string DtDireccion ::  getDepartamento(){
  return   this->departamento;
}
string DtDireccion ::  getCalle(){
  return   this->calle;
}
string DtDireccion ::  getNumero(){
  return   this->numero;
}
void DtDireccion ::  setDepartamento(string departamento){
  this->departamento = departamento;
}
void DtDireccion ::  setCalle(string calle){
  this->calle = calle;
}
void DtDireccion ::  setNumero(string numero){
  this->numero = numero;
}

string printDireccion(DtDireccion dir){
    string strdir;
    cout << dir << strdir;
    return strdir;
}

virtual DtDireccion ::  ~DtDireccion();

		// Operators
bool DtDireccion ::  operator == (DtDireccion dir){
return true;
}

istream& operator>>(istream& in, DtDireccion& dir) {
		int i = 0, j = 0;
		string a = " ";
		string departamento = "";
		string numero = "";
		string calle = "";
		while(a != "\0" && i < 4 && j < 100){
			in >> setw(1) >> a;

			if (a == "," || a == "."){
				in.ignore(1);
				i++;
			} else if (i == 0) {
                //suma el caracter a al string de pais
				departamento = departamento + a;
			}else if (i == 1) {
                //suma el caracter a al string de numero;
				numero = numero + a;
			}else if (i == 2) {
                //suma el caracter a al string de calle;
				calle = calle + a;
			}
            j++;
        }
		dir.setDepartamento(departamento);
		dir.setNumero(numero);
		dir.setCalle(calle);
		//cout << "antes del return"<<pais<<ciudad<<numero << calle;
		return in;
}


ostream& operator<<(ostream& out, DtDireccion& dir) {
	//cout << "sobrecarga de direccion\n";
	out <<"Departamento: "<<dir.getDepartamento() << "\n"
		<<"Numero de Puerta: "<<dir.getNumero() << "\n"
		<<"Calle: "<<dir.getCalle() << "\n";
	//cout << "sobrecargo direccion\n";
	return out;
}


