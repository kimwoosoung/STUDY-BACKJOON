result = 0
max_people = 0
for _ in range(4) :
    d, u = map(int, input().split())
    tmp = result - d + u
    max_people = max(max_people, tmp)
    result = tmp

print(max_people)