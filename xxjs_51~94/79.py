import sys
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

n = int(input())

for i in range(1, 10001):
    if a[i] > n:
        break
    for j in range(i+1, 10001):
        if a[j] > n:
            break
        if a[i]+a[j] == n:
            k = a[i]*a[j]
            if k > maxn:
                maxn = k
                l = a[i]
                r = a[j]

sys.stdout.write(str(l)+' * '+str(r)+' = '+str(maxn))
