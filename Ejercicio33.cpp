/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  20-07-2023 
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula los creditos de alumnos dependiendo de ciertas actividades */
#include <iostream>
int main(){
    int carrera, credito, lugar;
	// Entrada de datos
    std::cout << "Estás inscrito a un taller (1 = Si y 2 = No): ";
    std::cin >> credito;
	// Condiciones
    if(credito == 1){
        std::cout << "Tienes un crédito" << std::endl;
        std::cout << "Participaste en la carrera (1 = si y 2 = NO): ";
        std::cin >> carrera;
		if(carrera == 1){
        std::cout << "Tienes otro crédito" << std::endl;
        std::cout << "Quedaste en uno de los 3 primeros lugares: ";
        std::cin >> lugar;
			if(lugar == 1){
                std::cout << "Genial, tienes tres créditos" << std::endl;
            }
			else if(lugar == 2){
                std::cout << "Tienes dos créditos" << std::endl;
            }
        }
		else if(carrera == 2){
            std::cout << "Tienes solo un crédito" << std::endl;
        }
    } 
	else if(credito == 2){
        std::cout << "Inscríbete a un taller por favor" << std::endl;
        std::cout << "Participaste en la carrera (1 = si y 2 = NO): ";
        std::cin >> carrera;

        if(carrera == 1){
            std::cout << "Tienes un crédito" << std::endl;
            std::cout << "Quedaste en uno de los 3 primeros lugares: ";
            std::cin >> lugar;

            if(lugar == 1){
                std::cout << "Tienes dos créditos" << std::endl;
            } 
			else if(lugar == 2){
                std::cout << "Tienes un crédito" << std::endl;
            }
        } 
		else if(carrera == 2){
			std::cout << "No tienes ningun credito" << std::endl;
		}
    } 
	else{
        std::cout << "Opción Inválida" << std::endl;
    }
	return 0;
}

