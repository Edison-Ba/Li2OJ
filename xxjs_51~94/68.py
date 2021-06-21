# 这道题很迷
# 看起来很难，但是只要敢想，你就能搞出来
# 算是个很简单的递归了

def solve(n, A, B, C):  # n 指最左边柱子的盘子个数
    if n == 1:  # 最左边只有1个盘子，结束
        print(A, '->', C)
        return
    solve(n-1, A, C, B)  # 在 B 和 C 交换
    print(A, '->', C)
    solve(n-1, B, A, C)  # 在 A 和 B 交换


n = int(input())
solve(n, 'A', 'B', 'C')  # 开始搜
