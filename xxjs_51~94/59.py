def frac(n):
    k = 1
    for i in range(1, n+1):
        k *= i
    return k


n = int(input())
ans = 0
for i in range(1, n+1):
    ans += frac(i)

print(ans)
