string1 = input()
string2 = input()

aux1 = 0
for i in range(0, len(string1)):
    if ord(string1[i]) <= 90 or ord(string2[i]) <= 90:
        string1 = string1.lower()
        string2 = string2.lower()


for i in range(0, len(string1)):
    if ord(string1[i]) == ord(string2[i]):
        aux1 = 1
    elif ord(string1[i]) < ord(string2[i]):
        aux1 = 2
        break
    else:
        aux1 = 3
        break
if aux1 == 1:
    print("0")
elif aux1 == 2:
    print("-1")
else:
    print("1")