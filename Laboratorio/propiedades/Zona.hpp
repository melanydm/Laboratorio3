#ifndef Zona_HPP
#define Zona_HPP

#include "./datatypes/DtZona.hpp"

class Zona
{
    public:
        Zona();
        Zona(DtZona);
        virtual ~Zona();
        string getCodigo();
        void setCodigo(string);
        string getNombre(); 
        void setNombre(string);

          // toDataType
     DtZona toDataType();


    protected:
    private:
        string codigo;
        string nombre;
};

#endif // Zona_HPP
