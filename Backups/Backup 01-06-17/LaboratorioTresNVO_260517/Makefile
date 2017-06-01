
output: output/main.o output/Fabrica.o output/ISistema.o output/Sistema.o output/Transa.o output/DtDireccion.o output/DtFecha.o output/DtHora.o output/Administrador.o output/Inmobiliaria.o output/Interesado.o output/usuarios/Usuario.o output/DtAdministrador.o output/DtInmobiliaria.o output/DtInteresado.o output/DtUsuario.o output/Apartamento.o output/Casa.o output/Departamento.o output/Edificio.o output/Oferta.o output/Propiedad.o output/Zona.o output/Apartamento.o output/Casa.o output/Departamento.o output/Edificio.o output/Oferta.o output/Propiedad.o output/Zona.o
	g++ output/main.o output/Fabrica.o output/ISistema.o output/Sistema.o output/Transa.o output/DtDireccion.o output/DtFecha.o output/DtHora.o output/Administrador.o output/Inmobiliaria.o output/Interesado.o output/usuarios/Usuario.o output/DtAdministrador.o output/DtInmobiliaria.o output/DtInteresado.o output/DtUsuario.o output/Apartamento.o output/Casa.o output/Departamento.o output/Edificio.o output/Oferta.o output/Propiedad.o output/Zona.o output/Apartamento.o output/Casa.o output/Departamento.o output/Edificio.o output/Oferta.o output/Propiedad.o output/Zona.o -o Laboratorio

output/main.o: main.cpp
	g++ -c main.cpp

output/Fabrica.o: Fabrica.hpp
	g++ -c Fabrica.cpp

output/ISistema.o: ISistema.hpp
	g++ -c ISistema.cpp

output/Sistema.o: Sistema.cpp Sistema.hpp
	g++ -c Sistema.cpp

output/Transa.o: utils/Transa.hpp
	g++ -c utils/Transa.cpp

output/datatypes/DtDireccion.o: utils/datatypes/DtDireccion.cpp utils/datatypes/DtDireccion.hpp
	g++ -c utils/datatypes/DtDireccion.cpp

output/datatypes/DtFecha.o: utils/datatypes/DtFecha.cpp utils/datatypes/DtFecha.hpp
	g++ -c utils/datatypes/DtFecha.cpp

output/datatypes/DtHora.o: utils/datatypes/DtHora.cpp utils/datatypes/DtHora.hpp
	g++ -c utils/datatypes/DtHora.cpp

output/usuarios/Administrador.o: usuarios/Administrador.cpp usuarios/Administrador.hpp
	g++ -c usuarios/Administrador.cpp

output/Inmobiliaria.o: usuarios/Inmobiliaria.cpp usuarios/Inmobiliaria.hpp
	g++ -c usuarios/Inmobiliaria.cpp

output/Interesado.o: usuarios/Interesado.cpp usuarios/Interesado.hpp
	g++ -c usuarios/Interesado.cpp

output/Usuario.o: usuarios/Usuario.cpp usuarios/Usuario.hpp
	g++ -c usuarios/Usuario.cpp

output/DtAdministrador.o: usuarios/datatypes/DtAdministrador.cpp usuarios/datatypes/DtAdministrador.hpp
	g++ -c usuarios/datatypes/DtAdministrador.cpp

output/DtInmobiliaria.o: usuarios/datatypes/DtInmobiliaria.cpp usuarios/datatypes/DtInmobiliaria.hpp
	g++ -c usuarios/datatypes/DtInmobiliaria.cpp

output/DtInteresado.o: usuarios/datatypes/DtInteresado.cpp usuarios/datatypes/DtInteresado.hpp
	g++ -c usuarios/datatypes/DtInteresado.cpp

output/DtUsuario.o: usuarios/datatypes/DtUsuario.cpp usuarios/datatypes/DtUsuario.hpp
	g++ -c usuarios/datatypes/DtUsuario.cpp

output/Apartamento.o: propiedades/Apartamento.cpp propiedades/Apartamento.hpp
	g++ -c propiedades/Apartamento.cpp

output/Casa.o: propiedades/Casa.cpp propiedades/Casa.hpp
	g++ -c propiedades/Casa.cpp

output/Departamento.o: propiedades/Departamento.cpp propiedades/Departamento.hpp
	g++ -c propiedades/Departamento.cpp

output/Edificio.o: propiedades/Edificio.cpp propiedades/Edificio.hpp
	g++ -c propiedades/Edificio.cpp

output/Oferta.o: propiedades/Oferta.cpp propiedades/Oferta.hpp
	g++ -c propiedades/Oferta.cpp

output/Propiedad.o: propiedades/Propiedad.cpp propiedades/Propiedad.hpp
	g++ -c propiedades/Propiedad.cpp

output/Zona.o: propiedades/Zona.cpp propiedades/Zona.hpp
	g++ -c propiedades/Zona.cpp

output/Apartamento.o: propiedades/datatypes/Apartamento.cpp propiedades/datatypes/Apartamento.hpp
	g++ -c propiedades/datatypes/Apartamento.cpp

output/Casa.o: propiedades/datatypes/Casa.cpp propiedades/datatypes/Casa.hpp
	g++ -c propiedades/datatypes/Casa.cpp

output/Departamento.o: propiedades/datatypes/Departamento.cpp propiedades/datatypes/Departamento.hpp
	g++ -c propiedades/datatypes/Departamento.cpp

output/Edificio.o: propiedades/datatypes/Edificio.cpp propiedades/datatypes/Edificio.hpp
	g++ -c propiedades/datatypes/Edificio.cpp

output/Oferta.o: propiedades/datatypes/Oferta.cpp propiedades/datatypes/Oferta.hpp
	g++ -c propiedades/datatypes/Oferta.cpp

output/Propiedad.o: propiedades/datatypes/Propiedad.cpp propiedades/datatypes/Propiedad.hpp
	g++ -c propiedades/datatypes/Propiedad.cpp

output/Zona.o: propiedades/datatypes/Zona.cpp propiedades/datatypes/Zona.hpp
	g++ -c propiedades/datatypes/Zona.cpp


clean:
	rm output/*.o Laboratorio

# main.o: main.cpp RelacionLaboral.o Nacional.o Extranjera.o Empresa.o Empleado.o DtNacional.o DtExtranjero.o DtEmpresa.o DtEmpleado.o DtFecha.o DtDireccion.o
# 	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

# RelacionLaboral.o: RelacionLaboral.hpp RelacionLaboral.cpp DtEmpresa.o DtFecha.o Empresa.o Empleado.o Nacional.o
# 	$(CPP) -c RelacionLaboral.cpp -o RelacionLaboral.o $(CXXFLAGS)
#
