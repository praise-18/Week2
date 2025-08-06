r, c = map(int, input().split())
mat = [list(map(int, input().split())) for _ in range(r)]
count = sum(row.count(0) for row in mat)
print("Total Zeros:", count)
