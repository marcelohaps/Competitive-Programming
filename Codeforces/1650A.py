lista = [60, 60, 60, 30, 30, 30, 30, 30]
g = False
n = int(input())
aux = 0
for i in range(n):
    string = input()
    carac = input()
    for k in range(0, len(string)):
        if string[k] == carac and k%2 ==0:
           g = True
           break
        else:
           g = False
    if g == True:
        print('YES')
    else:
        print('NO')
        