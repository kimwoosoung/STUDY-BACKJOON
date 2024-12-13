a = (int(input())//100)*100
b = int(input())

for i in range(100):
    if a%b == 0:
        a = str(a)
        break
    a += 1
print(a[-2:])