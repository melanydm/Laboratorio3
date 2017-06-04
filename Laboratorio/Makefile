
output: output/main.o output/Sistema.o output/DtDireccion.o output/DtFecha.o output/DtHora.o output/Administrador.o output/Inmobiliaria.o output/Interesado.o output/Usuario.o output/DtAdministrador.o output/DtInmobiliaria.o output/DtInteresado.o output/DtUsuario.o output/Apartamento.o output/Casa.o output/Departamento.o output/Edificio.o output/Oferta.o output/Propiedad.o output/Zona.o output/Apartamento.o output/Casa.o output/Departamento.o output/Edificio.o output/Oferta.o output/Propiedad.o output/ToBasicDt.o output/DtZona.o output/DtDepartamento.o output/DtEdificio.o output/DtOferta.o output/DtPropiedad.o output/DtApartamento.o output/DtCasa.o output
	g++ main.o Sistema.o DtDireccion.o DtFecha.o DtHora.o Administrador.o Inmobiliaria.o Interesado.o Usuario.o DtAdministrador.o DtInmobiliaria.o DtInteresado.o DtUsuario.o Apartamento.o Casa.o Departamento.o Edificio.o Oferta.o Propiedad.o Zona.o Apartamento.o Casa.o Departamento.o Edificio.o Oferta.o Propiedad.o ToBasicDt.o DtZona.o DtDepartamento.o DtEdificio.o DtOferta.o DtPropiedad.o DtApartamento.o DtCasa.o -o Laboratorio

output/DtDireccion.o: utils/datatypes/DtDireccion.cpp utils/datatypes/DtDireccion.hpp
	g++ -c utils/datatypes/DtDireccion.cpp

output/DtFecha.o: utils/datatypes/DtFecha.cpp utils/datatypes/DtFecha.hpp
	g++ -c utils/datatypes/DtFecha.cpp

output/DtHora.o: utils/datatypes/DtHora.cpp utils/datatypes/DtHora.hpp
	g++ -c utils/datatypes/DtHora.cpp

output/Administrador.o: usuarios/Administrador.cpp usuarios/Administrador.hpp
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

output/DtApartamento.o: propiedades/datatypes/DtApartamento.cpp propiedades/datatypes/DtApartamento.hpp
	g++ -c propiedades/datatypes/DtApartamento.cpp

output/DtCasa.o: propiedades/datatypes/DtCasa.cpp propiedades/datatypes/DtCasa.hpp
	g++ -c propiedades/datatypes/DtCasa.cpp

output/DtDepartamento.o: propiedades/datatypes/DtDepartamento.cpp propiedades/datatypes/DtDepartamento.hpp
	g++ -c propiedades/datatypes/DtDepartamento.cpp

output/DtEdificio.o: propiedades/datatypes/DtEdificio.cpp propiedades/datatypes/DtEdificio.hpp
	g++ -c propiedades/datatypes/DtEdificio.cpp

output/DtOferta.o: propiedades/datatypes/DtOferta.cpp propiedades/datatypes/DtOferta.hpp
	g++ -c propiedades/datatypes/DtOferta.cpp

output/DtPropiedad.o: propiedades/datatypes/DtPropiedad.cpp propiedades/datatypes/DtPropiedad.hpp
	g++ -c propiedades/datatypes/DtPropiedad.cpp

output/ToBasicDt.o: utils/ToBasicDt.cpp utils/ToBasicDt.hpp
	g++ -c utils/ToBasicDt.cpp

output/DtZona.o: propiedades/datatypes/DtZona.cpp propiedades/datatypes/DtZona.hpp
	g++ -c propiedades/datatypes/DtZona.cpp

output/Sistema.o: Sistema.cpp Sistema.hpp ISistema.hpp
	g++ -c Sistema.cpp

output/main.o: main.cpp ISistema.hpp utils/Transa.hpp Fabrica.hpp
	g++ -c main.cpp


clean:
	rm *.o Laboratorio

# main.o: main.cpp RelacionLaboral.o Nacional.o Extranjera.o Empresa.o Empleado.o DtNacional.o DtExtranjero.o DtEmpresa.o DtEmpleado.o DtFecha.o DtDireccion.o DtApartamento.o
# 	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

# RelacionLaboral.o: RelacionLaboral.hpp RelacionLaboral.cpp DtEmpresa.o DtFecha.o Empresa.o Empleado.o Nacional.o
# 	$(CPP) -c RelacionLaboral.cpp -o RelacionLaboral.o $(CXXFLAGS)
#
