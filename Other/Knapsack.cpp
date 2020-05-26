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
	int n, c, w, v;
	cin >> n >> c;
	
	LL dp[100010] = {0LL};
	LL temp = INT_MIN;
	
	for(int i = 0; i < n; i++){
		cin >> w >> v;
		for(int i = c; i >= w; i--){
			dp[i] = max(dp[i-w] + v, dp[i]);
		}
	}
	
	for(int i = 0; i <= c; i++){
		temp = max(temp, dp[i]);
	}
	cout << temp;
	return 0;
}
