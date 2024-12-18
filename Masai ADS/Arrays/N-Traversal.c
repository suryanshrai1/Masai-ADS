#include <stdio.h>

void nTraversal(int matrix[500][500], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", matrix[i][0]);
    }

    for (int i = 1; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    for (int i = n - 2; i >= 0; i--) {
        printf("%d ", matrix[i][n - 1]);
    }

    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int matrix[500][500];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        nTraversal(matrix, n);
    }

    return 0;
}