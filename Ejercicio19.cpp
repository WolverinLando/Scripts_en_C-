/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 *  Algoritmo que determina el descuento de un empleado */ 
#include <iostream>
#include <string>
int main(){
    char nombre[10];
    float salario, total = 0;
	// Entrada de datos
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Salario: ";
    std::cin >> salario;
	total = salario - (salario * 0.20);
	std::cout << "Empleado: " << nombre << " su salario es de: $" << total << std::endl;
	return 0;
}

