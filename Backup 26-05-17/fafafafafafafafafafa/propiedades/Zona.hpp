#ifndef ZONA_HPP
#define ZONA_HPP


class zona
{
    public:
        zona();
        virtual ~zona();
        string getCodigo() { return codigo; }
        void setCodigo(string val) { codigo = val; }
        string getNombre() { return nombre; }
        void setNombre(string val) { nombre = val; }
    protected:
    private:
        string codigo;
        string nombre;
};

#endif // ZONA_HPP
