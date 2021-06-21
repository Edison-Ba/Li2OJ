import sys
import math as math


def jud(n):
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0:
            return 0
    return 1


a, b = map(int, input().split())

tot = 0
for i in range(a, b+1):
    if i == 1:
        continue
    if jud(i):
        sys.stdout.write(str(i)+' ')
        tot += 1

sys.stdout.write('\n')
print('Total: '+str(tot))
