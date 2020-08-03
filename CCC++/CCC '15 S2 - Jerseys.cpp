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

int cChar(char inp){
	switch(inp){
		case '$':  return -1;
		case 'S': return 1;
		case 'M': return 2;
		case 'L': return 3;
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int j, a;
	cin >> j >> a;
	
	char jerseys[j + 1];
	
	for(int i = 1; i < j + 1; i++){
		cin >> jerseys[i];
	}
	
	int counter = 0, playerNum;
	char temp;
	for(int i = 0; i < a; i++){
		cin >> temp >> playerNum;
		if(cChar(jerseys[playerNum]) >= cChar(temp)) {
			counter++;
			jerseys[playerNum] = '$';
		}
	}
	
	cout << counter;
	
    return 0;
}
