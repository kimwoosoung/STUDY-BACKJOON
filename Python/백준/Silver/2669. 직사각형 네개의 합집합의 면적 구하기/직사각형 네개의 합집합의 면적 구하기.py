matrix = [[0] * 100 for _ in range(100)]
result = 0

for _ in range(4):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(y1, y2): 
        for j in range(x1, x2):
            matrix[i][j] = 1

for k in matrix:
    result += sum(k)
print(result)