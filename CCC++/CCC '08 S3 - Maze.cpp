#include <bits/stdc++.h>
#include <chrono>
#include <unistd.h>
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

struct Cell{
public:
	char type;
	int r;
	int c; 
	int count = 1;
};

Cell makecell(int r, int c, char type){
	return {type, r, c};
}

vector<Cell> findneighbours(Cell p, vector<Cell> cells[], int mr, int mc){
	
	vector<Cell> ret;
	int r = p.r;
	int c = p.c;
	switch(p.type){
		
		case '*': break;
		
		case '-': 
		if(c+1 < mc && c+1 >= 0)ret.push_back(cells[r][c + 1]);
		if(c-1 < mc && c-1 >= 0)ret.push_back(cells[r][c - 1]);
		break;
		
		case '|':
		if(r+1 < mr && r+1 >= 0) ret.push_back(cells[r + 1][c]);
		if(r-1 < mr && r-1 >= 0) ret.push_back(cells[r - 1][c]);
		break;
		
		case '+':
		if(c+1 < mc && c+1 >= 0)ret.push_back(cells[r][c + 1]);
		if(c-1 < mc && c-1 >= 0)ret.push_back(cells[r][c - 1]);
		if(r+1 < mr && r+1 >= 0) ret.push_back(cells[r + 1][c]);
		if(r-1 < mr && r-1 >= 0) ret.push_back(cells[r - 1][c]);
		
		break;
		
	}
	
 return ret;
}

queue<Cell> q;
void bfs(Cell s, int r, int c, vector<Cell> cells[], vector<vector<bool>> vis){
	vis[s.r][s.c] = true;
	q.push(s);
	
	while(!q.empty()){
		Cell current = q.front();
		q.pop();
		if(current.r == r - 1 && current.c == c - 1 && current.type != '*'){
			cout << current.count << "\n";
			return;
		}
		
		vector<Cell> neighbours = findneighbours(current, cells, r, c);
		
		for(int i = 0; i < neighbours.size(); i++){
			Cell nc = neighbours[i];
			if(!vis[nc.r][nc.c]){
				vis[nc.r][nc.c] = true;
				cells[nc.r][nc.c].count = current.count + 1;
				q.push(cells[nc.r][nc.c]);
			}
		}
		
	}
	cout << "-1\n";
	return;
}



int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	
	for(int o = 0; o < t; o++){
		
		int r, c;
		cin >> r >> c;
		string maze[r];
		vector<Cell> cells[r];
		for(int i = 0; i < r; i++){
			cin >> maze[i];
		}
		
		vector<vector<bool>> vis;
		
		for(int i = 0; i < r; i++){
			vector<bool> temp;
			for(int j = 0; j < c; j++){
				temp.push_back(false);
				cells[i].push_back(makecell(i, j, maze[i][j]));
			}
			vis.push_back(temp);
		}

		bfs(cells[0][0], r, c, cells, vis);
			
	}
	
	
	return 0;
}
