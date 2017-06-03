#ifndef DT_USUARIO_HPP
#define DT_USUARIO_HPP

#include <string>
#include "iomanip"
#include "iostream"

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

		bool operator == (DtUsuario);

		// Destructor

		virtual ~DtUsuario();
};
 istream& operator>>(istream& in, DtUsuario);
 ostream& operator<<(ostream& out, DtUsuario);
#endif //DT_USUARIO_HPP
