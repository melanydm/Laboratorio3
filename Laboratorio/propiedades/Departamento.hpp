#ifndef Departamento_HPP
#define Departamento_HPP

#include "string"
#include "./datatypes/DtDepartamento.hpp"
using namespace std;
class Departamento
{
    public:
        Departamento();
        Departamento(const DtDepartamento);
        virtual ~Departamento();
        string getId();
        void setId(string);
        string getNombre();
        void setNombre(string);
        DtDepartamento toDataType();

    private:
        string id;
        string nombre;
};

#endif // Departamento_HPP
