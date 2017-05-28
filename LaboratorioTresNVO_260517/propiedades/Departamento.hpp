#ifndef Departamento_HPP
#define Departamento_HPP


class Departamento
{
    public:
        Departamento();
        Departamento(DtDepartamento);
        virtual ~Departamento();
        string getId();
        void setId(string);
        string getNombre();
        void setNombre(string);

    private:
        string id;
        string nombre;
};

#endif // Departamento_HPP
