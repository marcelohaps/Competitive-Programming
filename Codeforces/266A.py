n = int(input())

stones = input()
soma = 0
stones = list(stones)



for i in range(0, len(stones)-1):
    if stones[i] == stones[i+1]:
        soma += 1

print(soma)



