//PROGRAMA 2
//Incluímos bibliotecas
#include <stdio.h>
#include <math.h>

//Declaramos variables
int main() {
    double modulo, angulo;
    double real, imag;

    // Solicitamos al usuario ingresar el módulo y el ángulo en grados
    printf("Ingresá el módulo del número complejo, por favor: ");
    scanf("%lf", &modulo);
    printf("Ingresá el ángulo del número complejo en grados, por favor: ");
    scanf("%lf", &angulo);

    // Convertimos el ángulo de grados a radianes
    angulo = angulo * M_PI / 180;

    // Calculamos la parte real e imaginaria del número complejo en forma rectangular
    real = modulo * cos(angulo);
    imag = modulo * sin(angulo);

    // Imprimimos el resultado en forma rectangular
    printf("Número complejo en forma rectangular: %.2lf + j%.2lf\n", real, imag);

    return 0;
}