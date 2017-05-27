#ifndef DT_DEPARTAMENTO_HPP
#define DT_DEPARTAMENTO_HPP

using namespace std;

class DtDepartamento {

    public:
        DtDepartamento();

		// Operators

		//virtual bool operator == (DtDepartamento) = 0;

		// Getters
		string getId();
		string getNombre();
	
		// Setters
		void setId(string);
		void setNombre(string);
		// Destructor

		virtual ~DtDepartamento();
}

//istream& operator>>(istream&, DtDepartamento);
//ostream& operator<<(ostream&, DtDepartamento);

#endif //DT_DEPARTAMENTO_HPP
