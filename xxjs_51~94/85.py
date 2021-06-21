n, a = map(int, input().split())

ans = 0
for i in range(1, n+1):
    k = int(input())
    if k == a:
        ans += 1

print(ans)
