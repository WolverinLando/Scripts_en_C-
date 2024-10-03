/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el pago que debe realizar una persona por el consumo de agua */
#include <iostream>
int main() {
    int precioMetros, metros;
    float resultado = 0;
	// Entrada de datos
    std::cout << "Ingresa el precio por metro: ";
    std::cin >> precioMetros;
    std::cout << "Metros trabajados: ";
    std::cin >> metros;
	// Operaciones
	resultado = precioMetros * metros;
	std::cout << "Pago: $" << resultado << std::endl;
    return 0;
}

