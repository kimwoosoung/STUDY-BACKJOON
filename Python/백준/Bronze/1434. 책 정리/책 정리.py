N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

i, j = 0, 0
while j < M:
    if A[i] >= B[j]:
        A[i] -= B[j]
        j += 1
    else:
        i += 1

print(sum(A))