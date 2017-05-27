

#include "./usuarios/Administrador.hpp"

#include "Sistema.hpp"

Sistema :: Sistema (){

        Administrador * admin = new Administrador("admin@micasa.com", "admin");

        this->usuarios["admin@micasa.com"] = admin;
}

Sistema :: ~Sistema(){
}
