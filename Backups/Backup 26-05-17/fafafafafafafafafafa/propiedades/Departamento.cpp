#include "Departamento.hpp"
#include "DtDepartamento.hpp"

departamento::departamento()
{
    id="";
    nombre="";
}

departamento::departamento(DtDepartamento depto)
{
    this.id=depto.getId();
    this.nombre=depto.getNombre();
}


departamento::~departamento()
{
    //dtor
}
