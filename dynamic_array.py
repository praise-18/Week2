n, q = map(int, input().split())
arr = [[] for _ in range(n)]
lastAnswer = 0
for _ in range(q):
    t, x, y = map(int, input().split())
    idx = (x ^ lastAnswer) % n
    if t == 1:
        arr[idx].append(y)
    else:
        lastAnswer = arr[idx][y % len(arr[idx])]
        print(lastAnswer)
