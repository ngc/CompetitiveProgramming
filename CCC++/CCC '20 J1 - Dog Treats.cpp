#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(void){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int h = 0, d = 0;
	for(int i = 1; i < 4; i++){
		cin >> d;
		h += d * i;
	    if(h >= 10){
		cout << "happy";
		return 0;
	    }
	}
	
	cout << "sad";
	
	return 0;
}
