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

int strip[100000];

void paint(int x, int y){
    strip[x]++;
    strip[y]--;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;
    int x, y;
    for(int i = 0; i < q; i++){
        cin >> x >> y;
        paint(x, y);
    }

    int counter = 0;
    int total = 0;
    for(int i = 0; i <= n; i++){
        total += strip[i];
        counter += (bool)total;
    }

    cout << n - counter << " " << counter << "\n";

	return 0;
}
