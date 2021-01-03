a = list(map(int, input().split()))
n = list(map(int, input()))
sum = 0

for i in range(len(n)):
    if n[i] == 1:
        sum += a[0]
    elif n[i] == 2:
        sum += a[1]
    elif n[i] == 3:
        sum += a[2]         
    else:
        sum += a[3]

print(sum)
