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
	int n;
	bool type;
	cin >> n;
	type = n - 1; 
	cin >> n;
	
	int DMOJ[n], PEG[n];
	
	for(int i = 0; i < n; i++){
		cin >> DMOJ[i];
	}
	
	for(int i = 0; i < n; i++){
		cin >> PEG[i];
	}
	
	sort(PEG, PEG + n);
	sort(DMOJ, DMOJ + n);
	
	int total = 0;
	
	if(type)/*Maximum*/{
		for(int i = 0; i < n; i++){
			total += max(DMOJ[n - i - 1], PEG[i]);
		}
	}else/*Minimum*/{
		for(int i = 0; i < n; i++){
			total += max(DMOJ[n - i - 1], PEG[n - i - 1]);
		}
	}
	cout << total << "\n";
	

	return 0;
}
