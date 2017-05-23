#ifndef DT_USUARIO_HPP
#define DT_USUARIO_HPP

#include <string>

using namespace std;

class DtUsuario {
    protected:
        string email;
        string contrasenia;

    public:
        DtUsuario();
		DtUsuario(string, string);
		DtUsuario(DtUsuario*);

        // geters seters
		string getEmail();
        string getContrasenia();
        void setEmail(string);
        void setContrasenia(string);

		// Operators

		virtual bool operator == (DtUsuario*) = 0;

		// Destructor

		virtual ~DtUsuario();
}

#endif //DT_USUARIO_HPP