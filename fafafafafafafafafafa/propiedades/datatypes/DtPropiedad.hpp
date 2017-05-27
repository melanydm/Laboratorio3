#ifndef DT_PROPIEDAD_HPP
#define DT_PROPIEDAD_HPP

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

    public:
        DtPropiedad();
        DtPropiedad(DtPropiedad);

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

		virtual bool operator == (DtPropiedad) = 0;



		// Destructor

		virtual ~DtPropiedad()=0;
}
virtual istream& operator>>(istream&, DtPropiedad)=0;
virtual ostream& operator<<(ostream&, DtPropiedad)=0;


#endif //DT_PROPIEDAD_HPP
