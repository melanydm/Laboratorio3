#ifndef DT_DEPARTAMENTO_HPP
#define DT_DEPARTAMENTO_HPP

using namespace std;

class DtDepartamento {
    private:
        string id;
        string nombre;
    public:
        DtDepartamento();
        DtDepartamento(DtDepartamento);

        void setId(string id) { this.id = id; }
        string getId()}{ return id; }
        void setNombre(string nombre)}{ this.nombre=nombre }
        string getNombre(){ return nombre; }
		// Operators

		virtual bool operator == (DtDepartamento) = 0;


		// Destructor

		virtual ~DtDepartamento();
}

virtual istream& operator>>(istream&, DtDepartamento);
virtual ostream& operator<<(ostream&, DtDepartamento);

#endif //DT_DEPARTAMENTO_HPP
