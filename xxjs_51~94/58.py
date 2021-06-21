def frac(n):
    ans = 1
    for i in range(1, 1+n):
        ans *= i
    return ans


n = int(input())

print(frac(n))
