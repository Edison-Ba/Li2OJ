sx = ['0', 'shu', 'niu', 'hu', 'tu', 'long',
      'she', 'ma', 'yang', 'hou', 'ji', 'gou', 'zhu']


def pri(p):
    print('Your shengxiao is: '+sx[p])


n = int(input())

m = 1
t = 1900

while 1:
    m += 1
    t += 1
    if m == 13:
        m = 1
    if t == n:
        pri(m)
        break
