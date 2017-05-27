#ifndef OFERTA_HPP
#define OFERTA_HPP

#include "./datatypes/DtOferta.hpp"

using namespace std;

class Oferta {

    public:
    Oferta();
		Oferta(DtOferta);

        // toValueObject

        DtOferta toDataType();

        bool operator == (Oferta*);

		// Destructor

		virtual ~Oferta();
}

#endif //OFERTA_HPP
