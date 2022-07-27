#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB
#https://vjudge.net/problem/SPOJ-ARRAYSUB


#include <bits/stdc++.h>
#define max 10
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int maior = -999;
    int c, n, m, k, op, r, a, i, j, x, t;
    vector<int> v, v2;
    
    cin >> t;

    while(t--){
        cin >> x;
        v.push_back(x);
    }
    
    cin >> k;
    
    for(i = 0;i<v.size()-k+1;i++){
        for(j = i;j<k+i;j++){
              if (v[j] > maior)
                maior = v[j];    
        }
        v2.push_back(maior);
        maior = -999;
    }
    
    
    for(i = 0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    
    
    
    
    
    return 0;
}