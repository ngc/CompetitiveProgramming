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

vector<pii> book[1000001];
int debug = 0;
queue<pii> q; 

void search(int x, int y, vector<bool> vis[]){
	vis[x - 1][y - 1] = true;
	q.push(pii(x, y));
	
	while(!q.empty()){
		debug++;
		pii pos = q.front();
		q.pop();
		if(pos.first == 1 && pos.second == 1){
			vis[0][0] = true;
			cout << "yes";
			return;
		}
		
		int target = pos.first * pos.second;
		for(int i = 0; i < book[target].size(); i++){
			pii point = book[target][i];
			if(vis[point.first - 1][point.second - 1] == false){
				vis[point.first - 1][point.second - 1] = true;
				q.push(point);
			}
			
		}
		
	}
	
	return;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int m, n, t;
	cin >> m >> n;
	vi arr[m];
	vector<bool> vis[m];
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> t;
			vis[i].push_back(false);
			book[t].push_back(pii(i + 1, j + 1));
		}
	}
	
	search(m, n, vis);
	if(vis[0][0] == false){
		cout << "no";
	}

	return 0;
}
