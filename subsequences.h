//
// Created by Angel Miranda on 05/06/24.
//

#ifndef DYNAMIC_PROGRAMMING_SUBSEQUENCES_H
#define DYNAMIC_PROGRAMMING_SUBSEQUENCES_H

#include <stdio.h>
#include <string.h>

/**
 * Imprime la subsecuencia común más larga entre dos cadenas.
 *
 * @param X
 * @param Y
 * @param m
 * @param n
 * @param dp
 */
void printLCS(const char* X, const char* Y, int m, int n, int dp[m+1][n+1]);

/**
 * Encuentra la longitud de la subsecuencia común más larga entre dos cadenas.
 *
 * @param X El primer string.
 * @param Y El segundo string.
 * @param m La longitud del primer string.
 * @param n La longitud del segundo string.
 * @return La longitud de la subsecuencia común más larga.
 */
int LCS(char* X, char* Y, int m, int n);

#endif //DYNAMIC_PROGRAMMING_SUBSEQUENCES_H
