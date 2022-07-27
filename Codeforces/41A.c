#include <stdio.h>

int conta_carac(char *string){
    int k, l, contador = 0;

    for(k = 0;string[k]!='\0';k++){
        contador++;
    }
    return contador;
}








int main() {

    int i, j, count = 0, qtd, conta = 0, g;
    char s[101], t[101];

    scanf("%s%s", s, t);
    qtd = conta_carac(s);
    g = qtd -1;
    
    for(i = 0;i<qtd;i++){
        if (s[i] != t[g-i]){
            printf("NO");
            break;
        }
        else
            conta++;
            
    }

    if (conta == qtd)
        printf("YES");











    return 0;
}