/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * 
 * Algoritmo que calcula la cantidad de ventas que realiza un vendedor y de acuerdo a esas ventas, realizar un descuento */

#include <iostream>
int main(){
    int ventas, cantidad[40];
    float totalFinal = 0, total = 0;
	// Entrada de datos
    std::cout << "Número de ventas: ";
    std::cin >> ventas;
    // Ciclo for
    for(int i = 0; i < ventas; i++){
        std::cout << "Precio de la venta " << i + 1 << ": ";
        std::cin >> cantidad[i];
        totalFinal += cantidad[i];
		// Condicionales
        if(cantidad[i] < 1000){
            total += cantidad[i];
        } 
		else if(cantidad[i] >= 1000 && cantidad[i] < 2000) {
            total += cantidad[i];
        }
    }
	std::cout << "Total final: " << totalFinal << std::endl;
    return 0;
}

