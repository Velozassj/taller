# taller

## INTEGRANTES
- Juan David Veloza Chaves 1019903241
- Oscar Esteban Castillo Sandoval 1029664039
- Diego Alejandro Ortiz Cogollo 1014864751

## INFORMACION
- Pensamiento Algorítmico
- Universidad Sergio Arboleda
- 30 de agosto de 2025

## GUIAS DE COMPILACIÓN
### Windows
1. Instalar **MinGW** o usar **MSYS2**.  
2. Compilar con:  
   g++ archivo.cpp -o programa.exe
3. Ejecutar con:
   programa.exe

### Linux
1. Instalar g++:
   sudo apt-get install g++
2. Compilar con:
   g++ archivo.cpp -o programa
3. Ejecutar con:
   ./programa

### MacOS
1. Instalar compilador:
   xcode-select --install
2. Compilar con:
   g++ archivo.cpp -o programa
3. Ejecutar con:
   ./programa

## Estructura del repositorio
taller/
 ├── README.md
├── docs/
│ ├── punto1_calculadora.pdf
│ ├── punto2_validacion_fecha.pdf
│ ├── punto3_sistema_descuentos.pdf
│ ├── punto4_cajero_automatico.pdf
│ ├── punto5_horoscopo.pdf
│ └── punto6_validacion_hora.pdf
└── src/
├── calculadora.cpp
├── validacion_fecha.cpp
├── sistema_descuentos.cpp
├── cajero_automatico.cpp
├── horoscopo.cpp
└── validacion_hora.cpp

## INSTRUCCIONES DE EJECUCIÓN
1. Entrar a la carpeta src/.
2. Compilar el progama que quiera ejecutar, ejemplo la calculadora:
   g++ calculadora.cpp -o calculadora
3. Ejecute el programa:
   ./calculadora
Para cualquier otro archivo de src/, repita el mismo proceso.
