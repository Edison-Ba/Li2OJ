a, b = map(int, input().split())


def gcd(m, n):
    if n == 0:
        return m
    else:
        return gcd(n, m % n)


ans = gcd(a, b)

print(ans)
