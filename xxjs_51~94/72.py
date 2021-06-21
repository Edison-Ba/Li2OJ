# 这是这个题库上第一道比较有意思的题
# 起码在代码上需要下一点功夫

k = int(input())
ok = 0
if k < 0:
    ok = 1
    k *= (-1)

a = [0]

while k:
    p = k % 10
    a.append(p)
    k /= 10
    k = int(k)

l = len(a)-1
ans = 0

for i in range(1, l+1):
    pp = 10**(l-i)*a[i]
    # print(pp)
    ans += (pp)

if ok == 1:
    print('-'+str(ans))
else:
    print(ans)
