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
	int val = 0;
	
};

void display(vector<Cell> maze[], int r, int c){
	

	
}


vector<Cell> getneighbours(Cell G, vector<Cell> maze[], int mr, int mc){
	vector<Cell> ret;
	
	int r = G.r;
	int c = G.c;
	
	if(r + 1 < mr && r + 1 >= 0 && maze[r + 1][c].type != 'X') ret.PB(maze[r + 1][c]);
	if(r - 1 < mr && r - 1 >= 0 && maze[r - 1][c].type != 'X') ret.PB(maze[r - 1][c]);
	if(c - 1 < mc && c - 1 >= 0 && maze[r][c - 1].type != 'X') ret.PB(maze[r][c - 1]);
	if(c + 1 < mc && c + 1 >= 0 && maze[r][c + 1].type != 'X') ret.PB(maze[r][c + 1]);
	
	return ret;
}

int bfs(vector<Cell> maze[], int r, int c, Cell start){
	bool vis[r][c] = {false};
	queue<Cell> q;
	q.push(start);
	vis[start.r][start.c] = true;
	
	while(!q.empty()){
		Cell current = q.front();
		q.pop();
		
		if(current.type == 'W') {
			return current.val;
		}
		
		vector<Cell> neighbours = getneighbours(current, maze, r, c);
		for(int i = 0; i < neighbours.size(); i++){
			Cell v = neighbours[i];
			if(!vis[v.r][v.c]){
				
				vis[v.r][v.c] = true;
				maze[v.r][v.c].val = current.val + 1;
				q.push(maze[v.r][v.c]);
			} 
		}
		
	}
	return 100;
}

void doitlol(){
		int r, c;
		Cell start;
		cin >> c >> r;
		string raw[r];
		for(int i = 0; i < r; i++){
			cin >> raw[i];
		}
		vector<Cell> maze[r];
		for(int i = 0; i < r; i++){
			
			for(int j = 0; j < c; j++){
				maze[i].PB({raw[i][j], i, j});
				if(raw[i][j] == 'C'){
					start = maze[i][j];
					//maze[i][j].val = 1;
				}
			}	
		}
	
		int ce = bfs(maze, r, c, start); 

		
	/*	for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cout << to_string(maze[i][j].val)[0];
			}
			cout << "\n";
		}
		*/
		
		cout << ((!(ce < 60)) ? "#notworth" : to_string(ce)) << "\n";
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	
		
	for(int o = 0; o < t; o++){
		doitlol();
	}
	
	
	return 0;
}
