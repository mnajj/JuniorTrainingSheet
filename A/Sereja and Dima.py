n = int(input())
cards = input().split()
cards = [int(i) for i in cards]

out = [0, 0]
p = 0

for i in range(n):
    if cards[0] > cards[-1]:
        out[p] += cards[0]
        cards.remove(cards[0])
    else:
        out[p] += cards[-1]
        cards.remove(cards[-1])
    p ^= 1

print(out[0], out[1])     
