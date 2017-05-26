#ifndef DT_INTERESADO_HPP
#define DT_INTERESADO_HPP

#include <string>

#include "DtUsuario.hpp"


using namespace std;

class DtInteresado : public DtUsuario {
    private:
        string nombre;
        string apellido;
        int edad;

    public:
        DtInteresado();


        // geters seters
		string getNombre();
        string getApellido();
        int getEdad();
        void getNombre(string);
        void getApellido(string);
        void getEdad(int);

		// Operators

		bool operator == (DtInteresado);

		// Destructor

		virtual ~DtInteresado();
}

virtual istream& operator>>(istream&, DtInteresado);
virtual ostream& operator<<(ostream&, DtInteresado);

#endif //DT_INTERESADO_HPP
