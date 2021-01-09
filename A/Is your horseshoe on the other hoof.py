s = list(map(int, input().split()))
unique = list()

for i in s:
    if i not in unique:
        unique.append(i)

print(len(s) - len(unique))
