m, n = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
res = [0] * (m + n - 1)
for i in range(m):
    for j in range(n):
        res[i + j] += a[i] * b[j]
print("Product:", res)
