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

	string instructions;
	cin >> instructions;
	
	int newA[4] = {1, 2, 3, 4};
	int oldA[4] = {1, 2, 3, 4};
	
	for(int i = 0; i < instructions.length(); i++){
		oldA[0] = newA[0];
		oldA[1] = newA[1];
		oldA[2] = newA[2];
		oldA[3] = newA[3];
		char s = instructions[i];
		if(s == 'H'){
			newA[0] = oldA[2];
			newA[1] = oldA[3]; 
			newA[2] = oldA[0];
			newA[3] = oldA[1]; 
		}else{
			newA[0] = oldA[1];
			newA[2] = oldA[3];
			newA[1] = oldA[0];
			newA[3] = oldA[2];
		}
	}
	
	cout << newA[0] << " " << newA[1] << "\n" << newA[2] << " " << newA[3];


	return 0;
}
