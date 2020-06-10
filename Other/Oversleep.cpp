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

struct Cell{
	public: 
	char type;
	int r; 
	int c;
	bool vis = false;
	int step = -1;
};

vector<Cell> getNeighbours(vector<Cell> board[], int r, int c, int n, int m){
	vector<Cell> rets;
	if(r + 1 < n && r + 1 >= 0 && c < m && c >= 0) rets.PB(board[r + 1][c]);
	if(r < n && r >= 0 && c + 1 < m && c + 1 >= 0) rets.PB(board[r][c + 1]);
	if(r - 1 < n && r - 1 >= 0 && c < m && c >= 0) rets.PB(board[r - 1][c]);
	if(r < n && r >= 0 && c - 1 < m && c - 1 >= 0) rets.PB(board[r][c - 1]);
	return rets;
}

queue<Cell> q;
	
int bfs(int srr, int scc, vector<Cell> board[], int n, int m){
	
	board[srr][scc].vis = true;
	q.push(board[srr][scc]);
	while(!q.empty()){
		Cell current = q.front();
		q.pop();
		if(current.type == 'e') return current.step;
		
		vector<Cell> neighbours = getNeighbours(board, current.r, current.c, n, m);
		for(int i = 0; i < neighbours.size(); i++){
			Cell v = neighbours[i];
			if(!v.vis && v.type != 'X'){
				board[v.r][v.c].vis = true;
				board[v.r][v.c].step = current.step + 1;
				q.push(board[v.r][v.c]);
			}
		}
		
	}
	return -1;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	char temp;
	
	int srr, scc;
	
	vector<Cell> board[n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> temp;
			board[i].PB({temp, i, j}); 
			if(temp == 's'){ srr = i; scc = j; }//board[i][j].step = 0;}
		}
	}
	
	cout << bfs(srr, scc, board, n, m);
	
	/*for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << board[i][j].step << " ";
		}
		cout << "\n";
	}
	*/
    return 0;
}
