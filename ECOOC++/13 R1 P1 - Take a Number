#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

template<class C>constexpr int sz(const C&c){return int(c.size());}

using ll=long long;constexpr const char nl='\n',sp=' ';

  int main(){
      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 
	  string holder = "";
	  int tcount = 0, scount = 0, current  = 0;
	  cin >> current;
	  while(holder.compare("EOF") != 0){
		  getline(cin, holder);
		  if(holder == "TAKE"){
			  tcount++;
		  }else if(holder == "SERVE"){
			  scount++;
		  }
		  
		  if(holder == "CLOSE"){
			  current = (tcount + current) % 999;
			  cout << tcount << " " << tcount - scount << " " << current << "\n";
			  tcount = 0;
			  scount = 0;
		  }
		  
	  }

      return 0;
  }
