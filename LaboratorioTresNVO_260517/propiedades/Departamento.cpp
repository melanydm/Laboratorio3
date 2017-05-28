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

string Departamento::getId() { return id; }
void Departamento:: setId(string val) { id = val; }
string Departamento::getNombre() { return nombre; }
void Departamento::setNombre(string val) { nombre = val; }

Departamento::~Departamento()
{
    //dtor
}
