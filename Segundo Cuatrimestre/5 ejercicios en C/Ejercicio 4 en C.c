//PROGRAMA 4
#include <stdio.h>
#include <math.h>

int main() {
    printf("Vamos a calcularel valor de la resistencia y el capacitor o inductor según corresponda\n");
    printf("Ingresá la parte real: ");
    
    float real, imaginaria, frecuencia;
    scanf("%f", &real);
    
    printf("Ingresá la parte imaginaria: ");
    scanf("%f", &imaginaria);
    
    printf("Ingresá la frecuencia de trabajo: ");
    scanf("%f", &frecuencia);
    
    float omega = (2 * M_PI) * frecuencia;
    
    if (imaginaria <= 0) {
        float capacitancia = -1 / (omega * imaginaria);
        if (capacitancia == 0) {
            printf("No hay capacitor\n");
        } else {
            printf("La capacitacia es %.2f\n", capacitancia);
        }
    } else {
        float inductancia = omega * imaginaria;
        if (inductancia == 0) {
            printf("No hay inductor\n");
        } else {
            printf("La inductancia es  %.2f\n", inductancia);
        }
    }
    
    printf("La resistencia es %.2f\n", real);
    
    return 0;
}
