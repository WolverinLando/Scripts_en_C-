/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com

 * Algoritmo que calcula la letra a la que te corresponde dependiendo de la calificacion */

#include <iostream>
int main() {
    int calificacion;
	// Entrada de datos
    std::cout << "Ingresa la calificacion obtenida: (0-10)" << std::endl;
    std::cin >> calificacion;

    switch(calificacion){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Tu calificacion es: F" << std::endl;
            break;
        case 6:
        case 7:
            std::cout << "Tu calificacion es: D" << std::endl;
            break;
        case 8:
            std::cout << "Tu calificacion es: C" << std::endl;
            break;
        case 9:
            std::cout << "Tu calificacion es: B" << std::endl;
            break;
        case 10:
            std::cout << "Tu calificacion es: A" << std::endl;
            break;
        default:
            std::cout << "Calificacion invalida" << std::endl;
            break;
    }
    return 0;
}

