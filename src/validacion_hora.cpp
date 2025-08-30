#include <iostream>
int main(){

int hora, minutos;
  std::cout <<"introduce la hora de ingreso (0 - 23)";
  std::cin >>hora;
  
  std::cout <<"introduce los minutos (0 - 59)";
  std::cin >>minutos;

  if ((hora >= 0 && hora <= 23) && (minutos >= 0 && minutos <= 59)){
    std::cout <<"hora registrada correctamente: " << hora << ":" << minutos;
  }else {
    std::cout <<"hora incorrecta, asegurese de que la hora y minutos estén dentro de el rango";
  }

   return 0;

}