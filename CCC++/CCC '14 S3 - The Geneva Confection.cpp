#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, n;
	cin >> t;
	
	for(int e = 0; e < t; e++){
	
		cin >> n;
		int want = 1, temp;
		bool flag = true;
		stack<int> mountain;
		stack<int> bb;
			   
		for(int i = 0; i < n; i++){
			cin >> temp;
			mountain.push(temp);
		}
		
		while(!mountain.empty() || !bb.empty()){
			
			if(!mountain.empty() && mountain.top() == want){
				mountain.pop();
				want++;
				
			}else if(!bb.empty() && bb.top() == want){
				bb.pop();
				want++;
				
			}else if(mountain.size() > 1){
				 bb.push(mountain.top());
				mountain.pop();
				
			}else{
				cout << "N\n";
				flag = false;
				break;
				
			}
			if(flag && want == n + 1) cout << "Y\n";
		} 
				
	}	
		
	return 0;
}
