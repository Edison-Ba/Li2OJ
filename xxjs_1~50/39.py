n=int(input())

ans=0.0

for i in range(1,n+1):
    ans+=float(1.0/i)

print("%.4f" % ans)
