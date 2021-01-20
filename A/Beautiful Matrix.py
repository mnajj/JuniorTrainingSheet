matrix = list()

for i in range(0, 5):
    x = input().split()
    matrix.append(x)

    for j in range(0, 5):
        if matrix[i][j] == "1":
            count = abs(i - 2) + abs(j - 2)
            
print(count)
