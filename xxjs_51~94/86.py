import sys

n = int(input())

h = input().split()

# print(h)
h.sort()

for i in range(0, n):
    sys.stdout.write(str(h[i])+' ')
