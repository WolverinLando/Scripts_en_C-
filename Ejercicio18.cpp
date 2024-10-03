/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule el sueldo total de un empleado */
#include <iostream>
int main() {
    float horas, sueldoHora, sueldoFinal = 0;
	// Entrada de datos
    std::cout << "Horas trabajadas: ";
    std::cin >> horas;
    std::cout << "Sueldo por hora: ";
    std::cin >> sueldoHora;
    sueldoFinal = horas * sueldoHora;
    std::cout << "Sueldo total: $" << sueldoFinal << std::endl;
    return 0;
}

