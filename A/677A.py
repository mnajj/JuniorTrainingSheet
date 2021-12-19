n, h = map(int, input().split())
a = list(map(int, input().split()))
 
counter = 0
 
for i in range(n):
    if a[i] <= h:
        counter += 1
    else:
        counter += 2
 
print(counter)  
