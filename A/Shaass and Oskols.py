n = int(input())
a = list(map(int, input().split()))
m = int(input())

for i in range(m):
    x, y = map(int, input().split())
    x -= 1

    if x != 0:
        a[x-1] += y - 1
    
    if x != n-1:
        a[x + 1] += a[x] - y
    
    a[x] = 0

for i in a:
    print(i)
