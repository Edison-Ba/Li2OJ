import sys


def jud(n):
    if (n % 4 == 0) and (n % 100 != 0) or (n % 400 == 0):
        return 1
    else:
        return 0


a, b = map(int, input().split())

for i in range(a, b+1):
    if jud(i):
        sys.stdout.write(str(i)+' ')
