#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int g, p, temp;
	cin >> g >> p;
	set<int> main;
	
	for(int i = 1; i <= g; i++){
		main.insert(-i);
	}
	
	for(int i = 0; i < p; i++){
		
		cin >> temp;
		if(main.lower_bound(-temp)==main.end()){
			cout << i;
			return 0;
		}
		main.erase(main.lower_bound(-temp));
		
	}
	cout << p;
	return 0;
}
