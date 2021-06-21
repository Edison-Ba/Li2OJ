import math as math
import sys


def pd(a):
   
    for i in range(2, int(math.sqrt(a)+1)):
        if a % i == 0:
            return 0
    return 1


l, r = map(int, input().split())

for i in range(l, r+1):
    if pd(i):
        sys.stdout.write(str(i)+' ')
