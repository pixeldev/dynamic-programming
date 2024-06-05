//
// Created by Angel Miranda on 05/06/24.
//

#include <printf.h>
#include "coins.h"

FlipResult *calculateFlips(int coins[MAX_N], int n, int m) {
    int flip[MAX_N + 1] = {0};

    int flipCount = 0, operations = 0;
    for (int i = 0; i < n; i++) {
        flipCount += flip[i];
        if ((coins[i] + flipCount) % 2 == 0) {
            operations++;
            flipCount++;
            if (i + m < n) {
                flip[i + m]--;
            }
        }
    }

    FlipResult *result = malloc(sizeof(FlipResult));
    result->operations = operations;
    result->flipCount = flipCount;

    return result;
}

void printFlipResult(FlipResult *result) {
    if (result->flipCount % 2 == 0) {
        printf("La menor cantidad de veces que necesitas realizar la operación es: %d.\n", result->operations);
    } else {
        puts("No es posible hacer que todas las monedas muestren sol.");
    }
}

void freeFlipResult(FlipResult *result) {
    free(result);
}