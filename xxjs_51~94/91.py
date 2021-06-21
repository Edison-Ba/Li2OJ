import sys

a = []
k = input()
a = list(k)
# print(a)

# for i in (0,1):
#     s=tot*int(a[i])
#     tot+=1
su = int(a[0])
su += 2*int(a[2])
su += 3*int(a[3])
su += 4*int(a[4])
su += 5*int(a[6])
su += 6*int(a[7])
su += 7*int(a[8])
su += int(8*int(a[9])+9*int(a[10]))
# print(su)
ma = su % 11

if a[12] == 'X':
    mp = 10
else:
    mp = int(a[12])
if mp == ma:
    print('Right')
    
else:
    for i in range(0, 12):
        sys.stdout.write(a[i])
    if ma != 10:
        sys.stdout.write(str(ma))
    else:
        sys.stdout.write('X')
