/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  18-07-2023
 * Correo: orlandourbanotrejo@gmail.com 
 *
 * Algoritmo que multiplique dos arreglos */
#include <iostream>
int main(){
    int primero[5], segundo[5], multiplicacion[5], suma;
	for(int i = 0; i < 5; i++){
		// Entrada de datos
	 	std::cout << "Valor " << (i+1) << ": ";
	    std::cin >> primero[i];	  
	}
	for(int i=4; i >= 0; i--){
	 	suma = i + 2;
		std::cout << "Valor " << (suma - 1) << ": ";
	    std::cin >> segundo[i];
	}
	 
	for(int i = 0; i < 5; i++){
	    multiplicacion[i] = primero[i] * segundo[i];
	}
	// Impresion de resultados
	for(int i = 0; i < 5; i++){
	 	std::cout <<  multiplicacion[i] << " ";
	 }
	 return 0;
}
