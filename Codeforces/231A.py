n = int(input())
soma = 0
for i in range(n):
    a, b, c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    if (a == 1 and b == 1) or (b == 1 and c == 1) or (a == 1 and c == 1) or (a == 1 and b == 1 and c == 1):
        soma += 1

print(soma)
    
