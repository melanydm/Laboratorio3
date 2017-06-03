#include "Casa.hpp"

Casa::Casa():Propiedad(){
    this->mts_espaciosVerdes = 1;
}
Casa::Casa(DtCasa c):Propiedad(c){
    this->mts_espaciosVerdes = c.getMts_espaciosVerdes();
}
Casa::Casa(DtPropiedad p):Propiedad(p){
	this->mts_espaciosVerdes = p.getMts_espaciosVerdes();
}
Casa::~Casa()
{
    //dtor
}
