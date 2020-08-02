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

#define MOD 1000000007;

LL grid[1001][1001];

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int h, w;
	cin >> h >> w;
	string textgrid[h];
	for (int i = 0; i < h; i++){
		cin >> textgrid[i];
	}
		
	grid[1][1] = 1;
	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			if (textgrid[i - 1][j - 1] == '.'){
				grid[i][j] = max(grid[i][j], grid[i - 1][j] + grid[i][j - 1]) % MOD;
			}else{
				grid[i][j] = 0; 
			}
		}
	}
	cout << grid[h][w] << "\n";
    
    return 0;
}
