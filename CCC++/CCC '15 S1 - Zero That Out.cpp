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
	cin >> n;
	int number;
	stack<int> numbers;
	while(n-- && cin >> number){
		if(number == 0 && !numbers.empty()) numbers.pop(); 
		else numbers.push(number);
	}
	
	int sum = 0;
	while(!numbers.empty()){
		sum += numbers.top();
		numbers.pop();
	}
	cout << sum << "\n";
	
    return 0;
}
