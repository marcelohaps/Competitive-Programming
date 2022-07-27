#include <bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, n, x, pessoas = 0, crimes = 0, aux = 0;
    cin >> n;

   while(n--){
       cin >> x;
       if (x != -1){
           pessoas+= x;
       }
       else if (x == -1 && pessoas <= 0){
           aux++;
       }
       else if(x == -1 && pessoas > 0){
           pessoas--;
       }                                                          //-1 -1 1
   }
cout << aux << '\n';






    return 0;
}