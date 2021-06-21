a = int(input())

ok = 0

if a % 4 == 0:
    if a % 400 == 0:
        ok = 1
    elif a % 100 == 0:
        ok = 0
    else:
        ok = 1
else:
    ok = 0

if ok == 1:
    print('yes')
else:
    print('no')
