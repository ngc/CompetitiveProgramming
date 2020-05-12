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
	int n;
	cin >> n;
	LL a, b, c;
	
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		cout << (a * b == c ? "POSSIBLE DOUBLE SIGMA\n" : "16 BIT S/W ONLY\n");	
	}
	return 0;
}
