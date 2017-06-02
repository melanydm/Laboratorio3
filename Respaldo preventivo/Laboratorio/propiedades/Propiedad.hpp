#ifndef Propiedad_H
#define Propiedad_HPP

using namespace std;

#include "./datatypes/DtPropiedad.hpp"


class Propiedad
{
    public:
        // Constructors & Destructor
        Propiedad();
        Propiedad(DtPropiedad);
        ~Propiedad();

        // Getters
        string getCodigo() { return codigo; }
        int getCant_ambientes() { return cant_ambientes; }
        int getCant_dormitorios() { return cant_dormitorios; }
        int getCant_banios() { return cant_banios; }
        bool getGarage() { return garage; }
        DtDireccion getDireccion() { return direccion; }
        int getMts_edificados() { return mts_edificados; }
        int getMts_totales() { return mts_totales; }
        
        // Setters
        void setCodigo(string val) { codigo = val; }
        void setCant_ambientes(int val) { cant_ambientes = val; }
        void setCant_dormitorios(int val) { cant_dormitorios = val; }
        void setCant_banios(int val) { cant_banios = val; }
        void setGarage(bool val) { garage = val; }
        void setDireccion(DtDireccion val) { direccion = val; }
        void setMts_edificados(int val) { mts_edificados = val; }
        void setMts_totales(int val) { mts_totales = val; }

        // Others
        DtPropiedad toDataType();

    private:

        // Attributes
        string codigo;
        int cant_ambientes;
        int cant_dormitorios;
        int cant_banios;
        bool garage;
        DtDireccion direccion;
        int mts_edificados;
        int mts_totales;
};

#endif // Propiedad_H
