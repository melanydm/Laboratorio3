#ifndef DT_DEPARTAMENTO_HPP
#define DT_DEPARTAMENTO_HPP


#include "string"
#include "iostream"
#include "iomanip"

#include "../../utils/ToBasicDt.hpp"

using namespace std;

class DtDepartamento {
    private:
        int id;
        string nombre;
    public:
        DtDepartamento();
        DtDepartamento(DtDepartamento&);

        void setId(int id) { this->id = id; }
        int getId(){ return this->id; }
        void setNombre(string nombre){ this->nombre = nombre; }
        string getNombre(){ return this->nombre; }
		// Operators

		//virtual bool operator == (DtDepartamento) = 0;


		// Destructor

		virtual ~DtDepartamento();
};

istream& operator>>(istream&, DtDepartamento);
ostream& operator<<(ostream&, DtDepartamento);

#endif //DT_DEPARTAMENTO_HPP
