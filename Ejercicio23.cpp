/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar si eres mayor de edad */
#include <iostream>
int main(){
    int edad;
	// Entrada de datos
    std::cout << "Edad: ";
    std::cin >> edad;
	// Condicionales
    if(edad >= 18){
        std::cout << "Eres mayor de edad" << std::endl;
    } 
	else{
        std::cout << "Eres menor de edad" << std::endl;
    }
    return 0;
}

