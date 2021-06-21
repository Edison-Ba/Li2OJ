a=[0,1,1]

for i in range(3,101):
    k=a[i-1]+a[i-2]
    a.append(k)

n=int(input())
print(a[n])
