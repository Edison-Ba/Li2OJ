import sys

d = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B',
     'C', 'D', 'E', 'F']


def change(n, k):
    r = n % k
    n = int(n/k)
    if n != 0:
        change(n, k)
    sys.stdout.write(d[r])


x, m = map(int, input().split())
change(x, m)

print('')
