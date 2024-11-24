#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * Algoritmo que calcula el presupuesto anual en tres areas de un hospital */

// Prototipo de la función para calcular los presupuestos de las áreas
void calcularPresupuesto(int presupuesto, float* urgencias, float* pediatria, float* traumatologia);

int main(){
    int presupuesto;
    float urgencias = 0, pediatria = 0, traumatologia = 0; 

	 // Datos de entrada
    puts("Presupuesto anual:");
    scanf("%d", &presupuesto);

    // Calcular el presupuesto para cada área
    calcularPresupuesto(presupuesto, &urgencias, &pediatria, &traumatologia);

    // Mostrar los resultados
    printf("Presupuesto Urgencias: $%.2f\n", urgencias);
    printf("Presupuesto Pediatria: $%.2f\n", pediatria);

