import math as math


def frac(a, b, c):
    p = float((a+b+c)/2)
    s = float(math.sqrt(p*(p-a)*(p-b)*(p-c)))
    return s


a = input().split()

s1 = frac(int(a[0]), int(a[4]), int(a[5]))
s2 = frac(int(a[1]), int(a[5]), int(a[6]))
s3 = frac(int(a[2]), int(a[3]), int(a[6]))

ans = s1+s2+s3

print("%.2f" % ans)
