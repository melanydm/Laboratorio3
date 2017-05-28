#ifndef OFERTA_HPP
#define OFERTA_HPP
#include "transa.hpp"
#include "./datatypes/DtOferta.hpp"

using namespace std;

class Oferta {

    public:
        Oferta();
		Oferta(DtOferta);
        float getPrecio() { return id; }
        void setPrecio(float prec) { precio = prec ; }
        
        // toValueObject

        DtOferta toDataType();

        bool operator == (Oferta*);

      // toDataType
     DtZona toDataType();

		// Destructor

		virtual ~Oferta();

         protected:
    private:
        float precio;
        Transa tipo;
};

#endif //OFERTA_HPP
