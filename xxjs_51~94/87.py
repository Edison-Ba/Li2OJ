import sys

n = int(input())

h = input().split()

h.sort()
h.reverse()

for i in range(0, n):
    sys.stdout.write(str(h[i])+' ')
