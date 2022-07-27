str1 = input()

str2 = str1[0:len(str1):2]
lista = []

for i in str2:
    lista.append(int(i))

for i in range(0, len(lista)-1):
    for j in range(0, len(lista)-1):
        if lista[j] > lista[j+1]:
            aux = lista[j]
            lista[j] = lista[j+1]
            lista[j+1] = aux

for i in range(0, len(lista)):
    print(lista[i], end = '')
    if i != len(lista)-1:
        print("+", end = '')
    
    


        



    