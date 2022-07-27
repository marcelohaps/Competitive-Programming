n = int(input())
s = input()
count_a = 0
count_d = 0

for i in range(len(s)):
    if s[i] == 'A':
        count_a += 1
    else:
        count_d += 1

if count_a > count_d:
    print("Anton")
elif count_d > count_a:
    print("Danik")
else:
    print("Friendship")