#include "Casa.hpp"

Casa::Casa():Propiedad(){
    this->mts_espaciosVerdes = 1;
}
Casa::Casa(DtCasa c):Propiedad(c){
    this->mts_espaciosVerdes = c.getMts_espaciosVerdes();
}
Casa::~Casa()
{
    //dtor
}
