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
		DtInteresado(string,string,string, string, int);
		DtInteresado(DtInteresado*);

        // geters seters
		string getNombre();
        string getApellido();
        int getEdad();
        void getNombre(string);
        void getApellido(string);
        void getEdad(int);

		// Operators

		bool operator == (DtInteresado*);

		// Destructor

		virtual ~DtInteresado();
}

#endif //DT_INTERESADO_HPP