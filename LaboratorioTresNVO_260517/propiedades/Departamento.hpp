#ifndef Departamento_HPP
#define Departamento_HPP


class Departamento
{
    public:
        Departamento();
        Departamento(DtDepartamento);
        virtual ~Departamento();
        string getId() { return id; }
        void setId(string val) { id = val; }
        string getNombre() { return nombre; }
        void setNombre(string val) { nombre = val; }

// toDataType
     DtDepartamento toDataType();

    protected:
    private:
        string id;
        string nombre;
};

#endif // Departamento_HPP
