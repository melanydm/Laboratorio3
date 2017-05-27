#ifndef Zona_HPP
#define Zona_HPP


class Zona
{
    public:
        Zona();
        virtual ~Zona();
        string getCodigo() { return codigo; }
        void setCodigo(string val) { codigo = val; }
        string getNombre() { return nombre; }
        void setNombre(string val) { nombre = val; }
    protected:
    private:
        string codigo;
        string nombre;
};

#endif // Zona_HPP
