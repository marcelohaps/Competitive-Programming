#include <bits/stdc++.h>
using namespace std;


int main(){
															//subtraio par e somo ímpar.
	
	int a, b, count = 0, t;                                    //(9,3), (8, 4) a > b e mesma paridade
																//(8, 5), (9, 4) a > b e paridades diferentes
																//(5, 11), (6, 12) b > a e mesma paridade
																//(4, 11), (5, 12) b > a e paridades diferentes

	cin >> t;

	while(t--){
		cin >> a >> b;
		if(a == b){
			cout << 0 << endl;
			continue;
		}
		if (a > b){
			if ((a % 2 == 0 & b % 2 == 0) || (a % 2 == 1 && b %2 == 1))
				cout << 1 << endl;
			else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
				cout << 2 << endl;
		}
		else if (b > a){
			if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1))
				cout << 2 << endl;
			else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
				cout << 1 << endl;
		}
		


		
	}


	return 0;
}