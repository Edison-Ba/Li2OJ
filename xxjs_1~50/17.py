import math as math
a = int(input())
b = int(input())
c = int(input())
p = float((a+b+c)/2.0)
ans = float(math.sqrt(p*(p-a)*(p-b)*(p-c)))
print("%.1f" % ans)
