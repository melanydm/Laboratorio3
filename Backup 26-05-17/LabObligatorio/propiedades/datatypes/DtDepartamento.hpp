#ifndef DT_DEPARTAMENTO_HPP
#define DT_DEPARTAMENTO_HPP

using namespace std;

class DtDepartamento {

    public:
        DtDepartamento();
		DtDepartamento(DtDepartamento*);

		// Operators

		virtual bool operator == (DtDepartamento*) = 0;

		// Destructor

		virtual ~DtDepartamento();
}

#endif //DT_DEPARTAMENTO_HPP