//
// Created by Angel Miranda on 05/06/24.
//

#ifndef DYNAMIC_PROGRAMMING_STAIRS_H
#define DYNAMIC_PROGRAMMING_STAIRS_H

#include <stdio.h>
#include <string.h>

/**
 * Cantidades máximas de escalones y combinaciones.
 */
#define MAX_N 10000
#define MOD 1000000007

/**
 * Arreglo de memorización.
 */
long long dp[MAX_N + 1];

/**
 * Calcula la cantidad de formas de subir una escalera de n escalones
 *
 * @param n La cantidad de escalones
 * @param k La cantidad de escalones que se pueden subir en un solo paso
 * @return La cantidad de formas de subir la escalera
 */
long calculateWays(int n, int k);

/**
 * Imprime todas las formas de subir una escalera de n escalones
 *
 * @param n             La cantidad de escalones
 * @param k             La cantidad de escalones que se pueden subir en un solo paso
 * @param idx           El índice de la combinación
 * @param combination   La combinación actual
 */
void printWays(int n, int k, int idx, int combination[MAX_N]);

#endif //DYNAMIC_PROGRAMMING_STAIRS_H
