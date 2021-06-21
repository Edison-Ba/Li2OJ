def frac(n):
    if n == 1:
        return 1
    else:
        return frac(n-1)+n


n = int(input())

ans = frac(n)

print(ans)
