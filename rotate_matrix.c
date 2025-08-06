#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int tmp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = tmp;
        }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
            int tmp = mat[i][j];
            mat[i][j] = mat[i][n-1-j];
            mat[i][n-1-j] = tmp;
        }
    }

    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
    return 0;
}
