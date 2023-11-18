#include <stdio.h>

int main() {
    int simple1 = 0, doble1 = 0, triple1 = 0;
    int simple2 = 0, doble2 = 0, triple2 = 0;
    float porcentaje_Simple_1 = 0, porcentaje_Simple_2 = 0;
    float porcentaje_Doble_1 = 0, porcentaje_Doble_2 = 0;
    float porcentaje_Triple_1 = 0, porcentaje_Triple_2 = 0;
    int Valorequipo1 = 0, Valorequipo2 = 0;
    int Equipos, Puntos1, Puntos2, n;

    do {
        do {
            printf("Escribe el número de equipo: ");
            scanf("%d", &Equipos);
        } while (Equipos != 0 && Equipos != 1 && Equipos != 2);

        if (Equipos == 1) {
            do {
                printf("Escribe la cantidad de puntos metidos: ");
                scanf("%d", &Puntos1);
            } while (Puntos1 < 0 || Puntos1 > 3);

            switch (Puntos1) {
                case 1:
                    simple1++;
                    break;
                case 2:
                    doble1++;
                    break;
                default:
                    triple1++;
                    break;
            }

            Valorequipo1 += Puntos1;
        } else {
            if (Equipos == 2) {
                do {
                    printf("Escribe la cantidad de puntos metidos: ");
                    scanf("%d", &Puntos2);
                } while (Puntos2 < 0 || Puntos2 > 3);

                switch (Puntos2) {
                    case 1:
                        simple2++;
                        break;
                    case 2:
                        doble2++;
                        break;
                    default:
                        triple2++;
                        break;
                }

                Valorequipo2 += Puntos2;
            }
        }

        if (Valorequipo1 > Valorequipo2) {
            n = Valorequipo1 - Valorequipo2;
            printf("El equipo 1 va ganando por %d puntos\n", n);
        } else if (Valorequipo2 > Valorequipo1) {
            n = Valorequipo2 - Valorequipo1;
            printf("El equipo 2 va ganando por %d puntos\n", n);
        } else {
            printf("Los equipos están empatados en %d puntos\n", Valorequipo1);
        }

    } while (Equipos != 0);

    printf("\n");

    if (Valorequipo1 == Valorequipo2) {
        printf("El resultado fue un empate\n");
    } else {
        if (Valorequipo1 > Valorequipo2) {
            printf("Equipo 1 gana\n");
        } else {
            printf("Equipo 2 gana\n");
        }
    }

    if (Valorequipo1 != 0) {
        porcentaje_Doble_1 = ((float)doble1 * 2 * 100) / Valorequipo1;
        porcentaje_Simple_1 = ((float)simple1 * 100) / Valorequipo1;
        porcentaje_Triple_1 = ((float)triple1 * 3 * 100) / Valorequipo1;
    }

    if (Valorequipo2 != 0) {
        porcentaje_Simple_2 = ((float)simple2 * 100) / Valorequipo2;
        porcentaje_Doble_2 = ((float)doble2 * 2 * 100) / Valorequipo2;
        porcentaje_Triple_2 = ((float)triple2 * 3 * 100) / Valorequipo2;
    }

    printf("\nDatos del equipo 1:\n");
    printf("La cantidad de simples fue de %d\n", simple1);
    printf("La cantidad de dobles fue de %d\n", doble1);
    printf("La cantidad de triples fue de %d\n", triple1);
    printf("El porcentaje de simples es de %.2f%%\n", porcentaje_Simple_1);
    printf("El porcentaje de dobles es de %.2f%%\n", porcentaje_Doble_1);
    printf("El porcentaje de triples es de %.2f%%\n", porcentaje_Triple_1);

    printf("\nDatos del equipo 2:\n");
    printf("La cantidad de simples fue de %d\n", simple2);
    printf("La cantidad de dobles fue de %d\n", doble2);
    printf("La cantidad de triples fue de %d\n", triple2);
    printf("El porcentaje de simples es de %.2f%%\n", porcentaje_Simple_2);
    printf("El porcentaje de dobles es de %.2f%%\n", porcentaje_Doble_2);
    printf("El porcentaje de triples es de %.2f%%\n", porcentaje_Triple_2);

    printf("\nEl valor total del equipo 1 es de: %d puntos\n", Valorequipo1);
    printf("El valor total del equipo 2 es de: %d puntos\n", Valorequipo2);

    return 0;
}
