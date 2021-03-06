#ifndef DT_PROPIEDAD_HPP
#define DT_PROPIEDAD_HPP
#include "string"
#include "iomanip"
#include "iostream"

#include "../../utils/ToBasicDt.hpp"
#include "../../utils/datatypes/DtDireccion.hpp"

using namespace std;

class DtPropiedad  {
    private:
        string codigo;
        int cant_ambientes;
        int cant_dormitorios;
        int cant_banios;
        bool garage;
        DtDireccion direccion;
        int mts_edificados;
        int mts_totales;
        int toInt(string);
        string printDireccion(DtDireccion&);


    public:
        DtPropiedad();
        DtPropiedad(DtPropiedad&);

        //getters
        string getCodigo();
        int getCant_ambientes();
        int getCant_dormitorios();
        int getCant_banios();
        bool getGarage();
        DtDireccion getDireccion();
        int getMts_edificados();
        int getMts_totales();

        //setters
        void setCodigo(string);
        void setCant_ambientes(int);
        void setCant_dormitorios(int);
        void setCant_banios(int);
        void setGarage(bool);
        void setDireccion(DtDireccion);
        void setMts_edificados(int);
        void setMts_totales(int);
		// Operators

//		virtual bool operator == (DtPropiedad) = 0;



		// Destructor

//		virtual ~DtPropiedad()=0;
};

istream& operator>>(istream&, DtPropiedad);
ostream& operator<<(ostream&, DtPropiedad);


#endif //DT_PROPIEDAD_HPP
