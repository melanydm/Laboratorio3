#include "Departamento.hpp"
#include "DtDepartamento.hpp"

Departamento::Departamento()
{
    id="";
    nombre="";
}

Departamento::Departamento(DtDepartamento depto)
{
    this.id=depto.getId();
    this.nombre=depto.getNombre();
}


Departamento::~Departamento()
{
    //dtor
}
