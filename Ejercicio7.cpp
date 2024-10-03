/* Autor:  Orlando Urbano Trejo @Lando
 * Fecha:  15-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para leer calificaciones de N alumnos y determinar el numero de aprobados y reprobados */
#include <iostream>
int main(){
    int alumnos;
    float calificacion;
	// Entrada de datos
    std::cout << "Cantidad de alumnos: ";
    std::cin >> alumnos;
	for(int i = 0; i < alumnos; i++){
        std::cout << "Calificación del alumno " << i + 1 << " (1-100): ";
        std::cin >> calificacion;
		// Condiciones
        if(calificacion > 70){
            std::cout << "APROBADO" << std::endl;
        } 
		else{
            std::cout << "REPROBADO" << std::endl;
        }
    }
	return 0;
}



