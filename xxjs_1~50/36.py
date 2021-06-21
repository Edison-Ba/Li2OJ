n = int(input())
sum = 0
for i in range(1, n+1):
    a = int(input())
    sum += a

print(sum)
avr = float(sum/n*1.0)
print("%.1f" % avr)
