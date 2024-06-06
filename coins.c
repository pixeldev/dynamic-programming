//
// Created by Angel Miranda on 05/06/24.
//

#include <printf.h>
#include "coins.h"

void minCoins(int M[], int n, int X) {
    int dp[X+1], coins[X+1];

    dp[0] = 0;
    for (int i = 1; i <= X; i++) {
        dp[i] = INT_MAX;
        coins[i] = -1;
    }

    for (int i = 1; i <= X; i++) {
        for (int j = 0; j < n; j++) {
            if (M[j] <= i && dp[i - M[j]] + 1 < dp[i]) {
                dp[i] = dp[i - M[j]] + 1;
                coins[i] = j;
            }
        }
    }

    if (coins[X] == -1) {
        printf("No es posible dar el cambio.\n");
        return;
    }

    printf("Monedas mínimas para dar el cambio: %d\n", dp[X]);
    printf("Monedas usadas para dar el cambio: ");
    while (X > 0) {
        int j = coins[X];
        printf("%d ", M[j]);
        X = X - M[j];
    }
    printf("\n");
}