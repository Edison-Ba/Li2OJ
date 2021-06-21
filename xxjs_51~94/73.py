
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


x, m = map(int, input().split())
ans = gcd(x, m)

print(ans)
