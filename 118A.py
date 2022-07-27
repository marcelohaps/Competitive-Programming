string1 = input()
string1 = string1.lower()


for i in range(0, len(string1)):
    if string1[i] != 'a' and string1[i] != 'e' and string1[i] != 'i' and string1[i] != 'o' and string1[i] != 'y' and string1[i] != 'u':
        print(".", end = "")
        print(string1[i], end = "")


        



    