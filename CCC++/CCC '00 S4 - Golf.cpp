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

int clubs[32];
int strokes[5281] = {-1};
int dist = 0;
int clubcount = 0;

int calculate(int a){
	if(strokes[a] != -1) return strokes[a];
	int lowest = INT_MAX;
	for(int j = 0; j < clubcount; j++){
		if(a - clubs[j] >= 0){
			int calc = calculate(a - clubs[j]);
			if(calc >= 0) lowest = min(lowest, calc);
		}
	}
	
	if(lowest != INT_MAX){
		return strokes[a] = lowest + 1;
	}else{
		return strokes[a] = -2;
	}
	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dist >> clubcount;
	memset(strokes, INT_MAX, sizeof(strokes));
	
	for(int i = 0; i < clubcount; i++){
		cin >> clubs[i];
		strokes[clubs[i]] = 1;
	}
	
	int ans = calculate(dist);
	cout << (ans <= -1 ? "Roberta acknowledges defeat." : "Roberta wins in " + to_string(ans) + " strokes.") << "\n";
	
	return 0;
}
