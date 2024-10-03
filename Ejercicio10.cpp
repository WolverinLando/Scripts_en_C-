/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el saldo de sus clientes, para no generar intereses y dependiendo del año hacer descuentos especificos. */
#include <iostream>
#include <string>

int main() {
    float saldoActual = 0, pagoActual = 0, saldoAnterior = 0, saldoMinimo = 0, pagoInteres = 0, montoCompras = 0, deposito = 0;
    int clientes;
    std::string nombre;
    std::cout << "Número de clientes: ";
    std::cin >> clientes;
	for(int i = 0; i < clientes; i++){
        // Entrada de datos
		std::cout << "Nombre cliente: ";
        std::cin >> nombre;
        std::cout << "Saldo anterior: ";
        std::cin >> saldoAnterior;
        std::cout << "Último depósito: ";
        std::cin >> deposito;
        std::cout << "Monto por ventas: ";
        std::cin >> montoCompras;
        std::cout << "Saldo Actual: ";
        std::cin >> saldoActual;

        pagoActual = (saldoActual * 0.12) + 200;
        saldoMinimo = saldoActual * 0.15;
        pagoInteres = saldoActual * 0.85;

        std::cout << "Tu saldo actual, " << nombre << ", es de " << pagoActual << " pesos" << std::endl;
        std::cout << "Tu pago mínimo, " << nombre << ", es de " << saldoMinimo << " pesos" << std::endl;
        std::cout << "El pago para no generar intereses, " << nombre << ", es de " << pagoInteres << " pesos" << std::endl;
    }

    return 0;
}

