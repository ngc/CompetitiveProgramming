#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	scanf("%d", &n);
	if(n % 2 != 0){
		cout << "bad\n";
		return 0;
	}
	
	string arr1[n];
	string arr2[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr1[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(i == 0) cin >> arr2[j];
			if(arr1[i] == arr2[j]){
				if(arr2[i] != arr1[j] || i == j){
					cout << "bad";
					return 0;
				}
			}
		}
	}
	
	cout << "good\n";
	
	return 0;
}

