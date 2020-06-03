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

int c[52];
int n;
LL table[52][252];
LL done[52][252];

LL solve(int i, int make){

    if(make<0) return 0;
    if(make==0)return 1;
    if(i > n) return 0;
    if(!done[i][make]) {
        table[i][make] = solve(i, make - c[i]) + solve(i + 1, make);
        done[i][make] = true;
    }
    
    return table[i][make]; 
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int make;
    cin >> make >> n;
    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }
    memset(done, false, sizeof(done));
    cout << solve(1, make);

    return 0;
}
