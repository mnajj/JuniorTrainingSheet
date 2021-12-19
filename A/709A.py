n, b, d = map(int, input().split())
o = list(map(int, input().split()))
waste, times = 0, 0

for i in range(n):
    if o[i] <= b:
        waste += o[i]
        if waste > d:
            times += 1
            waste = 0

print(times)
