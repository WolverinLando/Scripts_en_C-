/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo que calcula la cantidad de dinero que tienes */

#include <iostream>
int main(){
    float cajero[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50}, cantidad = 0, dinero;
	for(int i = 0; i < 11; i++){
		// Entrada de datos
        std::cout << "Cantidad de " << cajero[i] << " que tiene: ";
        std::cin >> dinero;
		cantidad += dinero * cajero[i];
		std::cout << "Total: $" << cantidad << std::endl;
    }
	return 0;
}

