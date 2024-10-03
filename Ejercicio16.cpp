/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo que calcula el presupuesto anual de tres areas de un hospital */
#include <iostream>
int main(){
    int presupuesto;
    float urgencias = 0, pediatria = 0, traumatologia = 0;
	// Entrada de datos
    std::cout << "Presupuesto anual: ";
    std::cin >> presupuesto;
    urgencias = presupuesto * 0.37;
    pediatria = presupuesto * 0.42;
    traumatologia = presupuesto * 0.21;
	std::cout << "Presupuesto Urgencias: $" << urgencias << std::endl;
    std::cout << "Presupuesto Pediatria: $" << pediatria << std::endl;
    std::cout << "Presupuesto Traumatologia: $" << traumatologia << std::endl;
   	return 0;
}

