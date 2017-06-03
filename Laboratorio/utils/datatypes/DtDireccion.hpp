#ifndef DT_DIRECCION_HPP
#define DT_DIRECCION_HPP

#include <string>
#include "iomanip"
#include "iostream"

using namespace std;


class DtDireccion {
  private:
    string calle;
    string numero;
    string departamento;

  public:
    DtDireccion();
    string getDepartamento();
    string getCalle();
    string getNumero();
    void setDepartamento(string); 
    void setCalle(string);
    void setNumero(string);

    virtual ~DtDireccion();
	  // Operators

		bool operator == (DtDireccion);
};

string printDireccion(DtDireccion);
istream& operator>>(istream&, DtDireccion&);
ostream& operator<<(ostream&, DtDireccion&);

#endif //DT_DIRECCION_HPP
