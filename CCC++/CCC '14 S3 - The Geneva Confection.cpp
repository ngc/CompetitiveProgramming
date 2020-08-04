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
	
	int t, n, current;
	cin >> t;
	
	while(t--){
	si branch, mountain;
	cin >> n;
	int want = 1;
	for(int i = 0; i < n; i++){
		cin >> current;
		mountain.push(current);
	}
	
	while(!mountain.empty() || !branch.empty()){
		
		if(!mountain.empty() && mountain.top() == want){
			mountain.pop();
			want++;
		}else if (!branch.empty() && branch.top() == want){
			branch.pop();
			want++;
		} else if(mountain.size() > 1){
			branch.push(mountain.top()); 
			mountain.pop();
		}else{
			cout << "N\n";
			break;
		}
		
	}
	
	if(want == n + 1) cout << "Y\n";
	
	}
	
    return 0;
}
