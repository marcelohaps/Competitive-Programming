#include <stdio.h>



int main(){

    int i, j;
    char str[1001];

    scanf("%s", str);
    if (str[0] >= 97 && str[0] <= 122)
        str[0] -= 32;

    printf("%s", str);
















    return 0;
}