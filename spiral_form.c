#include <stdio.h>
int main() {
    int r, c, i, row = 0, col = 0;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int last_row = r - 1, last_col = c - 1;
    while (row <= last_row && col <= last_col) {
        for (i = col; i <= last_col; i++) printf("%d ", a[row][i]);
        row++;
        for (i = row; i <= last_row; i++) printf("%d ", a[i][last_col]);
        last_col--;
        if (row <= last_row)
            for (i = last_col; i >= col; i--) printf("%d ", a[last_row][i]);
        last_row--;
        if (col <= last_col)
            for (i = last_row; i >= row; i--) printf("%d ", a[i][col]);
        col++;
    }
    return 0;
}
r, c = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(r)]
row, col, last_row, last_col = 0, 0, r-1, c-1

while row <= last_row and col <= last_col:
    for i in range(col, last_col+1): print(mat[row][i], end=" ")
    row += 1
    for i in range(row, last_row+1): print(mat[i][last_col], end=" ")
    last_col -= 1
    if row <= last_row:
        for i in range(last_col, col-1, -1): print(mat[last_row][i], end=" ")
        last_row -= 1
    if col <= last_col:
        for i in range(last_row, row-1, -1): print(mat[i][col], end=" ")
        col += 1
