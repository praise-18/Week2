#include <stdio.h>
int main() {
    int r, c, zero = 0;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0)
                zero++;
        }
    int total = r * c;
    printf(zero > total / 2 ? "Sparse\n" : "Not Sparse\n");
    return 0;
}
