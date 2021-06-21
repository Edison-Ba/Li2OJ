n = int(input())

f = [0, 1, 1]

for i in range(3, n+1):
    k = f[i-1]+f[i-2]
    f.append(k)

print('input,n:')
print('fib(n)='+str(f[n]))
