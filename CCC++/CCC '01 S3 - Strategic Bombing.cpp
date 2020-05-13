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
//B might start disconnected, fix with initial DFS
bool isDisconnecting(vector<int> adj[], string inp){
	
	int a = inp[0] - 'A';
	int b = inp[1] - 'A';
	///
	bool vis[27] = {false};
	stack<int> s;
	s.push(0);
	
	while(!s.empty()){
		int v = s.top();
		s.pop();
		if(v != -1 && !vis[v]){
			vis[v] = true;
			for(int i = 0; i < adj[v].size(); i++){
				if(!(v == a && adj[v][i] == b || v == b && adj[v][i] == a))  
				s.push(adj[v][i]);
			}
		}
	}
	
	adj[inp[0] - 'A'].push_back(inp[1] - 'A');
	adj[inp[1] - 'A'].push_back(inp[0] - 'A');
	
	return !vis['B' - 'A'];
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string inp = "";
	cin >> inp;
	vector<int> adj[26];
	vector<string> edges;
	
	while(inp != "**"){
		edges.push_back(inp);
		adj[inp[0] - 'A'].push_back(inp[1] - 'A');
		adj[inp[1] - 'A'].push_back(inp[0] - 'A');
		cin >> inp;
	}
	int c = 0;
	for(int i = 0; i < edges.size(); i++){
		if(isDisconnecting(adj, edges[i])){
			cout << edges[i] << "\n";
			c++;
		 }
	}
	cout << "There are " << c << " disconnecting roads.\n";

	return 0;
}
