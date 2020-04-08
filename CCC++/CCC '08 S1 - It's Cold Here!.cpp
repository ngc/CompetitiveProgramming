#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

template<class C>constexpr int sz(const C&c){return int(c.size());}

using ll=long long;constexpr const char nl='\n',sp=' ';

  int main(){
      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		int t, large = 0;
		string temp, store;
		for(int i = 0; i < 10000; i++){
			cin >> temp;
			cin >> t;
			if(t <= large){
				large = t;
				store = temp;
			}
			if(temp == "Waterloo"){
				break;
			}
			
		}
		cout << store;
      return 0;
  }
