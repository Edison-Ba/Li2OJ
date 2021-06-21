def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


m, n = map(int, input().split())

ans = gcd(m, n)

print(int(m*n/ans))
