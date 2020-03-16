#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

template<class C>constexpr int sz(const C&c){return int(c.size());}

using ll=long long;constexpr const char nl='\n',sp=' ';

  int main(){
      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	  string holder = "";
	  int counters[8] = {0}, sum = 0, comp = 0;
	  while(comp < 10){
		  getline(cin, holder);
		  if(holder.compare("end of box") == 0){
			  comp++;
			  
		      for(int i = 0; i < 8; i++){
		  
				  if(counters[i] % 7 == 0){
					  sum += (counters[i] / 7) * 13;
				  } else{
					  
					 sum += 13*((counters[i] / 7) + 1);
					  
				  }
			  }
	  
			 cout << sum << "\n";
			  
			 counters[0] = 0;
			 counters[1] = 0;
			 counters[2] = 0;
			 counters[3] = 0;
			 counters[4] = 0;
			 counters[5] = 0;
			 counters[6] = 0;
			 counters[7] = 0;
			 counters[8] = 0;
			  sum = 0; 

		  }
		  
		  if(holder == "orange"){
			  counters[0]++;
			  
		  }else if(holder == "blue"){
			counters[1]++;
			  
		  }else if(holder == "green"){
			counters[2]++;
			  
		  }else if(holder == "yellow"){
			counters[3]++;
			  
		  }else if(holder == "pink"){
			counters[4]++;
			  
		  }else if(holder == "violet"){
			counters[5]++;
			  
		  }else if(holder == "brown"){
			counters[6]++;
			  
		  }else if(holder == "red"){
			sum += 16;
			  
		  }
		  
	  }
	  


      return 0;
  }
