n = int(input())
crimes = list(map(int, input().split()))
caps = 0
events = 0
    
for i in range(n):
    if crimes[i] >= 1:
        caps += crimes[i]
    elif crimes[i] == -1:
        if caps > 0:
            caps -= 1
        else:
            events += 1            

print(events)
