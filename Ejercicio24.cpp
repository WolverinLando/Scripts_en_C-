/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  17-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo que calcula la tercera parte de un numero */
#include <iostream>
int main(){
	float resultado1 = 0, resultado2 = 0, final = 0, numero; 
	// Entrada de datos
    std::cout << "Ingresa un numero: ";
	std::cin >> numero;
	// Operaciones
	resultado1 = numero * 2;
	resultado2 = resultado1 / 3;
	final = resultado2 / 2;
	std::cout << "La mitad de la tercera parte del doble de " << numero << " es: " << final << std::endl;
	return 0;
}
