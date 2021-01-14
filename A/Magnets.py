n = int(input())
c = 1
prev = int(input())

for i in range(1, n):
    s = int(input())
if prev != s:
    c += 1
    prev = s

print(c)  
