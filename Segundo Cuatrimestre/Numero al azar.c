#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero_al_azar(int linf, int lsup);
int main()
{
    // Inicializamos una "semilla" para generar números aleatorios
    srand(time(NULL));
    int numero = numero_al_azar (1, 5);
    printf ("%d", numero );
}

int numero_al_azar(int linf, int lsup)
{
    return ((rand() % lsup) + linf);
}
