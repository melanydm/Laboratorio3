
#include "Oferta.hpp"

Oferta::Oferta(DtOferta oDtOferta){
    this->precio = oDtOferta.getPrecio();
}             
                         
DtOferta Oferta::toDataType(){
   DtOferta oDtOferta;
   oDtOferta.setPrecio(this->getPrecio());
   return oDtOferta;
}

/*bool operator == (Oferta* oOferta){
  if(oOferta->getPrecio() == this->getPrecio())
     return true;
 return false;
}*/

