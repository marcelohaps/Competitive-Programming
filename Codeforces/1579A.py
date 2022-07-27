n = int(input())
contador_B = 0
for i in range(0, n):
    contador_B = 0
    string = input()
    tamanho = len(string)
    if len(string)%2 != 0:
        print('NO')
        continue
    else:
        for letra in string:
            if letra == 'B':
                contador_B += 1
    if contador_B == len(string)/2:
        print('YES')
    else:
        print('NO')