/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la multiplicacion de dos numeros */
#include <iostream>
int main(){
    float numero1, numero2, resultado = 0;
	// Entrada de datos
	std::cout << "Numero 1: ";
    std::cin >> numero1;
    std::cout << "Numero 2: ";
    std::cin >> numero2;
    resultado = numero1 * numero2;
	std::cout << "Resultado: " << resultado << std::endl;
    return 0;
}

