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
