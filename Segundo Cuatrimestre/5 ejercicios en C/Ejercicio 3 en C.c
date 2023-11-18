//PROGRAMA 3
//Incluímos bibliotecas 
#include <stdio.h>
#include <math.h>

//Declaramos varaables
int main() {
    double real1, imag1, real2, imag2;
    double resultado_real, resultado_imag, resultado_modulo, resultado_angulo;
    char forma;

    // Solicitamos al usuario que ingrese la parte real e imaginaria del primer número complejo
    printf("Ingresá la parte real del primer número complejo: ");
    scanf("%lf", &real1);
    printf("Ingresá la parte imaginaria del primer número complejo: ");
    scanf("%lf", &imag1);

    // Solicitamos al usuario que ingrese la parte real e imaginaria del segundo número complejo
    printf("Ingresá la parte real del segundo número complejo: ");
    scanf("%lf", &real2);
    printf("Ingresá la parte imaginaria del segundo número complejo: ");
    scanf("%lf", &imag2);

    // Sumamos los números complejos en forma rectangular
    resultado_real = real1 + real2;
    resultado_imag = imag1 + imag2;

    // Solicitamos al usuario que nos diga el formato de salida que quiere
    printf("¿Querés ver el resultado en forma polar (P) o rectangular (R)? ");
    scanf(" %c", &forma);  //Uso %c con un espacio antes para que el programa evite leer los espacios o tabs que haya presionado el usuario antes de escribir su respuesta 

    // Calculamos el módulo y el ángulo del resultado en formato polar
    resultado_modulo = sqrt(resultado_real * resultado_real + resultado_imag * resultado_imag);
    resultado_angulo = atan2(resultado_imag, resultado_real);

    // Mostramos el resultado en la forma elegida
    if (forma == 'P' || forma == 'p') {
        // Forma polar
        printf("Resultado en forma polar: Módulo = %.2lf, Ángulo = %.2lf radianes\n", resultado_modulo, resultado_angulo);
    } else if (forma == 'R' || forma == 'r') {
        // Forma rectangular
        printf("Resultado en forma rectangular: %.2lf + j%.2lf\n", resultado_real, resultado_imag);
    } else {
    printf("fFormato no válido. Por favor, ingresá P o R");
}

return 0;
}
