n = int(input())
teams = list()
total = 0

for i in range(n):
    h, a = (map(int, input().split()))
    teams.append((h, a))

for i in range(len(teams)):
    for j in range(len(teams)):
        
        if i == j:
            continue

        if teams[i][0] == teams[j][1]:
            total += 1

print(total)
