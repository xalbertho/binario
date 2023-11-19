#include <stdio.h>
#include <math.h>

// Definir la constante de gravitación universal
#define G 6.67430e-11

// Declarar una función para calcular la fuerza de gravedad
double calcularFuerzaGravitatoria(double m1, double m2, double r) {
    return (G * m1 * m2) / (r * r);
}

int main() {
    double masa1, masa2, distancia;
    double fuerza;

    // Pedir al usuario las masas y la distancia
    printf("Introduce la masa del primer objeto (kg): ");
    scanf("%lf", &masa1);

    printf("Introduce la masa del segundo objeto (kg): ");
    scanf("%lf", &masa2);

    printf("Introduce la distancia entre los objetos (m): ");
    scanf("%lf", &distancia);

    // Calcular la fuerza de gravedad
    fuerza = calcularFuerzaGravitatoria(masa1, masa2, distancia);

    // Mostrar el resultado
    printf("La fuerza de gravedad entre los objetos es: %lf N\n", fuerza);

    return 0;
}
