n = int(input())
lista = []
count = 0
for i in range(n):
    count = 0
    a = input()
    lista = [int(x) for x in a]
    for zeros in lista:
        if zeros == 0:
            count += 1
    tot = len(lista)-count
    print(tot)
    for i in range(len(lista)):
        if lista[i] != 0:
            print(str(lista[i]) + '0'*(len(lista)-i-1), end = ' ')
    print('')

            
