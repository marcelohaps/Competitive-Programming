a, b = input().split()
soma = 0
a = int(a)
b = int(b)

while True:
    a *= 3
    b *= 2
    soma += 1
    if a > b:
        break

print(soma)