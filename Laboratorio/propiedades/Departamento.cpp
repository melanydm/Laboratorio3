#include "Departamento.hpp"



Departamento::Departamento()
{
    id="";
    nombre="";
}

Departamento::Departamento(const DtDepartamento depto)
{
    this->id = depto.getId();
    this->nombre = depto.getNombre();
}


DtDepartamento Departamento::toDataType()
{
    DtDepartamento depto;
    depto.setId(this->getId());
    depto.setNombre(this->getNombre());
    return depto;
}

string Departamento :: getId() { return id; }
void Departamento :: setId(string val) { id = val; }
string Departamento :: getNombre() { return nombre; }
void Departamento :: setNombre(string val) { nombre = val; }

Departamento::~Departamento()
{
    //dtor
}
