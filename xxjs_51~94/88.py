import sys
import math as math


def jud(n):
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0:
            return 0
    return 1


n = int(input())

h = input().split()


h.sort()
h.sort() # 这个应该能删去
# print(h)

for i in range(0, n):
    if jud(int(h[i])) == 0 or int(h[i]) == 1:
        continue
    sys.stdout.write(str(h[i])+' ')
