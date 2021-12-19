s = input()

upper, lower = 0, 0

for i in s:
    if i.isupper():
        upper += 1
    else:
        lower += 1

if lower > upper:
    print(s.lower())
elif upper > lower:
    print(s.upper())
else:
    print(s.lower())
