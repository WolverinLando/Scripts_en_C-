/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo para calcular el descuento de un medicamento */
#include <iostream>
#include <string>
int main(){
    char nombre[10];
    float precio, total = 0;
	// Entrada de datos
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Precio del Medicamento: ";
    std::cin >> precio;
	// Operaciones
    total = precio - (precio * 0.35);
	std::cout << "Cliente: " << nombre << " el total a pagar es de: $" << total << std::endl;

    return 0;
}

