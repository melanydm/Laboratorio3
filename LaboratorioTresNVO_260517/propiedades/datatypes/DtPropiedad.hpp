#ifndef DT_PROPIEDAD_HPP
#define DT_PROPIEDAD_HPP
#include "string"
#include "iomanip"
#include "D:\Tecnologo\PAV\28-05\LaboratorioTres_260517\utils\datatypes\DtDireccion.hpp"

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
        string getCant_Ambientes();
        string getCant_Dormitorios();
        string getCant_Banios();
        string getGarage();
        DtDireccion getDireccion();
        string getMts_Edificados();
        string getMts_Totales();

        //setters
        void setCodigo(string);
        void setCant_Ambientes(string);
        void setCant_Dormitorios(string);
        void setCant_Banios(string);
        void setGarage(string);
        void setDireccion(DtDireccion);
        void setMts_Edificados(string);
        void setMts_Totales(string);
		// Operators

//		virtual bool operator == (DtPropiedad) = 0;



		// Destructor

//		virtual ~DtPropiedad()=0;
};
istream& operator>>(istream&, DtPropiedad);
ostream& operator<<(ostream&, DtPropiedad);


#endif //DT_PROPIEDAD_HPP
