n = list(map(int, input().split()))
x = max(n)

die_roll = ["1/6",
            "1/3",
            "1/2",
            "2/3",
            "5/6",
            "1/1"]

print(die_roll[6 - x])
