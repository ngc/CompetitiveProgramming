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

int stones[100000] = {0};
int costs[100000];

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> costs[i];
	}
	
	stones[1] = abs(costs[1] - costs[0]);
	for(int i = 2; i < n; i++){
		stones[i] = min(abs(costs[i - 1] - costs[i]) + stones[i - 1], abs(costs[i - 2] - costs[i]) + stones[i - 2]);
	}
    cout << stones[n - 1];
    cout << "\n";
    
    return 0;
}
