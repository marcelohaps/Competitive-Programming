n = int(input())
bet = 100
vector = [100]
for i in range(n):
    numbers = int(input())
    bet += numbers
    vector.append(bet)

print(max(vector))


        

