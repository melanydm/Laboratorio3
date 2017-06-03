#include "Fabrica.hpp"
#include "ISistema.hpp"

Fabrica::Fabrica(){}

Sistema* Fabrica::getSistema(){
	return new Sistema();
}