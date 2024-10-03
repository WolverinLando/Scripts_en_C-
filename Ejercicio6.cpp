/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el costo que tendra realizar una llamada telefonica.*/
#include <iostream>
int main(){
	int tiempo, costo;
    float total = 0;
	// Entrada de datos
    std::cout << "Tiempo de la llamada en minutos: ";
    std::cin >> tiempo;
    std::cout << "Costo por minuto: ";
    std::cin >> costo;
    total = tiempo * costo;
    std::cout << "Costo de la llamada: $" << total << std::endl;
    return 0;
}
