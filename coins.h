//
// Created by Angel Miranda on 05/06/24.
//

#ifndef DYNAMIC_PROGRAMMING_COINS_H
#define DYNAMIC_PROGRAMMING_COINS_H

#include <stdlib.h>

/**
 * Cantidad máxima de monedas.
 */
#define MAX_N 1000

/**
 * Estructura que contiene la cantidad de operaciones y la cantidad de veces que se ha volteado una moneda.
 */
typedef struct {
    int operations;
    int flipCount;
} FlipResult;

/**
 * Calcula la cantidad de veces que se necesita voltear una moneda para que todas muestren sol.
 *
 * @param coins Arreglo de monedas.
 * @param n     Cantidad de monedas.
 * @param m     Cantidad de monedas a voltear.
 * @return Estructura con la cantidad de operaciones y la cantidad de veces que se ha volteado una moneda.
 */
FlipResult *calculateFlips(int coins[MAX_N], int n, int m);

/**
 * Imprime el resultado de la cantidad de operaciones y la cantidad de veces que se ha volteado una moneda.
 *
 * @param result Estructura con la cantidad de operaciones y la cantidad de veces que se ha volteado una moneda.
 */
void printFlipResult(FlipResult *result);

/**
 * Libera la memoria de la estructura que contiene la cantidad de operaciones y la cantidad de veces que se ha volteado una moneda.
 *
 * @param result Estructura con la cantidad de operaciones y la cantidad de veces que se ha volteado una moneda.
 */
void freeFlipResult(FlipResult *result);

#endif //DYNAMIC_PROGRAMMING_COINS_H
