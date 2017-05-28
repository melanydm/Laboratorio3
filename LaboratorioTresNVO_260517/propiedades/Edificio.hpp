#ifndef EDIFICIO_HPP
#define EDIFICIO_HPP


class Edificio
{
    public:
        Edificio();
        Edificio(DtEdificio);
        virtual ~Edificio();

        string getNombre() { return nombre; }
        void setNombre(string val) { nombre = val; }
        int getCant_Pisos() { return cant_Pisos; }
        void setCant_Pisos(int val) { cant_Pisos = val; }
        float getGastos_Comunes() { return gastos_Comunes; }
        void setGastos_Comunes(float val) { gastos_Comunes = val; }

        DtEdificio toDataType();

    private:
        string nombre;
        int cant_Pisos;
        float gastos_Comunes;
};

#endif // EDIFICIO_HPP
