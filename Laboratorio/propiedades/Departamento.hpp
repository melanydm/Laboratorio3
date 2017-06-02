#ifndef Departamento_HPP
#define Departamento_HPP

#include "string"
#include "./datatypes/DtDepartamento.hpp"

class Departamento
{
    public:
        Departamento();
        Departamento(DtDepartamento);
        virtual ~Departamento();
        string getId();
        void setId(string);
        string getNombre();
        void setNombre(string);

    private:
        string id;
        string nombre;
};

#endif // Departamento_HPP
