n = int(input())
s = input()
    
a, d = 0, 0
    
for i in range(n):
    if s[i] == "A":
        a += 1
    elif s[i] == "D":
    d += 1
    
if a > d:
    print("Anton")
elif d > a:
    print("Danik")
elif a == d:
    print("Friendship")
