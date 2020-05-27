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
	int n, cost = 0;
	cin >> n;
    
    while (n > 1) {
        for (int i = 2; i <= n; i++)
            if (n % i == 0) {
				int temp = n / i; 
                n -= temp;
                cost += n / temp;
                break;
            }
    }
    
    cout << cost << "\n";
    return 0;
}
