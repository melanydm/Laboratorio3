#ifndef DT_ZONA_HPP
#define DT_ZONA_HPP

#include "string"
#include "iomanip"
#include "iostream"

using namespace std;

class DtZona  {

    public:
        DtZona();
		DtZona(const DtZona&);

		// Operators

		//virtual bool operator == (DtZona) = 0;

		// Getters
		string getCodigo() const;
		string getNombre() const;
	
		// Setters
		void setCodigo(string);
		void setNombre(string);
	
		// Destructor

		virtual ~DtZona();

	private:
		string codigo;
		string nombre;
};

istream& operator>>(istream&, DtZona);
ostream& operator<<(ostream&, DtZona);

#endif //DT_ZONA_HPP
