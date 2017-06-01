#ifndef DT_ZONA_HPP
#define DT_ZONA_HPP

#include "string"

using namespace std;

class DtZona  {

    public:
        DtZona();
		DtZona(DtZona&);

		// Operators

		//virtual bool operator == (DtZona) = 0;

		// Getters
		string getCodigo();
		string getNombre();
	
		// Setters
		void setCodigo(string);
		void setNombre(string);
	
		// Destructor

		virtual ~DtZona();
};
  //istream& operator>>(istream&, DtZona);
  //ostream& operator<<(ostream&, DtZona);

#endif //DT_ZONA_HPP
