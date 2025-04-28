n1, n2 = map(int, input().split())
ant1 = list(input())
ant2 = list(input())
t = int(input())

ants = ant1[::-1] + ant2
group = [1] * n1 + [2] * n2

for _ in range(t):
    i = 0
    while i < len(ants) - 1:
        if group[i] == 1 and group[i+1] == 2:
            ants[i], ants[i+1] = ants[i+1], ants[i]
            group[i], group[i+1] = group[i+1], group[i]
            i += 2
        else:
            i += 1

print(''.join(ants))
