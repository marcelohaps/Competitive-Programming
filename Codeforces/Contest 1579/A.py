n = int(input())
lista = []
for i in range(n):
    tam = int(input())
    for j in range(int(tam/2)):
        lista = input().split(" ")
        if len(lista) == tam:
            break

lista_int = []

for val in lista:
    lista_int.append(int(val))

comparação = []
comparação.append(lista_int[0])

for i in range(1, len(lista_int)):
    if lista_int[i] > comparação[0]:
        comparação.append(lista_int[i])
    else:
        comparação.insert(0, lista_int[i])
    

for i in comparação:
    print(i, end = ' ')
    