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

int val(char t){
	switch(t){
		case 'A': return 4;
		case 'K': return 3; 
		case 'Q': return 2;
		case 'J': return 1;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string inp; 
	cin >> inp;
	
	string C = "", D = "", H = "", S = "";
	vector<char> cv, dv, hv, sv;
	int cp = 0, dp = 0, hp = 0, sp = 0;
	char current = 'C';
	char it;
	
	for(int i = 0; i < 17; i++){
		it = inp[i];
		switch(it){
			case 'C': current = 'C'; continue; break;
			case 'D': current = 'D'; continue; break;
			case 'H': current = 'H'; continue; break;
			case 'S': current = 'S'; continue; break;
		}

		switch(current){
			case 'C': C.PB(it); cv.PB(it); C.PB(' '); cp += val(it); break;
			case 'D': D.PB(it); dv.PB(it); D.PB(' '); dp += val(it); break;
			case 'H': H.PB(it); hv.PB(it); H.PB(' '); hp += val(it); break;
			case 'S': S.PB(it); sv.PB(it); S.PB(' '); sp += val(it); break;
		}
		
		
	}
	cout << "Cards Dealt\tPoints\n";
	cp += max(0, int(2 - cv.size() + 1));
	dp += max(0, int(2 - dv.size() + 1));
	hp += max(0, int(2 - hv.size() + 1));
	sp += max(0, int(2 - sv.size() + 1));
	cout << "Clubs " << C << "\t" << cp << "\n" << "Diamonds " << D << "\t" << dp << "\n" << "Hearts " << H << "\t" << hp << "\n" << "Spades " << S << "\t" << sp << "\n";
	cout << "\tTotal " << cp + dp + hp + sp;

    return 0;
}
