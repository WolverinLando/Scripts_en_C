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

