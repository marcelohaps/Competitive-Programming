#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, i, j, x, y, count = 1;
    auto lap = 0;
    vector<int> queries, numbers;
    
    
    while(cin >> n >> q, (n || q)){
        while(n--){
            cin >> x;
            numbers.push_back(x);
        }
        sort(numbers.begin(), numbers.end());
        while(q--){
            cin >> y;
            queries.push_back(y);
        }
        
        cout << "CASE# " << count << ':' << '\n';
        
        for(i = 0; i<queries.size();i++){
            if(binary_search(numbers.begin(), numbers.end(), queries[i])==false)
                cout << queries[i] << " not found" << '\n';
            if(binary_search(numbers.begin(), numbers.end(), queries[i])==true){
                lap = find(numbers.begin(), numbers.end(), queries[i]) - numbers.begin();
                cout << queries[i] << " found at " << lap+1 << '\n';
            }
        }
        
        count++;
        numbers.clear();
        queries.clear();
    
    }
    
    
    
    
    
    
    
    return 0;
}