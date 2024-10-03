/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule las comisiones de un empleado dependiendo de las ventas realizadas. */
#include <iostream>
int main(){
    float comision = 0, sueldo, precioVenta, total;
    int ventas;
	// Entrada de datos
    std::cout << "Sueldo fijo: ";
    std::cin >> sueldo;
    std::cout << "Ventas realizadas: ";
    std::cin >> ventas;
	// Recabar datos
    for(int i = 0; i < ventas; i++){
        std::cout << "Precio de la venta " << i + 1 << ": ";
        std::cin >> precioVenta;
        comision += precioVenta * 0.10;
    }
	total = comision + sueldo;
    std::cout << "Comisión: $" << comision << std::endl;
    std::cout << "Sueldo: $" << total << std::endl;
    return 0;
}

