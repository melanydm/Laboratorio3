#ifndef OFERTA_HPP
#define OFERTA_HPP

#include "./datatypes/DtOferta.hpp"

using namespace std;

class Oferta {

    public:
        Oferta();
		Oferta(DtOferta*);

        // toValueObject

        virtual DtOferta* toValueObject() = 0;

		// Operators

		virtual bool operator == (Oferta*) = 0;

		// Destructor

		virtual ~Oferta();
}

#endif //OFERTA_HPP