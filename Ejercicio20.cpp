/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 * Algoritmo que suma tres numeros */

#include <iostream>
int main(){
    int numero1, numero2, numero3, resultado = 0;
	// Entrada de datos
    std::cout << "Numero 1: ";
    std::cin >> numero1;
    std::cout << "Numero 2: ";
    std::cin >> numero2;
    std::cout << "Numero 3: ";
    std::cin >> numero3;
	// Operaciones
    resultado = numero1 + numero2 + numero3;
    std::cout << "Concatenacion: " << resultado << std::endl;
	return 0;
}

