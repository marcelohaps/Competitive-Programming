#include <stdio.h>
#include <math.h>


int main(){

    char string[1000];
    int i, j, n, x, t, aux;

    scanf("%d%d", &n, &x);
    scanf("%s", string);

    for(i = 0;i<x;i++){
        for(j = 0;j<n-1;j++){
            
            if (string[j] == 'B' && string[j+1] == 'G'){
                
                aux = string[j];
                string[j] = string[j+1];
                string[j+1] = aux;
                j++;
                
            }
        
        }
    }

    printf("%s", string);












    return 0;
}