/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el sueldo semanal de N trabajadores y aplicar descuentos dependiendo de las horas se hara un descuento correspondiente */
#include <iostream>
#include <string>

int main(){
    int trabajadores;
    float horasTrabajadas, sueldoHora, salario = 0, nuevoSalario = 0, total = 0;
    std::string nombres;
	// Entrada de datos
    std::cout << "Número de trabajadores: ";
    std::cin >> trabajadores;
   	for(int i = 0; i < trabajadores; i++){
        std::cout << "Nombre del trabajador " << i + 1 << ": ";
        std::cin >> nombres;
        std::cout << "Horas Trabajadas: ";
        std::cin >> horasTrabajadas;
        std::cout << "Sueldo por hora: $";
        std::cin >> sueldoHora;

        salario = horasTrabajadas * sueldoHora;

        if(salario >= 0 && salario <= 150){
            nuevoSalario = salario * 0.5;
        }
		else if(salario > 150 && salario <= 300){
            nuevoSalario = salario * 0.7;
        } 
		else if(salario > 300 && salario <= 450){
            nuevoSalario = salario * 0.9;
        } 
		else{
            nuevoSalario = 0;
        }

        total = salario - nuevoSalario;
        std::cout << "Trabajador: " << nombres << std::endl;
        std::cout << "Salario final: $" << total << std::endl;
    }

    return 0;
}

