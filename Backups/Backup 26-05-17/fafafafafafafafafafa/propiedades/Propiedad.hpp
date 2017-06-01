#ifndef PROPIEDAD_H
#define PROPIEDAD_HPP


class propiedad
{
    public:
        propiedad();
        propiedad(DtPropiedad);
        ~propiedad();
        string getCodigo() { return codigo; }
        void setCodigo(string val) { codigo = val; }
        int getCant_ambientes() { return cant_ambientes; }
        void setCant_ambientes(int val) { cant_ambientes = val; }
        int getCant_dormitorios() { return cant_dormitorios; }
        void setCant_dormitorios(int val) { cant_dormitorios = val; }
        int getCant_banios() { return cant_banios; }
        void setCant_banios(int val) { cant_banios = val; }
        bool getGarage() { return garage; }
        void setGarage(bool val) { garage = val; }
        Dtdireccion getDireccion() { return direccion; }
        void setDireccion(Dtdireccion val) { direccion = val; }
        int getMts_edificados() { return mts_edificados; }
        void setMts_edificados(int val) { mts_edificados = val; }
        int getMts_totales() { return mts_totales; }
        void setMts_totales(int val) { mts_totales = val; }
    protected:
    private:
        string codigo;
        int cant_ambientes;
        int cant_dormitorios;
        int cant_banios;
        bool garage;
        Dtdireccion direccion;
        int mts_edificados;
        int mts_totales;
};

#endif // PROPIEDAD_H
