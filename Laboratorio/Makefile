
output: output.o
	g++ output.o -o Laboratorio

output.o: *.cpp usuarios/*.cpp propiedades/*.cpp utils/*.cpp
	g++ -c *.cpp usuarios/*.cpp propiedades/*.cpp utils/*.cpp

clean:
	rm *.o Laboratorio

# main.o: main.cpp RelacionLaboral.o Nacional.o Extranjera.o Empresa.o Empleado.o DtNacional.o DtExtranjero.o DtEmpresa.o DtEmpleado.o DtFecha.o DtDireccion.o DtApartamento.o
# 	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

# RelacionLaboral.o: RelacionLaboral.hpp RelacionLaboral.cpp DtEmpresa.o DtFecha.o Empresa.o Empleado.o Nacional.o
# 	$(CPP) -c RelacionLaboral.cpp -o RelacionLaboral.o $(CXXFLAGS)
#
