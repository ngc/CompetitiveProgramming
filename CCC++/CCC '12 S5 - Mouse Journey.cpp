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

int board[26][26] = {0};

int calculate_paths(int r, int c){
	if(r < 0 || c < 0) return 0;
	if(board[r][c] > 0) return board[r][c];
	if(board[r][c] == -1) return 0;
	return board[r][c] = calculate_paths(r - 1, c) + calculate_paths(r, c - 1); 	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	/* Can move either right or down, no diagonal movements
		Start at (1, 1)
		Goal: (R, C)
		Cannot pass through cages containing cats
		Compute the number of possible paths (cat free paths) from (1, 1) to (R, C)
	*/

	int r, c, cat_count, x, y;
	cin >> r >> c >> cat_count;
	
	for(int i = 0; i < cat_count; i++){
		cin >> x >> y;
		board[x - 1][y - 1] = -1;
	}
	board[0][0] = 1;

	cout << calculate_paths(r - 1, c - 1);
	return 0;
}
