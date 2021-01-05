name = input()
name = "a" + name
total = 0

for i in range(1, len(name)):
    d1 = abs(ord(name[i]) - ord(name[i-1]))
    d2 = 26 - d1

    if d1 < d2:
        total += d1
    else:
        total += d2


print(total)
