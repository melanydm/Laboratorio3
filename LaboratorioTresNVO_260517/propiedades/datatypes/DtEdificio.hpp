#ifndef DT_EDIFICIO_HPP
#define DT_EDIFICIO_HPP

using namespace std;

class DtEdificio  {

    public:
        DtEdificio();
	DtEdificio(DtEdificio);

		// Operators

		//virtual bool operator == (DtEdificio) = 0;
		
		// Getters
		string getNombre();
		int getCantPisos();
		float getGastosComunes();
	
		// Setters
		void setNombre(string);
		void setCantPisos(int);
		void setGastosComunes(float);
	
		// Destructor

		virtual ~DtEdificio();
};

//istream& operator>>(istream&, DtEdificio);
//ostream& operator<<(ostream&, DtEdificio);

#endif //DT_EDIFICIO_HPP
