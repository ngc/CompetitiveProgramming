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
int board[26][26];
int r, c;
int search(int x, int y){
	if(x > r || y > c) return 0;
	if(board[x][y] != -1) return board[x][y];
	board[x][y] = search(x + 1, y) + search(x, y + 1);
	return board[x][y];
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int k, t1, t2;
	cin >> r >> c >> k;
	

	memset(board, -1, sizeof(board));
	board[r][c] = 1;
	//bool hascat[r][c];
	//memset(hascat, false, sizeof(hascat));
	
	for(int i = 0; i < k; i++){
		cin >> t1 >> t2;
		board[t1][t2] = 0;
	}

	cout << search(1, 1);

    return 0;
}
