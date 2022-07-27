s = input()
l = []

for i in s:
    l.append(int(i))
    
if l[0] != 9:
    for i in range(0, len(l)):
        if l[i] >= 5:
            l[i] = 9 - l[i]
else:
    for i in range (1, len(l)):
        if l[i] >=5:
            l[i] = 9 - l[i]
            
           







for value in l:
    print(value, end = '')
   

