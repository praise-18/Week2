n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]
s = 0
for i in range(n):
    s += mat[i][i]
    if i != n - 1 - i:
        s += mat[i][n - 1 - i]
print("Sum:", s)
