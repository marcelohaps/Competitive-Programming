#include <stdio.h>
#include <math.h>


int main(){

    int n, soma = 0, i, j, a1, a2, a3, soma1 = 0, soma2 = 0;

    scanf("%d", &n);

    for(i = 0;i<n;i++){
        scanf("%d%d%d", &a1, &a2, &a3);
        soma += a1;
        soma1 += a2;
        soma2 += a3;
    }


    if (soma == 0 && soma1 == 0 && soma2 == 0)
        printf("YES");
    else
        printf("NO");












    return 0;
}