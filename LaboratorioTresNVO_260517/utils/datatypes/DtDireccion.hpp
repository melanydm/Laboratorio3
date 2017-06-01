#ifndef DT_DIRECCION_HPP
#define DT_DIRECCION_HPP

#include <string>

using namespace std;


class DtDireccion {
    private:
        string calle;
        string numero;

    public:
        DtDireccion();

	string getDepartamento();
        string getCalle();
        string getNumero();
	void setDepartamento(string);
        void setCalle(string);
        void setNumero(string);

        virtual ~DtDireccion();
		// Operators

		bool operator == (DtDireccion);
};

#endif //DT_DIRECCION_HPP
