#include <stdio.h>



int main(){

  
    char stt[6];
    int n, i, g = 0, j, aux, count = 0, aux2, aux3, aux4, aux5, aux6;

    scanf("%d", &n);

    for(i = 0;i<n;i++){
        scanf("%s", stt);
        for(j = 0;stt[j]!= '\0';j++){
            if (stt[j] == 'r')
                aux = j;
            if (stt[j] == 'R')
                aux2 = j;
            if (stt[j] == 'g')
                aux3 = j;
            if (stt[j] == 'G')
                aux4 = j;
            if(stt[j] == 'b')
                aux5 = j;
            if (stt[j] == 'B')
                aux6 = j;
            
        }
        if ((aux < aux2) && (aux3 < aux4) && (aux5 < aux6))
            printf("YES\n");
        else
            printf("NO\n");
    }


    
    





    return 0;

}