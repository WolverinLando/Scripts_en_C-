/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * 
 * Algoritmo para calcular el tiempo que tarda una persona en llegar a un lugar */
#include <iostream>
int main(){
    // Entrada de datos
	float velocidad, distancia, total = 0;
    std::cout << "Velocidad en (Km/h): ";
    std::cin >> velocidad;
    std::cout << "Distancia recorrida: ";
    std::cin >> distancia;
    total = (velocidad * distancia) / 60;
	// Impresion de resultado
    std::cout << "Tiempo: " << total << " horas" << std::endl;
    return 0;
	    
}
