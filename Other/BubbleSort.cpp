#include <math.h>
#include <bits/stdc++.h>

using namespace std;

template<class C>constexpr int sz(const C&c){return int(c.size());}

using ll=long long;constexpr const char nl='\n',sp=' ';


	void flipper(int *a, int *b){
		
		int temp = *a;
		*a = *b;
		*b = temp;
	}
	
	void printit(int a[], int n){
		
		for(int i = 0; i < n; i++){
		  cout << a[i] << " ";
	  }
	  cout << "\n";
	  
	}


  int main(){
      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	  int n, temp;
	  cin >> n; 
	  int a[n] = {0};
	  for(int i = 0; i < n; i++){
		cin >> temp;
		a[i] = temp;
	  
	  }
	  printit(a, n);
	  for(int g = 0; g < 256; g++){
		  
	  for(int i = 0; i < n - 1; i++){
		  if(a[i] > a[i + 1]){
			  flipper(&a[i], &a[i + 1]);
			  printit(a, n);
		  }
		  
		
		}
	}
	  
      return 0;
  }
