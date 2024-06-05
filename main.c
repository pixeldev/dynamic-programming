#include <stdio.h>
#include "coins.h"
#include "stairs.h"
#include "subsequences.h"

int main(void) {
    puts("Bienvenido al programa de algoritmos resueltos con Programación Dinámica.");
    puts("Escoge una opción:");
    puts("1. Subsecuencia común más larga.");
    puts("2. Rana saltarina.");
    puts("3. Voltear monedas.");
    printf(">> ");

    int option;
    scanf("%d", &option);

    switch (option) {
        case 1: {
            char s1[256], s2[256];
            printf("Introduce la primera cadena:\n>> ");
            scanf("%s", s1);
            printf("Introduce la segunda cadena:\n>> ");
            scanf("%s", s2);

            int m = strlen(s1), n = strlen(s2);
            int lcs = LCS(s1, s2, m, n);
            printf("La longitud de la subsecuencia común más larga es: %d\n", lcs);
            break;
        }
        case 2: {
            int n;
            printf("Introduce el número de escalones:\n>> ");
            scanf("%d", &n);
            int k;
            printf("Introduce el número de escalones que puedes subir a la vez:\n>> ");
            scanf("%d", &k);
            long ways = calculateWays(n, k);
            printf("El número de formas de subir los escalones es: %ld\n", ways);
            int printCombinations;
            printf("¿Deseas imprimir las combinaciones? (1 = Sí, 0 = No)\nNOTA: Tenga en cuenta que se hace con una estrategia de backtracking y es muy exhaustivo.\n>> ");
            scanf("%d", &printCombinations);
            if (printCombinations) {
                int combination[MAX_N];
                printWays(n, k, 0, combination);
            }
            break;
        }
        case 3: {
            int n;
            printf("Introduce el número de monedas:\n>> ");
            scanf("%d", &n);
            int m;
            printf("Introduce el número de monedas a voltear:\n>> ");
            scanf("%d", &m);
            int coins[n];
            printf("Introduce las monedas:\n");
            for (int i = 0; i < n; i++) {
                printf("Moneda %d >> ", i + 1);
                scanf("%d", &coins[i]);
            }
            FlipResult *result = calculateFlips(coins, n, m);
            printFlipResult(result);
            freeFlipResult(result);
            break;
        }
        default:
            puts("Opción no válida.");
            break;
    }
    return 0;
}
