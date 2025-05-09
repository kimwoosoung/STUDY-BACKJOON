import re
p = re.compile('D2|d2')
word = input()
m = p.search(word)

if m:
    print('D2')
else:
    print('unrated')