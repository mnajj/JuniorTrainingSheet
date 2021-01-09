n = int(input())
    
total = 0
for i in range(0, n):
    x, y, z = map(int, input().split())
    if x + y + z >= 2:
    total += 1
    
print(total)
