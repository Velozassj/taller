#include <iostream>
#include <string>
using namespace std;
int main (){

    int dia;
    int mes;
    int año;
    int mes_reciente;

 string meses [12] = {
    "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio",
    "agosto", "septiembre", "octubre", "noviembre", "diciembre"
 };

 cout << "ingrese el año que nacio: ";
 cin >> año;

 cout << "ingres el mes en el que nacio (1-12): ";
 cin >> mes;

 cout <<"ingrese el dia que nacio: ";
 cin >> dia;


 if (mes < 1 || mes > 12){
 cout << "el mes no existe no es valida la fecha" << endl;

return 0;
}



int dia_del_mes;

    if ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )
    {
            dia_del_mes = 31;
        } else if
        ( mes == 4 || mes == 6 ||
        mes == 9 || mes == 11){
            dia_del_mes = 30;

        } else
        {
            if ((año % 4 == 0 && año % 100 != 0)||(año % 400 == 0)){
            dia_del_mes = 29;}

            else {dia_del_mes = 28;}
        }

     if (dia < 1 || dia > dia_del_mes)
     { cout << " la fecha es incorrecta para el mes " << endl;
    return 0;
     }

     cout << "fecha correcta" << año << "de" << meses [mes - 1] << "de" << dia << endl;
     cout << "ingrese mes actual (1-12)"; cin >> mes_reciente;

     if (mes == mes_reciente){ cout << "¡que suertudo te aplica la promocion por cumplir años!" << endl;
    }
     else
     { cout << "¡lo sentimos no te aplica la promocion porque no estas cumpliendo años " << endl;
    }
    return 0;

     }
