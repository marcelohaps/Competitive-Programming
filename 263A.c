#include <stdio.h>
#include <stdbool.h>




int main(){

  
    int v[6][6], i, j, c, l, g, h, soma = 0;

    for(i = 1;i<6;i++){
        for(j = 1;j<6;j++){
            scanf("%d", &v[i][j]);
        }
    }

    for(i = 1;i<6;i++){
        for(j = 1;j<6;j++){
            if (v[i][j] == 1){
                g = i;
                h = j;
            }
        }
        
    }

    for(;;){
        if (g == 3 && h == 3)
            break;
        
        if (g > 3){
            g--;
            soma++;
        }
        else if (g < 3){
            g++;
            soma++;
        }
        if (h > 3){
            h--;
            soma++;
        }
        else if (h < 3){
            h++;
            soma++;
        }
        
    }     
    
    
    printf("%d", soma);





    return 0;

}