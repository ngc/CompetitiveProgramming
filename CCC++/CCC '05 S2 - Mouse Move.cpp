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

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int r, c;
	cin >> c >> r; 
	
	int mx = 0, my = 0;
	int tx, ty;
	while((cin >> tx >> ty) && !(tx == 0 && ty == 0)){
		mx = max(0, min(c, mx + tx));
		my = max(0, min(r, my + ty)); 
		cout << mx << " " << my << "\n";
	}

    return 0;
}
