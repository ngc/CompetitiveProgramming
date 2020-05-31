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
	
	int y, m, d;
	
	for(int i = 0; i < n; i++){
		cin >> y >> m >> d;
          if(y < 1989){
           cout << "Yes\n";
            }else if(y == 1989){
                if(m < 2){
                    cout << "Yes\n";
                }else if(m == 2){
                    if(d <= 27){
                        cout << "Yes\n";
                    }else{
                        cout << "No\n";
                    }
                }else{
                    cout << "No\n";
                }
                
            }else{
                cout << "No\n";
            }	
	}

    return 0;
}
