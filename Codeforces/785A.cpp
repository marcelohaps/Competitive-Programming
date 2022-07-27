#include <bits/stdc++.h>
using namespace std;
int main(){

	int t, i, j, soma = 0;
	string s;
	
	cin >> t;
	
	while(t--){
		cin >> s;
		if (s == "Tetrahedron")
			soma += 4;
		else if(s == "Cube")
			soma += 6;
		else if(s == "Octahedron")
			soma += 8;
		else if(s == "Dodecahedron")
			soma += 12;
		else if (s == "Icosahedron")
			soma += 20;
	}
	
	cout << soma << endl;











	return 0;
}