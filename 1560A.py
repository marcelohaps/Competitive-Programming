T = int(input())
listaa = []


for k in range(1, 2000):
    if k %3 !=0 and k % 10 != 3:
        listaa.append(k)

for i in range(1, T+1):
    f = int(input())
    print(listaa[f-1])
            

            



