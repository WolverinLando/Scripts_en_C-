/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule el precio total del boleto de una persona, ingresando los datos por teclado */
#include <iostream>
#include <iomanip>

int main(){
    float precioKilometro, distancia, precioBoleto = 0;
    // Entrada de datos
    std::cout << "Precio por kilometro: ";
    std::cin >> precioKilometro;
    std::cout << "Cantidad de kilometros a recorrer: ";
    std::cin >> distancia;
    // Impresion de resultados
    std::cout << "Precio del boleto: $" << std::fixed << std::setprecision(2) << (precioKilometro * distancia) << std::endl;
    return 0;
}

