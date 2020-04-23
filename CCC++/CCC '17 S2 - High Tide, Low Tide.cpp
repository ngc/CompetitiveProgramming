#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, l, h; 
	cin >> N;
	int arr[N] = {0};
	
	for(int i = 0; i < N; i++){
		cin >> arr[i]; 
	}
	
	sort(arr, arr+(sizeof(arr)/sizeof(arr[0])));
	
	l = N/2;
	h = (N/2) + 1;
	
	if(N % 2 == 0){
	l--;
	h--;	
	}
	
	for(int i = 0; i < N; i++){
		if(i % 2 == 0){
			cout << arr[l] << " ";
			l--;
		}else{
			cout << arr[h] << " ";
			h++;
		}
	}
	
	return 0;
	
	
}
