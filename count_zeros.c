#include <stdio.h>
int main() {
    int r, c, count = 0;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (mat[i][j] == 0)
                count++;
    printf("Total Zeros: %d\n", count);
    return 0;
}
