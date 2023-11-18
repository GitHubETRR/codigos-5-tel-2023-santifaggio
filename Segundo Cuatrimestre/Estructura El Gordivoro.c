#include <stdio.h>

// Estructura de EL GORDÍVORO
struct Monstruo {
    char nombre[50];
    char presentacion[100];
    char daño1[50];      // habiliades de daño que puede infligir 
    char daño2[50];
    char daño3[50];
    int vida;        // puntos de vida
    char defensa1[50];    // habilidades de defensa
    char defensa2[50];
    char defensa3[50]
};

int main() {
    // Declaro las características
    struct Monstruo miMonstruo = {
        "Gordivoro", // Nombre
        "El Gordivoro es un monstruo realmente obeso que se alimenta de personas.", // Presentación
        "Hedor insoportable",  // Daño 1
        "Fuerza sobrehumana",  // Daño 2
        "Oleada de grasa",  // Daño 3
        100, // Puntos de vida
        "Capa de Grasa Regenerativa",  // Defensa 1
        "Resistencia Inquebrantable",  // Defensa 2
        "Rebote Graso"  // Defensa 3
    };

    // Imprimo la información
    printf("Nombre: %s\n", miMonstruo.nombre);
    printf("Presentación: %s\n", miMonstruo.presentacion);
    printf("Habilidad 1: %s\n", miMonstruo.daño1);
    printf("Habilidad 2: %s\n", miMonstruo.daño2);
    printf("Habilidad 3: %s\n", miMonstruo.daño3);
    printf("Vida: %d\n", miMonstruo.vida);
    printf("Defensa 1: %s\n", miMonstruo.defensa1);
    printf("Defensa 2: %s\n", miMonstruo.defensa2);
    printf("Defensa 3: %s\n", miMonstruo.defensa3);
    
    return 0;