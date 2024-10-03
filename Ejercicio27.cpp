/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  17-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo que calcula el descuento de 3 tipos de vestidos */
#include <iostream>
int main(){
	std::cout << "----VESTIDOS----\n1) Grande $500\n2) Mediana $400\n3) Chica $300" << std::endl;
	int vestido, cantidad;
	float total = 0;
	// Entrada de datos
	std::cout << "Elige la marca que deseas comprar (1-3):";
	std::cin >> vestido;
	// Condiciones
	if(vestido == 1){
		 std::cout << " Numero de vestidos que deseas comprar: ";
		 std::cin >> cantidad;
		 total = cantidad * 500;
   	}
	else if(vestido == 2){
		std::cout << " Numero de vestidos que deseas comprar: ";
       	std::cin >> cantidad; 
		total = cantidad * 400;
	}
	else if(vestido == 3){
		std::cout << " Numero de vestidos que deseas comprar: ";
        std::cin >> cantidad;
        total = cantidad * 300;
	}
	else{
	 	std::cout << "Opcion no valida";
	}
	std::cout << "Monto total final: $" << total << std::endl;
	return 0;
}
