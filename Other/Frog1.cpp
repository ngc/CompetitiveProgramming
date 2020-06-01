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

int costs[1000001];
int dp[1000001];

int frog(int i, int n){
	if(i == n) return dp[i] = 0;
	if(dp[i] != -1) return dp[i];
	int cost = abs(costs[i] - costs[i + 1]) + frog(i+1, n);
	if(i + 2 <= n){
		cost = min(cost, abs(costs[i] - costs[i+2]) + frog(i + 2, n));
	}
	
	return dp[i] = cost;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> costs[i];
	} //cost for a jump = abs(h.i - h.j)
	  //find minimum cost

	memset(dp, -1, sizeof(dp));
	cout << frog(1, n);

    return 0;
}
