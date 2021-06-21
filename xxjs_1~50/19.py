r = float(input())
r_2 = float(r*r)

h = float(input())
ans = 3.14 * r_2 * 2
ans = ans + h * 3.14 * r * 2
ans = round(ans, 2)

print(ans)
