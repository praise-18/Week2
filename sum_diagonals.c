#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
        if (i != n - 1 - i)
            sum += mat[i][n - 1 - i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}
