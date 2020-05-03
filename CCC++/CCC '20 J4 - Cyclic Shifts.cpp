#include <bits/stdc++.h>
using namespace std;

string reg = "";

void shift(){
	char tc = reg[0];
	string old = reg;
	for(int i = 0; i < reg.length() - 1; i++){
		reg[i] = old[i + 1];
	}
	reg[reg.length() - 1] = tc;
	
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string t;
	cin >> t >> reg;
	
	for(int i = 0; i < t.length(); i++){
		
		if(t.find(reg) < 1001){
			cout << "yes";
			return 0;
		}
		shift();
		
		
	}
	cout << "no";
		
		
	return 0;
}
