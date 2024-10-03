/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule el total de una caja registradora */
#include <iostream>
int main(){
    int convertidor = 0, resultado = 0;
    float dinero[] = {1000, 500, 200, 100, 50, 20, 5, 2, 1, 0.50, 0.20, 0.10};
	for(int i = 0; i < 12; i++){
        // Entrada de datos
		std::cout << "Cantidad de dinero que tiene: " << dinero[i] << " pesos" << std::endl;
        std::cin >> convertidor;
        resultado += (convertidor * dinero[i]);
        std::cout << "Total almacenado: $" << resultado << " pesos" << std::endl;
    }
    return 0;
}


