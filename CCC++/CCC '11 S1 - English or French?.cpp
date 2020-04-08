#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string line; 
	int n, s = 0, t = 0, sizee;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		getline(cin, line);
		sizee = line.length();
		
		for(int d = 0; d < sizee; d++){
			if(tolower(line[d]) == 's'){
				s++;
			}else if(tolower(line[d]) == 't'){
				t++;
			}
		}
	}
	
	if(t > s){
		cout << "English";
	}else{
		cout << "French";
	}
	
	
	return 0;
	
	
}
