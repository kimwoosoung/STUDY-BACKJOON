a = []
for _ in range(7) :
    n = int(input())
    if n % 2 != 0 :	# 홀수 판별
        a.append(n)

if a == [] :	# 빈 리스트이면
    print(-1)	# -1 출력
else :
    print(sum(a))	# 홀수들의 합
    print(min(a))	# 가장 작은 홀수