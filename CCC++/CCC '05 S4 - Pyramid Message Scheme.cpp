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

map<string, bool> connections;
vector<string> names;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int l;
	cin >> l;
	
	while(l--){
	int n, temp = 0, maxd = -1;
	cin >> n;
	string name;
	
	names.clear();
	connections.clear();
	
	for(int i = 0; i < n; i++){
		cin >> name;
		names.PB(name);
	}
	connections[names[n - 1]] = true;
	
	for(int i = 0; i < n; i++){
		if(connections[names[i]]) {temp--; continue;}
		connections[names[i]] = true;
		maxd = max(maxd, ++temp);
	}
	
	cout << (n - 2 * maxd) * 10 << "\n";  
	
	}
    return 0;
}
