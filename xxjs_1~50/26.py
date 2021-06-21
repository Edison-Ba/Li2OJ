import math as math


def judge(i, j, k):
    a = []
    a.append(i)
    a.append(j)
    a.append(k)
    a.sort()
    if a[0]+a[1] <= a[2]:
        return 1
    else:
        return 0


a = int(input())
b = int(input())
c = int(input())
if judge(a, b, c):
    print('NO')
    exit()
p = float((a+b+c)/2.0)
ans = float(math.sqrt(p*(p-a)*(p-b)*(p-c)))
print("%.1f" % ans)
