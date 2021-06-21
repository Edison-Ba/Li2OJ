import math as math

n = int(input())
a1, a2 = map(int, input().split())
b1, b2 = map(int, input().split())
c1, c2 = map(int, input().split())

as1 = math.ceil(n/a1)
bs1 = math.ceil(n/b1)
cs1 = math.ceil(n/c1)

a = as1*a2
b = bs1*b2
c = cs1*c2
maxn = a

if b < maxn:
    maxn = b
if c < maxn:
    maxn = c
print(maxn)
