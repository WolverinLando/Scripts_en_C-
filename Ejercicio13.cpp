/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que determina el precio del boleto de un viaje */
#include <iostream>
int main(){
    float precioBoleto = 20.50, numKilometros, precio = 0;
    std::cout << "Numero de kilometros recorridos: ";
    std::cin >> numKilometros;
    precio = precioBoleto * numKilometros;
    std::cout << "Preio del boleto: $" << precio << std::endl;
    return 0;
}

