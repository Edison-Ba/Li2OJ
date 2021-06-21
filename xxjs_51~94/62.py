import math as math
import sys


def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


m, n = map(int, input().split())

gc = gcd(m, n)

sys.stdout.write(str(int(m/gc))+' '+str(int(n/gc)))
