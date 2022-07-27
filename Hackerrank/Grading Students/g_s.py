def gradingStudents(grades):
    for i in range(0, len(grades)):
        if grades[i] < 38:
            continue
        multiple = grades[i] + 5 - (grades[i]%5)
        resultado = multiple - grades[i]
        if resultado < 3:
            grades[i] = multiple


if __name__ == '__main__':
    vec = []

    n = int(input())

    for i in range(n):
        j = int(input())
        vec.append(j)

    gradingStudents(vec)

    for i in vec:
        print(i)
    

