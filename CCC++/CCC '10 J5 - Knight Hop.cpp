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



vii getNeighbours(int x, int y){
	vii ret;
	ret.PB(pii(x + 2, y + 1));
	ret.PB(pii(x + 2, y - 1));
	ret.PB(pii(x + 1, y + 2));
	ret.PB(pii(x + 1, y - 2));

	ret.PB(pii(x - 2, y + 1));
	ret.PB(pii(x - 2, y - 1));
	ret.PB(pii(x - 1, y + 2));
	ret.PB(pii(x - 1, y - 2));
	return ret;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int x1, y1;
	int x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int board[8][8] = {-1};

	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			board[i][j] = -1;
		}
	}

	y1 = 8 - y1;
	x1 = x1 - 1;
	y2 = 8 - y2;
	x2 = x2 - 1;
	

	queue<pii> s;
	s.push(pii(y1, x1));
	board[y1][x1] = 0;

	while(!s.empty()){
		pii current = s.front();
		s.pop();
		vii neighbours = getNeighbours(current.F, current.S);
		for(int i = 0; i < neighbours.size(); i++){
			if(board[neighbours[i].F][neighbours[i].S] != -1 || (neighbours[i].F < 0 || neighbours[i].F >= 8) || (neighbours[i].S < 0 || neighbours[i].S >= 8)) continue;
			board[neighbours[i].F][neighbours[i].S] = board[current.F][current.S] + 1;
			s.push(pii(neighbours[i].F, neighbours[i].S));
		}
	}
	cout << board[y2][x2] << "\n";

	return 0;
}
