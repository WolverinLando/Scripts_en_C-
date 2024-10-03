/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la calificacion de N alumnos y obtener el promedio general */
#include <iostream>
int main(){
    int alumno, edad;
	float suma = 0, promedio = 0;
	// Entrada de datos
	std::cout << "Cuantos alumnos hay en el salon: ";
	std::cin >> alumno;
	for(int i = 0; i < alumno; i++){
		std::cout << "Edad del alumno " << i+1 << ": ";
		std::cin >> edad;
		suma += edad;
	 }
	// Operaciones
	promedio = suma / alumno;
	std::cout << "El promedio de las edades de los alumnos es: " << promedio << std::endl;
	return 0;
}

