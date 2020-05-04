#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		
	int a, b, c;
	
	cin >> a >> b >> c;
	if(a + b > c && a + c > b && b + c > a){
		cout << "yes";
	}else{
		cout << "no";
	}
	

	return 0;
  }
