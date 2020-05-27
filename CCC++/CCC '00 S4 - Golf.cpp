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

int calculate(int distance, int clubCount, int clubs[]){
	int dp[5281] = {0};
	for(int i = 1; i <= distance; i++){
      int lowest = INT_MAX;
      for(int j = 0; j < clubCount; j++){
        if(i - clubs[j] >= 0 && dp[i - clubs[j]] >= 0){
          if(dp[i - clubs[j]] < lowest) lowest = dp[i - clubs[j]];
        }
      }
      if(lowest != INT_MAX){
        dp[i] = lowest + 1;
      }else{
        dp[i] = INT_MIN;
      }
    }
    return dp[distance];
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int clubs[33];
	int clubCount, distance;
    
    cin >> distance >> clubCount;
    
    for(int i = 0; i < clubCount; i++){
      cin >> clubs[i];
    }
    
    int ans = calculate(distance, clubCount, clubs);
    
    cout << ((ans == INT_MIN) ? "Roberta acknowledges defeat.\n" : "Roberta wins in " + to_string(ans) + " strokes.\n"); 


    return 0;
}
