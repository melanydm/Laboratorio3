#ifndef DT_EDIFICIO_HPP
#define DT_EDIFICIO_HPP
#include "string"

using namespace std;

class DtEdificio {
    private:
        string nombre;
        string cant_Pisos;
        string gastos_Comunes;

    public:
        DtEdificio();
        DtEdificio(DtEdificio&);
		// Operators

		//virtual bool operator == (DtEdificio) = 0;

		// Getters
		string getNombre();
		string getCant_Pisos();
		string getGastos_Comunes();

		// Setters
		void setNombre(string);
		void setCant_Pisos(string);
		void setGastos_Comunes(string);

		// Destructor

		virtual ~DtEdificio();
};

istream& operator>>(istream&, DtEdificio);
ostream& operator<<(ostream&, DtEdificio);

#endif //DT_EDIFICIO_HPP
