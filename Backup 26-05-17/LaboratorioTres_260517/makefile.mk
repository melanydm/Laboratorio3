CPP      = g++
# OBJ      = main.o DtDireccion.o DtEmpleado.o DtEmpresa.o DtExtranjero.o DtFecha.o DtNacional.o Empleado.o Empresa.o Extranjera.o Nacional.o RelacionLaboral.o
# LINKOBJ  = main.o DtDireccion.o DtEmpleado.o DtEmpresa.o DtExtranjero.o DtFecha.o DtNacional.o Empleado.o Empresa.o Extranjera.o Nacional.o RelacionLaboral.o
OBJ      = main.o
LINKOBJ  = main.o
BIN      = LabTres
CXXFLAGS = -Wall -fexceptions -O2 -g -w
RM       = rm -rf

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

cleanall: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) -s

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

# main.o: main.cpp RelacionLaboral.o Nacional.o Extranjera.o Empresa.o Empleado.o DtNacional.o DtExtranjero.o DtEmpresa.o DtEmpleado.o DtFecha.o DtDireccion.o
# 	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

# RelacionLaboral.o: RelacionLaboral.hpp RelacionLaboral.cpp DtEmpresa.o DtFecha.o Empresa.o Empleado.o Nacional.o
# 	$(CPP) -c RelacionLaboral.cpp -o RelacionLaboral.o $(CXXFLAGS)