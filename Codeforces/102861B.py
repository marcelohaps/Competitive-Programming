n = int(input())
aux = 0
lista = []
boll = True
for i in range(n):
    d, l, r, c = input().split()
    d = int(d)
    l = int(l)
    r = int(r)
    c = int(c)
    
    
    
    if d == 0:
        for k in range(c, c+l):
            lista.append([r, k])
    else:
        for j in range(r, r+l):
            lista.append([j, c])




for i in lista:
    contador = lista.count(i)
    if contador == 1:
        aux += 1

for i, v in lista:
    if i < 1 or i > 10 or v < 1 or v > 10:
        boll = False



if boll == False or aux != len(lista):
    print('N')
else:
    print('Y')
        

