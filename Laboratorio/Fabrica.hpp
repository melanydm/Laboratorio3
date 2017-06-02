#include "Sistema.hpp"

class Fabrica {
  public:
    Fabrica(){ }

    virtual  ~Fabrica(){
      //delete this;
    }


    virtual Sistema* getSistema(){
      return new Sistema();
    }
};
