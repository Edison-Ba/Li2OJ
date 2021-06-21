def frac(n):
    ans = 1
    for i in range(1, 1+n):
        ans *= i
    return ans


a = int(input())

anss = 0

for i in range(1, a+1):
    anss += frac(i)

print(anss)
