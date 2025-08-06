r, c = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(r)]
zeros = sum(row.count(0) for row in mat)
print("Sparse" if zeros > (r * c) // 2 else "Not Sparse")
