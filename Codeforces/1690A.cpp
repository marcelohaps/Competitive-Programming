#include <iostream>
using namespace std;

int main(){


	int x, t;
	
	cin >> t;

	while(t--){
		cin >> x;
		if (x == 7){
			cout << 2 << " " << 4 << " " << 1 << endl;
			continue;
		}
		if (x % 3 == 0)
			cout << x/3 << " " << (x/3) + 1 << " " << (x/3) -1 << endl;
		else if (x%3 == 1)
			cout << (x/3) + 1 << " " << (x/3) + 2 << " " << (x/3) - 2 << endl;
		else
			cout << (x/3) + 1 << " " << (x/3) + 2 << " " << (x/3) -1 << endl;	
	}

	return 0;
}