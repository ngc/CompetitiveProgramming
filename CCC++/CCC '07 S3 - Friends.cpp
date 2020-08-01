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

vi friends[10000];

qi q;

int bfs(int x, int y){
	int vis[10000];
	fill_n(vis, 10000, -1);
	int current = x;
	q.push(current);
	while(!q.empty()){
		current = q.front();
		q.pop();
		if(current == y)
			return vis[current];
		vector<int> neighbours = friends[current];
		for(int i = 0; i < neighbours.size(); i++){
			if(vis[neighbours[i]] == -1){
				vis[neighbours[i]] = vis[current] + 1;
				q.push(neighbours[i]);
			    }
			} 
		}
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	int x, y;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		friends[x].PB(y);
	}
	
	while(cin >> x >> y && !(y == 0 && x == 0)){
		int ans = bfs(x, y);
		cout << (ans == -1 ? "No" : "Yes " + to_string(ans)) << "\n";
	}
	
	return 0;
}
