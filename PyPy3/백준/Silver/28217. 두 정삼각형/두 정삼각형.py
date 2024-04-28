n = int(input())
main = []
arr = []
ans = []
tri = []
tri2 = []
for i in range(n * 2):
	a = list(map(int,input().split()))
	if i < n:
		tri.append(a)
	else:
		tri2.append(a)
def turn(tria):
    main = []
    for i in range(n):
        test = []
        for j in range(i,n):
            test.insert(0,tria[j][i])
        main.append(test)
    an = []
    p = []
    for l in range(n):
        p.append([i for i in range(l+1)])
    idx = 0
    for i in range(n):
        x = i
        y = 0
        idy = 0
        for j in range(i,n):
            p[x][y] = main[idx][idy]
            idy += 1
            x += 1
            y += 1
        idx += 1
    return p
before = tri
for i in range(3):
    before = turn(before)
    ans.append(before)

main = tri
#좌우 대칭
for i in range(n):
    arr = main.pop(i)
    arr.reverse()
    main.insert(i,arr)
ans.append(main)
before = main
for i in range(3):
    before = turn(before)
    ans.append(before)
mi = float("inf")
for l in range(len(ans)):
    cnt = 0
    for i in range(n):
        for j in range(i+1):
            if tri2[i][j] != ans[l][i][j]:
                cnt += 1
    if cnt < mi:
        mi = cnt
print(mi)