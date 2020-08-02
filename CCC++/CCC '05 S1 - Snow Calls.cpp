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

char convchar(char inp){
	if(inp == 'A' || inp == 'B' || inp == 'C') return '2';
	if(inp == 'D' || inp == 'E' || inp == 'F') return '3';
	if(inp == 'G' || inp == 'H' || inp == 'I') return '4';
	if(inp == 'J' || inp == 'K' || inp == 'L') return '5';
	if(inp == 'M' || inp == 'N' || inp == 'O') return '6';
	if(inp == 'P' || inp == 'Q' || inp == 'R' || inp == 'S') return '7';
	if(inp == 'T' || inp == 'U' || inp == 'V') return '8';
	if(inp == 'W' || inp == 'X' || inp == 'Y' || inp == 'Z') return '9';
	return '$';
}

string getformatted(string inp){
	string ret = "";
	for(int i = 0; i < inp.length(); i++){
		if(inp[i] == '-') continue;
		
		if(inp[i] >= 48 && inp[i] <= 57){
			ret += inp[i];
		}else{
			char add = convchar(inp[i]); 
			if(add <= '9' && add >= '2') {
				ret += add;
			}
		}
	}
	
	string temp = "";
	int j = 0;
	for(int i = 0; i < 10; i++){
		if(i != 0 && i % 3 == 0 && j < 2){
			temp += '-';
			j++;
		}
		temp += ret[i];
	}
	
	return temp;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	string numbers;
	while(n--){
		cin >> numbers;
		cout << getformatted(numbers) << "\n";
	}
	

    return 0;
}
