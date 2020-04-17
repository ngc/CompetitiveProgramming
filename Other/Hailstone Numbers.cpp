#include <iostream>
using namespace std;


int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
	int n, a = 0;
	cin >> n;
	while(n != 1){
		if(n != 1){
		a++;
		}
		
		if(n % 2 == 0){
			n /= 2;
		}else{
			n *= 3; 
			n++;
		}	
	}
	cout << a;
  
  }
