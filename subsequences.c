//
// Created by Angel Miranda on 05/06/24.
//

#include "subsequences.h"

void printLCS(const char* X, const char* Y, int m, int n, int dp[m+1][n+1]) {
    int index = dp[m][n];
    char lcs[index+1];
    lcs[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs[--index] = X[i-1];
            i--;
            j--;
        } else if (dp[i-1][j] > dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("La subsecuencia común más larga es: %s\n", lcs);
}

int LCS(char* X, char* Y, int m, int n) {
    int dp[m+1][n+1];
    int i, j;

    for (i=0; i<=m; i++) {
        for (j=0; j<=n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (X[i-1] == Y[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
            }
        }
    }

    printLCS(X, Y, m, n, dp);

    return dp[m][n];
}