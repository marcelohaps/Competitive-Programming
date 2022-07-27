#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define TAMMAX 500
#define max 51
int main(){

    int n, k, t, a;
    int c, j;
    char aux;
    char matriz[max][max];
    double dist, soma = 0, x, y, x0, y0, result;

    cin >> n >> k;
    cin >> x0 >> y0;
    for(int i = 1;i<n;i++){
        cin >> x >> y;
        dist = pow(x0-x, 2) + pow(y0-y, 2);
        dist = sqrt(dist);
        soma += dist;
        x0 = x;
        y0 = y;

    }

    result = soma*k;
    printf("%.9lf", result/50);




    return 0;

}