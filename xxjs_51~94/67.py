def frac(n):
    if n == 1:
        return 1
    if n == 2:
        return 1
    else:
        return frac(n-1)+frac(n-2)


n = int(input())

ans = frac(n)

print(ans)
