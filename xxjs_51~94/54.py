import sys

n=int(input())

for i in range(1,n+1):
    
    for j in range(1,i+1):
        sys.stdout.write("* ")
    print('')