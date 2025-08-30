#include <iostream>
#include <string>

int main(){
    bool esVIP;
    int cantidadProductos;
    double totalCompra;
    double porcentajeDescuento = 0.0;
    double descuento = 0.0;
    double totalFinal = 0.0;
    
    std::cout <<"eres cliente VIP? (1 = si, 0 = no): ";
    std::cin >>esVIP;

    std::cout <<"ingresa la cantidad de productos: ";
    std::cin >>cantidadProductos;

    std::cout <<"ingresa el total de la compra (COP): ";
    std::cin >>totalCompra;

    if (esVIP == true){
        porcentajeDescuento = 0.20;
        std::cout <<"Cliente VIP (20%)";
        
    }else if (esVIP == false){
        porcentajeDescuento = 0.10;
        std::cout <<"Cliente regular con 4 o mas productos  (10%)";
        
    }else {
        porcentajeDescuento = 0;
        std::cout <<"Cliente regular sin descuento";
        
}
    descuento = totalCompra * porcentajeDescuento;
    totalFinal = totalCompra - descuento;

    std::cout <<"DETALLE DE LA COMPRA" <<std::endl;
    std::cout <<"MOTIVO DEL DESCUENTO: " <<std::endl;
    std::cout <<"TOTAL DE LA COMPRA: " << totalCompra <<std::endl;
    std::cout <<"VALOR DEL DESCUENTO: " << descuento <<std::endl;
    std::cout <<"TOTAL FINAL:" << totalFinal <<std::endl;

return 0;


}