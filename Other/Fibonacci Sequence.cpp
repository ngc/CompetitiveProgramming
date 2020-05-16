#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LL; 
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
typedef map<LL, LL> mll;
#define F first
#define S second
#define PB push_back

//10000000000000000000 | This is the max value of n for the problem, useful for testing

mll m;
LL mod = 1000000007; 

LL fibo(LL n) {
	if(m.count(n)) return m[n];
	
	if(n % 2 == 0){
		m[n] = (fibo(n / 2) * fibo((n / 2)) + fibo((n / 2) - 1) * fibo((n / 2)-1)) % mod;
	}else{ 
		m[n] = (fibo(n / 2)*fibo((n / 2) + 1) + fibo((n / 2) - 1) * fibo((n / 2))) % mod;
	}
	return m[n];
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	LL in;
	cin >> in;
	in--;
	
	m[0] = 1; 
	m[1] = 1;
	cout << fibo(in);
    return 0;
}
