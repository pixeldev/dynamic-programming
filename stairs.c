//
// Created by Angel Miranda on 05/06/24.
//

#include "stairs.h"

long calculateWays(int n, int k) {
    memset(dp, 0, sizeof(dp));
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= k && j <= i; j++) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }

    return dp[n];
}

void printWays(int n, int k, int idx, int combination[STAIRS_MAX_N]) {
    if (n == 0) {
        for (int i = 0; i < idx; i++) {
            printf("%d ", combination[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= k; i++) {
        if (i <= n) {
            combination[idx] = i;
            printWays(n - i, k, idx + 1, combination);
        }
    }
}