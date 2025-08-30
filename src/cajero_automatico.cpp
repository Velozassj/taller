#include <iostream>
#include <string>

int main (){
using namespace std;
    string pin;
    string usuario;
    int opcion;
    int retiro;

cout << "BIENVENIDO A BANCO ARBOLEDA" <<endl;

cout << "ingrese su usuario" <<endl;
cin >> usuario;

cout << "Ingrese su PIN de 4 digitos: " <<endl;
cin >> pin;


if (usuario == "juanveloza07" && pin == "2007"){
    cout << "BIENVENIDO DE NUEVO JUAN VELOZA" <<endl;
}

else if (usuario != "juanveloza07"){
    cout << "USUARIO INCORRECTO" <<endl;
    return 0;
}

else if(pin != "2007"){
    cout << "PIN INCORRECTO" <<endl;
    return 0;
}

cout << "MENU" <<endl;
cout << "1. SALDO " <<endl;
cout << "2. RETIRAR MI DINERO" <<endl;
cout << "3. SALIR DE BANCO ARBOLEDA" <<endl;
cout << "ELIJA UNA OPCION (1, 2, 3)" <<endl;
cin >> opcion;

if (opcion == 1){
    cout << "TIENES 1.000.000 COP" <<endl;
}

else if (opcion == 2){
    cout << "Cuanto desea retirar?, si tiene 1.000.000 COP" <<endl;
    cin >> retiro;


if (retiro <= 1000000){
    cout << "RETIRANDO" <<endl;
}
else{
    cout << " NO TIENES SUFICIENTES FONDOS" <<endl;
}

}
else if (opcion == 3){
    cout << "HASTA PRONTO JUAN VELOZA" <<endl;
    return 0;
}
else {
    cout << "OPCION INVALIDA" <<endl;
}

}
