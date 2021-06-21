n = int(input())

ans = 0
tt = 0
res = 0
while 1:
    tt += 1
    ans += (tt*tt)
    res += tt
    if res > n:
        ans -= (res-n)*tt
        res = n
    if res == n:
        break
print(ans)
