#ifndef DT_ADMINISTRADOR_HPP
#define DT_ADMINISTRADOR_HPP

#include <string>
#include "DtUsuario.hpp"


using namespace std;

class DtAdministrador : public DtUsuario {
    public:
        DtAdministrador();
		DtAdministrador(string, string);
		DtAdministrador(DtAdministrador*);

		// Operators

		bool operator == (DtAdministrador*);

		// Destructor

		virtual ~DtAdministrador();
}

#endif //DT_ADMINISTRADOR_HPP