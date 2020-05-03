#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	int arr[4];
	for(int i = 0; i < 4; i++){
		cin >> arr[i];
	}
	sort(arr, arr + 4);
	
	cout << arr[0] << "\n" << arr[3] << "\n";

	return 0;
}
