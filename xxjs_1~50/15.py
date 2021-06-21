k = int(input())

gewei = int(k % 10)

k = int(k/10)

shiwei = k % 10

k = int(k/10)

ans = gewei*100+shiwei*10+int(k)

print(ans)
