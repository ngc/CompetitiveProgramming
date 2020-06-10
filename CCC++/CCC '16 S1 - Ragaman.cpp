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

	string a, b;
	cin >> a >> b;
	if(a.length() != b.length()){
		cout << "N";
		return 0;
	}
	
	int Adist[26] = {0};
	int Bdist[26] = {0};
	int wc = 0;
	
	for(int i = 0; i < a.length(); i++){
		Adist[a[i] - 'a']++;
		if(b[i] != '*'){ 
			Bdist[b[i] - 'a']++;
		}else{
			wc++;
		}
	}

	int dif = 0;
	
	for(int i = 0; i < 26; i++){
		if(Adist[i] < Bdist[i]){
			cout << "N";
			return 0;
		}else{
			dif += Adist[i] - Bdist[i];
		}
	}
	cout << ((dif == wc) ? "A" : "N");

	return 0;
}
