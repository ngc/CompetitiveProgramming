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


int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, t;
	cin >> n;
	stack<pii> towers;
	towers.push(pii(0, 1000001));
	
	for (int i = 0; i < n; ++i) {
			cin >> t; //Store temp for current visted tower's size

		while(towers.empty() == false && t >= towers.top().second /*Limit for cell*/){
			towers.pop(); //Pop until wall of cell is found
		}

		cout << i - towers.top().first << " "; //Output distance between notch
		towers.push(pii(i, t));
	}

	return 0;
}
