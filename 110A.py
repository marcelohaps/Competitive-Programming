n = int(input())
soma = 0
count = 0
n = str(n)

for i in range(0, len(n)):
    if n[i] == '4' or n[i] == '7':
        soma += 1

soma = str(soma)

for j in range(0, len(soma)):
    if soma[j] == '4' or soma[j] == '7':
        count += 1
    
if count == len(soma):
    print("YES")
else:
    print("NO")