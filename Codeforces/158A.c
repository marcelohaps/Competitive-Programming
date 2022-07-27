#include <stdio.h>




int main(){

    int v[101], i, j, n, a, k, soma = 0;

    scanf("%d%d", &n, &k);

    for(i = 1;i<=n;i++){
        scanf("%d", &v[i]);

    }

    


    for(i = 1;i<=n;i++){
        if (v[i] >= v[k] && v[i] != 0 && k > 0)
            soma++;
    }
    
    printf("%d\n", soma);
        
            
        
    
    
        
    return 0;
}


 