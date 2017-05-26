#ifndef DT_DEPARTAMENTO_HPP
#define DT_DEPARTAMENTO_HPP

using namespace std;

class DtDepartamento {

    public:
        DtDepartamento();

		// Operators

		virtual bool operator == (DtDepartamento) = 0;


		// Destructor

		virtual ~DtDepartamento();
}

virtual istream& operator>>(istream&, DtDepartamento);
virtual ostream& operator<<(ostream&, DtDepartamento);

#endif //DT_DEPARTAMENTO_HPP
