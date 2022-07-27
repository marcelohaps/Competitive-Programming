#include <bits/stdc++.h>

using namespace std;


int main(){

	string s1, crib;
	cin >> s1 >> crib;
	int i, j, count = 0, aux = 0;
	
	for (i = 0;i<s1.size()-crib.size()+1;i++){
		for(j = 0;j<crib.size();j++){
			if (s1[i+j] != crib[j])
				count++;
		}
		if (count == crib.size())
			aux++;
		count = 0;
	}
	
	cout << aux << endl;




	return 0;
	
}