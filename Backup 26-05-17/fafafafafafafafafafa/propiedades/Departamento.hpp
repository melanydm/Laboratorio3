#ifndef DEPARTAMENTO_HPP
#define DEPARTAMENTO_HPP


class departamento
{
    public:
        departamento();
        departamento(DtDepartamento);
        virtual ~departamento();
        string getId() { return id; }
        void setId(string val) { id = val; }
        string getNombre() { return nombre; }
        void setNombre(string val) { nombre = val; }
    protected:
    private:
        string id;
        string nombre;
};

#endif // DEPARTAMENTO_HPP
