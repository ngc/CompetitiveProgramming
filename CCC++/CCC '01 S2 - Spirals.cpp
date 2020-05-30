#include <bits/stdc++.h>
using namespace std;

typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl;
typedef queue<int> qi;
typedef queue<char> qc;
typedef stack<int> si;
typedef stack<char> sc;
#define F first
#define S second
#define PB push_back

void printit(int arr[100][100]){
	
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			if(arr[i][j] != -1){cout << arr[i][j] << " ";}
			else{cout << " ";}
		}	
		cout << "\n";
	}
	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int max, min;
	cin >> min >> max;
	
	int arr[100][100];
	memset(arr, -1, sizeof(arr[0][0]) * 100 * 100);
	char dir = 'D';
	
	int maxdir[4] = {0, 0, 50, 50}; //DRUL
	/***********************\ 
	|* D = HIGHEST ROW	   *|
	|* R = HIGHEST COLLUMN *|
	|* U = LOWEST ROW	   *|
	|* L = LOWEST COLLUMN  *|
	\***********************/
	
	int r = 50, c = 50;
	for(int i = 0; i <= max - min; i++){
		arr[r][c] = min + i;
		switch(dir){
			case 'D': r += 1; if(r > maxdir[0]){maxdir[0] = r; dir = 'R';} break;
			case 'R': c += 1; if(c > maxdir[1]){maxdir[1] = c; dir = 'U';} break;
			case 'U': r -= 1; if(r < maxdir[2]){maxdir[2] = r; dir = 'L';} break;
			case 'L': c -= 1; if(c < maxdir[3]){maxdir[3] = c; dir = 'D';} break;
		}
	}
	
	printit(arr);
	//cout << "ROWS: " << maxdir[0] - maxdir[2] << "\n";
	//cout << "COLLUMNS: " << maxdir[1] - maxdir[3] << "\n";

    return 0;
}
