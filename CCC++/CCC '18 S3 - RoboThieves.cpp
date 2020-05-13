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

int renderCamera(int r, int c, vector<Cell> maze[], int dir, int mr, int mc){
	
	//1 = LEFT
	//2 = RIGHT
	//3 = UP
	//4 = DOWN
	
	if(!(c >= 0 && c < mc && r >= 0 && r < mr) || maze[r][c].type == 'W') return 1;
	char type = maze[r][c].type;
	
	if(dir == 1){
	if(type == '.' || type == 'S'){
			maze[r][c].type = 'X';
			}
		return renderCamera(r, c - 1, maze, dir, mr, mc);
	}

	if(dir == 2){
	if(type == '.' || type == 'S'){
			maze[r][c].type = 'X';
			}
		return renderCamera(r, c + 1, maze, dir, mr, mc);
	}

	if(dir == 3){
	if(type == '.' || type == 'S'){
			maze[r][c].type = 'X';
			}
		return renderCamera(r - 1, c, maze, dir, mr, mc);
	}

	if(dir == 4){
	if(type == '.' || type == 'S'){
			maze[r][c].type = 'X';
			}
		return renderCamera(r + 1, c, maze, dir, mr, mc);
	}
	

return 1;
}

vector<Cell> getNeighbours(vector<Cell> maze[], int r, int c, int mr, int mc){
	//Left, right, up and down 
	//Check inside box 
	//Check not W
	vector<Cell> ret;
	
	char type = maze[r][c].type;
	if(type == 'L' || type == 'R' || type == 'U' || type == 'D'){
		switch(type){
			
		case 'L':
		if(c - 1 < mc && c - 1 >= 0 && maze[r][c - 1].type != 'W' && maze[r][c - 1].type != 'C' && maze[r][c - 1].type != 'X') ret.push_back(maze[r][c - 1]);
		return ret;
		
		case 'R':
		if(c + 1 < mc && c + 1 >= 0 && maze[r][c + 1].type != 'W' && maze[r][c + 1].type != 'C' && maze[r][c + 1].type != 'X' ) ret.push_back(maze[r][c + 1]);
		return ret;
		
		case 'U':
		if(r - 1 < mr && r - 1 >= 0 && maze[r - 1][c].type != 'W' && maze[r - 1][c].type != 'C' && maze[r - 1][c].type != 'X') ret.push_back(maze[r - 1][c]);
		return ret;
		
		case 'D':
		if(r + 1 < mr && r + 1 >= 0 && maze[r + 1][c].type != 'W' && maze[r + 1][c].type != 'C'&& maze[r + 1][c].type != 'X') ret.push_back(maze[r + 1][c]);
		return ret;
		
		}
	}
	
	if(r + 1 < mr && r + 1 >= 0 && maze[r + 1][c].type != 'W' && maze[r + 1][c].type != 'C'&& maze[r + 1][c].type != 'X') ret.push_back(maze[r + 1][c]);
	if(r - 1 < mr && r - 1 >= 0 && maze[r - 1][c].type != 'W' && maze[r - 1][c].type != 'C' && maze[r - 1][c].type != 'X') ret.push_back(maze[r - 1][c]);
	
	if(c + 1 < mc && c + 1 >= 0 && maze[r][c + 1].type != 'W' && maze[r][c + 1].type != 'C' && maze[r][c + 1].type != 'X' ) ret.push_back(maze[r][c + 1]);
	if(c - 1 < mc && c - 1 >= 0 && maze[r][c - 1].type != 'W' && maze[r][c - 1].type != 'C' && maze[r][c - 1].type != 'X') ret.push_back(maze[r][c - 1]);
	
	return ret;
}


queue<Cell> q;
void bfs(vector<bool> vis[], vector<Cell> maze[], Cell start, int r, int c){
	if(start.type == 'X') return; //Check if start pos is visible by camera
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
				if(v.type != 'L' && v.type != 'R' && v.type != 'U' && v.type != 'D'){
					maze[v.r][v.c].val = current.val + 1; 
				}else{
					maze[v.r][v.c].val = current.val;
				}
				
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
	
	
	//Possibly too slow 
		for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
				if(raw[i][j] == 'C'){
					renderCamera(i, j, maze, 1, r, c);
					renderCamera(i, j, maze, 2, r, c);
					renderCamera(i, j, maze, 3, r, c);
					renderCamera(i, j, maze, 4, r, c);
				}
			 }
		}
	
	

	bfs(vis, maze, maze[srr][scc], r, c);
	
	//Final output
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			char type = raw[i][j];
			if(type == '.'){
				cout << maze[i][j].val << "\n";
		}
	  }
	}
	
	/*
	cout << "\n";
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << maze[i][j].type;	
	  }
	  cout << "\n";
	}
	*/
	return 0;
}
