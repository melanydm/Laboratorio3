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

DtDepartamento Departamento :: toDataType(){
   DtDepartamento oDtDepartamento;
   oDtDepartamento.setId(this->getId());
   oDtDepartamento.setNombre(this->getNombre());
   return oDtDepartamento;
}
Departamento::~Departamento()
{
    //dtor
}
