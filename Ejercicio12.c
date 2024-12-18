#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * Algoritmo que determina los intereses que tiene una persona con el banco */

 // Prototipo de la función para calcular el interés
void calcularIntereses(int tiempo, int tiempoTranscurrido, float* prestamo, float interes);

int main(){
    int tiempo, tiempoTranscurrido;
    float prestamo = 10000, interes = 0.27;

    // Entrada de datos
    puts("¿Anio en que solicito el prestamo?: ");
    scanf("%d", &tiempo);

	 puts("Anio actual: ");
    scanf("%d", &tiempoTranscurrido);

    // Calcular e imprimir los intereses para cada año
    calcularIntereses(tiempo, tiempoTranscurrido, &prestamo, interes);

	 return 0;
	
}
// Función para calcular los intereses anuales
void calcularIntereses(int tiempo, int tiempoTranscurrido, float* prestamo, float interes) {
    for (int i = tiempo; i <= tiempoTranscurrido; i++) {
        *prestamo += (*prestamo * interes); // Actualiza el prestamo con el interés
        printf("El interes de %d es de: $%.2f\n", i, *prestamo);
	 
	 }
}
