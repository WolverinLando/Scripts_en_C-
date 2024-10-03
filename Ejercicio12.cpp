/* Autor:  Orlando Urbano Trejo @Lando 
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que determina los intereses que tiene una persona con el banco */
#include <iostream>
int main(){
    int tiempo, tiempoTranscurrido;
    float prestamo = 10000, interes = 0.27;
	// Entrada de datos 
    std::cout << "¿Anio en que solicitó el préstamo?: ";
    std::cin >> tiempo;
    std::cout << "Anio actual: ";
    std::cin >> tiempoTranscurrido;

    for(int i = tiempo; i <= tiempoTranscurrido; i++){
        prestamo += + (prestamo * interes);
        std::cout << "El interés de " << i << " es de: $" << prestamo << std::endl;
    }
    return 0;
}

