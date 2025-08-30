#include <iostream>
#include <string>
 using namespace std;
 int main (){

     string mes;
     int dia;

     cout << "dime tu mes de nacimiento:";
     cin >> mes;
     cout << "que dia naciste?";
     cin >> dia;

     if ((mes == "marzo" && dia >= 21 )||(mes == "abril" && dia <= 19)){
    cout << "tu signo zodiacal es Aries" << endl;
     }
     else if ((mes == "abril" && dia >= 20)||(mes == "mayo" && dia <=20)){
         cout << "tu signo zodiacal es Tauro" << endl;
     }
     else if ((mes == "mayo" && dia >= 21)||(mes == "junio" && dia <= 20 )){cout <<
      "tu signo zodiacal es Geminis " << endl; }

     else if((mes == "junio" && dia >= 21)||(mes == "julio" && dia <= 22 )){
         cout << "tu signo zodiacal es Cancer" << endl;
     }
      else if((mes == "julio" && dia >= 23)||(mes == "agosto" && dia <= 22)){
          cout << "tu signo zodiacal es Leo" << endl;
      }
      else if ((mes == "agosto" && dia >= 23)||(mes == "septiembre" && dia <= 22)){
          cout << "tu signo zodiacal es Virgo" << endl;
      }
     else if ((mes == "septiembre" && dia >= 23 )||(mes == "octubre" && dia <= 22)){
         cout << "tu signo zodiacal es Libra" << endl;
     }
     else if ((mes == "octubre" && dia >= 23)||(mes == "noviembre" && dia <= 21)){
         cout << "tu signo zodiacal es Escorpio" << endl;
     }
     else if ((mes == "noviembre" && dia >= 22)||(mes == "diciembre" && dia <= 21)){
         cout << "tu signo zodiacal es Sagitario" << endl;
     }
     else if ((mes == "diciembre" && dia >= 22)||(mes == "enero" && dia <= 19)){
         cout << "tu signo zodiacal es Capricornio" << endl;
     }
     else if ((mes == "enero" && dia >= 20)||(mes == "febrero" && dia <= 18)){
         cout << "tu signo zodiacal es Acuario" << endl;
     }
     else if ((mes == "febrero" && dia >= 19)||(mes == "marzo" && dia <= 20)){
         cout << "tu signo zodiacal es Piscis" << endl;
     }
     return 0;
 }
