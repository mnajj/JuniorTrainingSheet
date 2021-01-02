n = int(input())
stones = list(input())
num = 0

for i in range(1, n):
    if stones[i-1] == stones[i]:
        num += 1

print(num)  
