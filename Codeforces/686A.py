n, x = input().split()
n = int(n)
x = int(x)
qtd = x
child = 0
for i in range(n):
    op, d = input().split()
    d = int(d)
    if op == '+':
        qtd += d
    elif op == '-' and (qtd - d) < 0:
        child += 1
        continue
    elif op == '-' and (qtd - d) >= 0:
        qtd -= d

print(qtd, child)