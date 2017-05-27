#ifndef DT_OFERTA_HPP
#define DT_OFERTA_HPP

using namespace std;

class DtOferta {

    public:
        DtOferta();

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
}

//istream& operator>>(istream&, DtOferta);
//ostream& operator<<(ostream&, DtOferta);

#endif //DT_OFERTA_HPP
