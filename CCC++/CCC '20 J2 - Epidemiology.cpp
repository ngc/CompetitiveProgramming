#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int p, n, r, dn, count = 0, n1;
	cin >> p >> n >> r;
	dn = n;
	
	while(n <= p){
		n1 = n;
		n += dn * r;
		dn = n - n1;
		count++;
	}
	cout << count;
	
}
