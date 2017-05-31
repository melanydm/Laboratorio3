#ifndef DT_PROPIEDAD_HPP
#define DT_PROPIEDAD_HPP
#include "string"
#include "iomanip"
#include "../../utils/datatypes/DtDireccion.hpp"

using namespace std;

class DtPropiedad  {
    private:
        string codigo;
        string cant_ambientes;
        string cant_dormitorios;
        string cant_banios;
        string garage;
        DtDireccion direccion;
        string mts_edificados;
        string mts_totales;

    public:
        DtPropiedad();
        DtPropiedad(DtPropiedad&);

        //getters
        string getCodigo();
        int getCant_Ambientes();
        int getCant_Dormitorios();
        int getCant_Banios();
        bool getGarage();
        DtDireccion getDireccion();
        int getMts_Edificados();
        int getMts_Totales();

        //setters
        void setCodigo(string);
        void setCant_Ambientes(int);
        void setCant_Dormitorios(int);
        void setCant_Banios(int);
        void setGarage(bool);
        void setDireccion(DtDireccion);
        void setMts_Edificados(int);
        void setMts_Totales(int);
		// Operators

//		virtual bool operator == (DtPropiedad) = 0;



		// Destructor

//		virtual ~DtPropiedad()=0;
};
istream& operator>>(istream&, DtPropiedad);
ostream& operator<<(ostream&, DtPropiedad);


#endif //DT_PROPIEDAD_HPP
