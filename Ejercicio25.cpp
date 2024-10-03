/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que permite calcular el factorial de un numero */

#include <iostream>
int main(){
   	int numero, resultado = 1;
   	// Entrada de datos
	std::cout << "Ingresa un numero: ";
	std::cin >> numero;
	for(int i=1; i<=numero; i++){
	    resultado *= i;
	}
	std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;
	return 0;
}
