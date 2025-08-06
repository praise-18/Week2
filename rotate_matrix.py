n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]

# Transpose
for i in range(n):
    for j in range(i, n):
        mat[i][j], mat[j][i] = mat[j][i], mat[i][j]

# Reverse rows
for row in mat:
    row.reverse()

for row in mat:
    print(*row)
