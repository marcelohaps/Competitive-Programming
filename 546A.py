k, n, w = input().split()
soma = 0
k = int(k)                                #k  n   w
n = int(n)                               # 3  17  4
w = int(w)
somatorio = 0
#k = custo da banana                      4 bananas. 3 6 9 12
#n = valor em dinheiro q ele tem
#w = numero de bananas

for i in range(0, w):
    soma = soma + k
    somatorio += soma
                                          #
emprestimo = somatorio - n

if n >= somatorio:
    print("0")
else:
    print(emprestimo)