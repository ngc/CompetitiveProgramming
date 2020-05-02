#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int l, w, t; 
	cin >> l >> w >> t;
	
	if(t > l || t > w){
		cout << 0;
		return 0;
	}
	
	l = floor(l / t);
	w = floor(w / t);
	cout << l * w;
	
	return 0;
}
