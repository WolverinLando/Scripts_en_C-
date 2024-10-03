/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que registra calificaciones de varias materias y calcular su promedio */
#include <iostream>
int main(){
	char materia[6][40] = {
		"Calculo Diferencial",
	    "Fundamentos de Programación",
	    "Quimica",
	    "Fundamentos de Investigación",
	    "Matemáticas Discretas",
	    "Desarrollo Sustentable" };
    float calificaciones[6][5], promedioMaterias[6] = {0}, promedioFinal = 0;
    for(int  i = 0; i < 6; i++){
		// Entrada de datos
		std::cout << "Calificacion " << materia[i] << ": " << std::endl;
	    for(int j = 0; j < 5; j++){
    		std::cout << "Unidad " << (j+1) << ": ";
			std::cin >> calificaciones[i][j];
			promedioMaterias[i]	+= calificaciones[i][j]; 
		  }
		  promedioMaterias[i] /= 5;
		  promedioFinal += promedioMaterias[i];
		  std::cout  << std::endl;
	 }
	 promedioFinal /=6;
	 // Impresion de resultados
	 std::cout << "Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\tPromedio\n" << std::endl;
	 for(int i = 0; i < 6; i++){
		for(int j = 0; j < 5; j++){
			std::cout << calificaciones[i][j] << "\t\t";
		}
		std::cout << promedioMaterias[i] << "\n";
	 }
	 std::cout << "\nPromedio General:" << promedioFinal << "\n" << std::endl;
	 return 0;
}
