n = int(input())
lst = list(map(int, input().split()))
lst = sorted(lst)
s = " ".join(map(str,lst))

print(s)
