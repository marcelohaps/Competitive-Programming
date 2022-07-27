n = int(input())

for i in range(n):
    strr = input()
    g = len(strr)-1
    if len(strr) > 10:
        print('{}{}{}'.format(strr[0], len(strr)-2, strr[g]))
    else:
        print(strr)
    
