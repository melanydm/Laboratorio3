#ifndef OFERTA_HPP
#define OFERTA_HPP
//#include "Transa.hpp"
#include "./datatypes/DtOferta.hpp"

using namespace std;

class Oferta {

    public:
      Oferta();
		  Oferta(DtOferta);
      float getPrecio() { return precio; }
      void setPrecio(float prec) { precio = prec ; }
        
        // toValueObject

//      bool operator == (Oferta*);

      // toDataType
      DtOferta toDataType();

		  // Destructor

		  virtual ~Oferta();

    protected:

    private:
        float precio;
        Transa tipo;
};

#endif //OFERTA_HPP
