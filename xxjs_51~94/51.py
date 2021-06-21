# 这个题样例是错的 /喷血
# 害了一帮又一帮人

def frac(n):
    ans = 1
    for i in range(1, 1+n):
        ans *= i
    return ans


a = int(input())

anss = 0.0

for i in range(1, a+1):
    # print(frac(i))
    anss += float(1.0/float(frac(i)))

anss += 1.0

print("%.5f" % anss)
