#include <iostream>

using namespace std;

class B {
    public:
        virtual void hola()  = 0;
};

class C :  public B {
    public:
        virtual void hola(){ std::cout << "C" << std::endl; };
};


class D :  public B  {
    public:
        virtual void hola(){ std::cout << "D" << std::endl; };
};

void imprimir(B* b){
    b->hola();
}

int main()
{
    B* b = new C();


    imprimir(b);
    
}