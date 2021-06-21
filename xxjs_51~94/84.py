lucky = [100, 200, 150, 140, 129, 134, 167, 198, 200, 111]

n = int(input())
n += 30

ans = 0
for i in lucky:
    if n >= i:
        ans += 1

print(ans)
