n = int(input())
p1 = list(map(int, input().split()))
p2 = list(map(int, input().split()))
print("Sum:", [p1[i] + p2[i] for i in range(n)])
