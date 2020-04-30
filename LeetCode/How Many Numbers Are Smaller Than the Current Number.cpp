#include <bits/stdc++.h>
using namespace std;

 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

	vector<int> fin; 
	int count = 0; 
	for(int i = 0; i < nums.size(); i++){
			
			for(int j = 0; j < nums.size(); j++){
				if(nums[i] > nums[j] && i != j){
					count++;
			}
			
	}
	fin.push_back(count);
	count = 0;
	}
	
	return fin;
	
}

int main() {
	
	//cout << smallerNumbersThanCurrent(n);
	
	return 0;
}


