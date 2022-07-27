if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    # 2 3 5 6 6 
    arr.sort()
    
    
    for i in range(len(arr)-1, -1, -1):
        if arr[i] == arr[i-1]:
            continue
        else:
            segundo_maior = arr[i-1]
            break
    print(segundo_maior)
            
        
