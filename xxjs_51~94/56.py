import math as math
import sys

def pd(a):
    for i in range(2, int(math.sqrt(a)+1)):
        if a % i == 0:
            return 0
    return 1


a = []
n = int(input())

for i in range(2,n+1):
    if pd(i):
        a.append(i)

len=len(a)
# print(a)

ok=0
sys.stdout.write(str(n)+'=')

while n:
    for i in range(0,len):
        if n%a[i]==0:
            sys.stdout.write(str(a[i]))
            if n!=a[i]:
                sys.stdout.write('*')
            else:
                ok=1
            n=n/a[i]
            n=int(n)
            # print('')
            break
    if ok==1:
        break
