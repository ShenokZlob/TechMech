n, m = int(input()), int(input())

def foo(i, j):
    if 1 <= i <= n and 1 <= j <= m:
        if i == 1 and j == 1: return 1
        return foo(i-2, j+1) + foo(i-2, j-1) + foo(i-1, j-2) + foo(i+1, j-2)
    return 0

print(foo(n, m))

#64