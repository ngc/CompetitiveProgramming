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

#define N_MAX 10000

int paths[N_MAX] = {0};
vector<int> connections[N_MAX];
//Connections are backwards, therefore connection[x].PB(y) represents y -> x
//What is connected to x? rather than what does x connect to?

int calculate(int a){
	if(paths[a] != 0) return paths[a];
	paths[1] = 1;
	for(int i = 0; i < connections[a].size(); i++){
		paths[a] += calculate(connections[a][i]);
	}
	return paths[a];
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	int x, y;
	
	
	while(cin >> y >> x && !(x == 0 && y == 0)){
		connections[x].PB(y);
	}
	
	calculate(n);
	
	cout << paths[n];
	
	return 0;
}
