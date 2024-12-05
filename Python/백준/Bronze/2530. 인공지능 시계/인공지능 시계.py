h, m, s = map(int, input().split())
d = int(input())
print((h+(m+(s+d)//60)//60)%24, (m+(s+d)//60)%60, (s+d)%60)
