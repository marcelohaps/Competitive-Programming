string = input()

minuscula = 0
maiuscula = 0

for i in range(0, len(string)):
    if ord(string[i]) >= 65 and ord(string[i]) <= 90:
        maiuscula += 1
    elif ord(string[i]) >= 97 and ord(string[i]) <= 122:
        minuscula += 1


if minuscula == maiuscula or minuscula > maiuscula:
    print(string.lower())
else:
    print(string.upper())


        

    

