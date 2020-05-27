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
	int r, x, y;
	cin >> r >> x >> y;
	int tab[3][3];
	pii lmag = pii(101, 0);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> tab[i][j];
		}
		if(tab[i][2] < lmag.F) lmag = pii(tab[i][2], i); 
	}
	
	int XP = tab[lmag.S][0];
	int YP = tab[lmag.S][1];
	
	cout << ((pow((XP - x), 2) + pow((YP - y), 2) < pow(r, 2)) ? "What a beauty!" : "Time to move my telescope!");
	

    return 0;
}
