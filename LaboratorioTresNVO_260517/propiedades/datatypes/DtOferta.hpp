#ifndef DT_OFERTA_HPP
#define DT_OFERTA_HPP


#include "string"
#include "iostream"
#include "iomanip"
#include "../../utils/Transa.hpp"
#include "../../utils/ToBasicDt.hpp"

using namespace std;

class DtOferta {

	private:
		Transa tipo;
		float precio;

    public:
    	// Constructors
        DtOferta();
        DtOferta(DtOferta&);

		// Operators

		//virtual bool operator == (DtOferta) = 0;
		
		// Getters
		Transa getTipo();
		float getPrecio();
		
		// Setters
		void setTipo(Transa);
		void setPrecio(float);
		
		// Destructor

		virtual ~DtOferta();
};

istream& operator>>(istream&, DtOferta);
ostream& operator<<(ostream&, DtOferta);

#endif //DT_OFERTA_HPP
