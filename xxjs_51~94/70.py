import sys

a = []
i = 1
while i < 1000000000000:
    a.append(i)
    i *= 2

n = int(input())
lena = len(a)
# ans=frac(n)
# print(a)
ok = 0
for i in range(lena-1, -1, -1):
    if n >= a[i]:
        ok = 1
        n -= a[i]
        sys.stdout.write('1')
    else:
        if ok == 0:
            0
        else:
            sys.stdout.write('0')
