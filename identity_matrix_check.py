n = int(input())
mat = [list(map(int, input().split())) for _ in range(n)]
identity = all((mat[i][j] == 1 if i == j else mat[i][j] == 0) for i in range(n) for j in range(n))
print("Identity Matrix" if identity else "Not Identity")
