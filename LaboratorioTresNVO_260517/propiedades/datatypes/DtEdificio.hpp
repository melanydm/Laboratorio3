#ifndef DT_EDIFICIO_HPP
#define DT_EDIFICIO_HPP
#include "string"
#include "iostream"
#include "iomanip"
#include "../../utils/ToBasicDt.hpp"

using namespace std;

class DtEdificio {
    private:
        string nombre;
        int cant_Pisos;
        float gastos_Comunes;

    public:
        DtEdificio();
        DtEdificio(DtEdificio&);
		// Operators

		//virtual bool operator == (DtEdificio) = 0;

		// Getters
		string getNombre();
		int getCant_Pisos();
		float getGastos_Comunes();

		// Setters
		void setNombre(string);
		void setCant_Pisos(int);
		void setGastos_Comunes(float);

		// Destructor

		virtual ~DtEdificio();
};

istream& operator>>(istream&, DtEdificio);
ostream& operator<<(ostream&, DtEdificio);

#endif //DT_EDIFICIO_HPP
