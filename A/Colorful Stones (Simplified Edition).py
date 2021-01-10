stones = list(input())
inst = list(input())
moves = 0

for i in range(len(inst)):
    if stones[moves] == inst[i]:
        moves += 1
    else:
        moves = moves

print(moves + 1)
