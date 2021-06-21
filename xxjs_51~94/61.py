import math as math


def judge(n):
    s = int(math.sqrt(n)+1)
    for i in range(2, n):
        if n % i == 0:
            return 0
    return 1


n = int(input())

if judge(n):
    print('yes')
else:
    print('no')
