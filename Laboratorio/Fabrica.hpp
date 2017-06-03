#include "Sistema.hpp"

class Fabrica {
  public:
    Fabrica();

    virtual  ~Fabrica();


    Sistema* getSistema();
};
