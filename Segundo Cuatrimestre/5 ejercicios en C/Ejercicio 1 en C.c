//PROGRAMA 1
//Incluímos bibliotecas
#include <stdio.h>
#include <math.h>

//Declaramos variables
int main() {
    double real, imag;
    double modulo, angulo;

    // Solicitamos al usuario que ingrese la parte real e imaginaria
    printf("Ingresa la parte real del número complejo: ");
    scanf("%lf", &real);
    printf("Ingresa la parte imaginaria del número complejo: ");
    scanf("%lf", &imag);

    // Calculamos el módulodel número complejo
    modulo = sqrt(real * real + imag * imag);

    // Calculamos el ángulo del número complejo en radianes (para esto utilizamos atan2)
    angulo = atan2(imag, real);

    // Imprimimos el resultado
    printf("Módulo del número complejo: %.2lf\n", modulo);
    printf("Ángulo del número complejo en radianes: %.2lf\n", angulo);

    return 0;
}