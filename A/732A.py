k, r = map(int, input().split())
i, ans = 0, int()

while True:
    if i != 0 and (10 * i) % k == 0:
        ans = (10 * i) // k
        break
    if (10 * i + r) % k == 0:
        ans = (10 * i + r) // k
        break
    i += 1

print(ans)
