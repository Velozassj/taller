#include <iostream>
#include <string>

int main () {

    using namespace std;


    double x, y;
    char operacion;

    std::cout<< " CAJA REGISTRADORA " <<endl;

    std::cout<< "Ingrese un numero" <<endl;
    std::cin>> x;

    std::cout<< "Ingrese una operacion " <<endl;
    std::cin>> operacion;

    std::cout<< "Ingrese un numero" <<endl;
    std::cin>> y;

    if(operacion == '+'){
        std::cout<< x + y <<std::endl;
    }
    else if (operacion == '-'){
        std::cout<< x - y <<std::endl;
    }
    else if (operacion == '*'){
        std::cout<< x * y <<std::endl;
    }
    else if (operacion == '/'){
    if (y == 0){
        std::cout << "Error" << std::endl;
    }
    else
    {
        std::cout << x / y << std::endl;
    }
}
    else{
        std::cout << "Solo puedes usar simbolos como: (+, -, *, /)" << std::endl;
    }
 }

