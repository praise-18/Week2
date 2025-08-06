#include <stdio.h>
int main() {
    int n, is_identity = 1;
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                is_identity = 0;
        }
    printf(is_identity ? "Identity Matrix\n" : "Not Identity\n");
    return 0;
}
