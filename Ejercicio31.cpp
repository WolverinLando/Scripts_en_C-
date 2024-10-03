/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo:orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el descuento de una urna dependiendo del tipo de pelota que saque */
#include <iostream>
int main(){
	int pelota;
	float compra = 0, resultado = 0;
	std::cout << "-----CAFETERIA TESJI-----\n1) Pelota Verde\n2) Pelota Roja\n3) Pelota Amarilla" << std::endl;
	// Entrada de datos
	std::cout << "Elige una opcion: ";
	std::cin >> pelota;
	// Condiciones
	if(pelota == 1){
	 	std::cout << "Descuento 10%" << std::endl;
		std::cout << "Total de tu compra: ";
     	std::cin >> compra;
		resultado = compra - (compra * 0.10);
		std::cout << "Monto total: $" << resultado << std::endl;
	}
	else if(pelota == 2){
        std::cout << "Descuento 5%" << std::endl;
        std::cout << "Total de tu compra: ";
        std::cin >> compra;
        resultado = compra - (compra * 0.05);
		std::cout << "Monto total: $" << resultado << std::endl;
    }
	else if(pelota == 3){
        std::cout << "Descuento 15%" << std::endl;
        std::cout << "Total de tu compra: ";
        std::cin >> compra;
        resultado = compra - (compra * 0.15);
        std::cout << "Monto total: $" << resultado << std::endl;
	 }
	 else{
	 	std::cout << "Opcion invalida" << std::endl;
	 } 
    return 0;
}
