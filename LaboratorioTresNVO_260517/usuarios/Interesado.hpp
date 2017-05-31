#ifndef INTERESADO_HPP
#define INTERESADO_HPP

#include <string>
#include "./datatypes/DtInteresado.hpp"
#include "Usuario.hpp"


using namespace std;

class Interesado : public Usuario {
    private:
        string nombre;
        string apellido;
        string edad;

    public:
    Interesado();
		Interesado(string,string,string,string, string);
		Interesado(DtInteresado);

        // geters seters
	string getNombre();
        string getApellido();
        string getEdad();
        void getNombre(string);
        void getApellido(string);
        void getEdad(string);

        // toDataType

     DtUsuario toDataType();

		// Destructor

		virtual ~Interesado();
}

#endif //INTERESADO_HPP
