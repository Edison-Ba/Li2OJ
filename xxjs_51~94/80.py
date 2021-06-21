import math as math


def jud(n):
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0:
            return 0
    return 1


a = [0]

maxn = 0
l = 0
r = 0

for i in range(1, 12000+1):
    if i == 1:
        continue
    if jud(i):
        a.append(int(i))

ok = 0

n = int(input())

for i in range(2, 10001):
    if a[i] > n:
        break
    if a[i]-a[i-1] == 2:
        ok = 1
        print(str(a[i-1])+' '+str(a[i]))

if ok == 0:
    print('empty')
