/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  18-07-2023
 * Correo: orlandourbanotrejogmail.com 
 *
 * Algoritmo que almacena calificaciones de alumnos y calcula su promedio */
#include <iostream>
#include <iomanip>
int main(){
	int calificacion[5];
	char materia;
	float suma = 0, promedio = 0;
	// Entrada de datos
	std::cout << "Materia: ";
	std::cin >> materia;
	for(int i = 0; i < 5; i++){
		// Solicitar datos
		std::cout << "Calificacion en la Unidad "<< (i+1) << ": ";
		std::cin >> calificacion[i];
		suma += calificacion[i];
	}
	std::cout << "Asignatura: " << materia << std::endl;
	std::cout << "Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\t Promedio" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << std::setw(8) << calificacion[i] << "\t";
	}
	promedio = suma / 5;
	std::cout << "Promedio: " << promedio << std::endl;	
	return 0;
}
