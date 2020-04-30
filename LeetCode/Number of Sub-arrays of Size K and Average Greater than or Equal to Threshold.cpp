#include <bits/stdc++.h>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {

	int n = arr.size();
	int s = 0, c = 0;
	
	for(int i = 0; i < k; i++){
		s += arr[i];	
	}
	
	if(s / k >= threshold){
		c++;
	}
	
	for(int i = k; i < n; i++){
		
		s += arr[i] - arr[i - k];
		if(s / k >= threshold){
			c++;
		}
	}
	return c;
	
}

int main() {
	
	cout << numOfSubarrays(n);
	
	return 0;
}
