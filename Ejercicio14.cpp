/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad de euros a monedas y viceversa */


#include <iostream>
int main() {
    std::cout << "-------- MENU DE CONVERSIONES --------\n1) Euros\n2) Dolares" << std::endl;
	int opcion, dinero;
    float dolar = 16.89, euro = 0.053, resultado = 0;
	// Entrada de datos
    std::cout << "Elige una opción: ";
    std::cin >> opcion;
	// Condicionales
    if(opcion == 1){
        std::cout << "Dinero: ";
        std::cin >> dinero;
        resultado = dinero / dolar;
        std::cout << "Dinero: " << resultado << " dólares" << std::endl;
    } 
	else if(opcion == 2){
        std::cout << "Dinero: ";
        std::cin >> dinero;
        resultado = dinero / euro;
        std::cout << "Dinero: " << resultado << " euros" << std::endl;
    } 
	else{
        std::cout << "Opción no válida" << std::endl;
    }
	return 0;
}

