#ifndef OFERTA_HPP
#define OFERTA_HPP

#include "./datatypes/DtOferta.hpp"

using namespace std;

class Ofrece {

    public:
        Oferta();
		Oferta(DtOferta);

        // toValueObject

        virtual DtOferta toValueObject() = 0;

        virtual bool operator == (Oferta*);

		// Destructor

		virtual ~Oferta();
}

#endif //OFERTA_HPP
