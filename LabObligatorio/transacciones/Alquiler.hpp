#ifndef ALQUILER_HPP
#define ALQUILER_HPP

#include "./datatypes/DtAlquiler.hpp"
#include "Oferta.hpp"

using namespace std;

class Alquiler : public Oferta {

    public:
        Alquiler();
		Alquiler(DtAlquiler*);

        // toValueObject

        virtual DtAlquiler* toValueObject() = 0;

		// Operators

		virtual bool operator == (Alquiler*) = 0;

		// Destructor

		virtual ~Alquiler();
}

#endif //ALQUILER_HPP