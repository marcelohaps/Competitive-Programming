#include <bits/stdc++.h>
using namespace std;
#define max 500
int main(){

	int i, j, t;
	int l, c, check_diagonal, soma_diagonais = 0, check_aux;
	bool checador = true; 
	char matriz[max][max];
	
	cin >> l;
		
		
	for(i = 0;i<l;i++){
		for (j = 0;j<l;j++){
			cin >> matriz[i][j];
		}
	}
	
	check_diagonal = matriz[0][0];
	check_aux = matriz[0][1];
	if (check_diagonal == check_aux){
		cout << "NO" << '\n';
		return 0;
	}
	for(i = 0;i<l;i++){
		for(j = 0;j<l;j++){
			if (i == j || i+j == l - 1){
				if (matriz[i][j] == check_diagonal)
					soma_diagonais++;
			}
		}
	}

	//cout << soma_diagonais << endl;
	for(i = 0;i<l;i++){
		for(j = 0;j<l;j++){
			if (i != j && i+j != l - 1){
				if(matriz[i][j] != check_aux){
					checador = false;
					break;
				}
			}
		}
	}
	
	if (soma_diagonais == (l*2)-1 && checador == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	











	return 0;
}
