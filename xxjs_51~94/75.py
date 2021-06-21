def fei(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return fei(n-1)+fei(n-2)


a = int(input())

ans = fei(a)

print(ans)
