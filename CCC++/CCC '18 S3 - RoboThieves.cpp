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


//Make a recursive counter to count the walls in the direction that is chosen 
//If it is greater than 0 then there are walls which means that the camera cannot see there. 

struct Cell{
	public:
	char type;
	int r;
	int c;
	int val = -1;
};

vector<Cell> getNeighbours(vector<Cell> maze[], int r, int c, int mr, int mc){
	//Left, right, up and down 
	//Check inside box 
	//Check not W
	vector<Cell> ret;
	
	if(r + 1 < mr && r + 1 >= 0 && maze[r + 1][c].type != 'W' && maze[r + 1][c].type != 'C') ret.push_back(maze[r + 1][c]);
	if(r - 1 < mr && r - 1 >= 0 && maze[r - 1][c].type != 'W' && maze[r - 1][c].type != 'C') ret.push_back(maze[r - 1][c]);
	
	if(c + 1 < mc && c + 1 >= 0 && maze[r][c + 1].type != 'W' && maze[r][c + 1].type != 'C') ret.push_back(maze[r][c + 1]);
	if(c - 1 < mc && c - 1 >= 0 && maze[r][c - 1].type != 'W' && maze[r][c - 1].type != 'C') ret.push_back(maze[r][c - 1]);
	
	return ret;
}


queue<Cell> q;
void bfs(vector<bool> vis[], vector<Cell> maze[], Cell start, int r, int c){
	q.push(start);
	vis[start.r][start.c] = true;
	
	while(!q.empty()){
		Cell current = q.front();
		q.pop();
		//No goal, so don't check for one
		vector<Cell> neighbours = getNeighbours(maze, current.r, current.c, r, c);
	//	cout << "Neighbours: " << neighbours.size() << "\n";
		for(int i = 0; i < neighbours.size(); i++){
			Cell v = neighbours[i];
			if(!vis[v.r][v.c]){
				vis[v.r][v.c] = true;
				maze[v.r][v.c].val = current.val + 1; 
			//	cout << v.val << "At " << v.r << ", " << v.c << "\n";
				q.push(maze[v.r][v.c]);
			}
			
		} 
		
	}
	return;
	

}


int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int r, c;
	cin >> r >> c;
	string raw[r];
	
	for(int i = 0; i < r; i++){
		cin >> raw[i];
	}
	
	vector<bool> vis[r];
	vector<Cell> maze[r];
	int srr, scc;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			vis[i].push_back(false);
			maze[i].push_back({raw[i][j], i, j});
			if(raw[i][j] == 'S'){
				 maze[i][j].val = 0;
				 srr = i;
				 scc = j;
			 }
		}
	}

	bfs(vis, maze, maze[srr][scc], r, c);
	
	//Final output
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(raw[i][j] == '.'){
				cout << maze[i][j].val << "\n";
		}
		
	}
	}

	return 0;
}
