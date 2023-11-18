#include <stdio.h>
#include <math.h>

int main() {
    printf("en el siguiente programa calcularemos la impedancia en base a la tension y la corriente\n");
    printf("Indicá el módulo de la tensión: ");
    
    float modulo_tension, angulo_tension, modulo_corriente, angulo_corriente;
    scanf("%f", &modulo_tension);
    
    printf("Ahora ingrese el ángulo de la tensión: ");
    scanf("%f", &angulo_tension);
    
    printf("Indique el módulo de la corriente: ");
    scanf("%f", &modulo_corriente);
    
    printf("Ahora ingrese el ángulo de la corriente: ");
    scanf("%f", &angulo_corriente);
    
    float real_tension = modulo_tension * cos(angulo_tension);
    float imaginaria_tension = modulo_tension * sin(angulo_tension);
    float real_corriente = modulo_corriente * cos(angulo_corriente);
    float imaginaria_corriente = modulo_corriente * sin(angulo_corriente);
    float imaginaria = imaginaria_tension - imaginaria_corriente;
    float real = real_tension / real_corriente;
    
    printf("Su parte real es %.2f\n", real);
    printf("Su parte imaginaria es %.2f\n", imaginaria);
    
    printf("Ingrese la frecuencia de trabajo: ");
    float frecuencia;
    scanf("%f", &frecuencia);
    
    float omega = (2 * M_PI) * frecuencia;
    
    if (imaginaria <= 0) {
        float capacitancia = -1 / (omega * imaginaria);
        if (capacitancia == 0) {
            printf("No hay capacitancia\n");
        } else {
            printf("la capacitancia   es %.2f\n", capacitancia);
        }
    } else {
        float inductancia = omega * imaginaria;
        if (inductancia == 0) {
            printf("No hay inductancia\n");
        } else {
            printf("lLa inductancia es %.2f\n", inductancia);
        }
    }
    
    printf("El valor de la resistencia es %.2f\n", real);
    
    return 0;
}