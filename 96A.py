opa = input()

soma1 = 0
soma0 = 0
aux = 0                                                 #1  0  0  0  0  0  0  0  0  1
aux1 = 0
for i in range(0, len(opa)-1):
    if opa[i] == opa[i+1]:
        soma1 += 1
    else:
        soma1 = 0
    if soma1 == 6:
        break

if soma1 >= 6:
    print("YES")
else:
    print("NO")

