#include <bits/stdc++.h>

using namespace std;

vector<int>adj[2001];
bool visted[2001] = {false};

void dfs(int at){
	if(visted[at]) return;
	visted[at] = true;
	int size = adj[at].size();
	for(int i = 0; i < size; i++){
			dfs(adj[at][i]);
	}
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, m, a, b, t1, t2;
	cin >> n >> m >> a >> b;
	
	for(int i = 0; i < m; i++){
		cin >> t1 >> t2;
		    adj[t1].push_back(t2); 
			adj[t2].push_back(t1); 
	}

	dfs(a);
	
	if(visted[b]){
		cout << "GO SHAHIR!";
		return 0;
	}else{
		cout << "NO SHAHIR!";
	}

  }
