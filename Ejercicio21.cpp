/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo que calcula la edad de una persona en meses */
#include <iostream>
int main(){
    int edad, meses, resultado = 0;
	// Entrada de datos
    std::cout << "Edad en años: ";
    std::cin >> edad;
    std::cout << "Cuantos meses: ";
    std::cin >> meses;
	resultado = (edad * 12) + meses;
	std::cout << "Edad: " << resultado << " meses" << std::endl;
    return 0;
}

