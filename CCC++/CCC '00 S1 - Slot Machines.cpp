#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int balance, mac1, mac2, mac3;
	int counter = 0;
	cin >> balance >> mac1 >> mac2 >> mac3;
	
	while(balance - counter > 0){
		counter++;
		if(counter % 3 == 0){
			//PLAY MACHINE 3
			mac3++;
			if(mac3 % 10 == 0){
			balance += 9;
		}
		
		}else if(counter % 2  == 0){
			//PLAY MACHINE 2
			mac2++;
			if(mac2 % 100 == 0){
			balance += 60;
			}
			
		}else{
			//PLAY MACHINE 1
			mac1++;
			if(mac1 % 35 == 0){
			balance += 30;
			}
		}
	
	}
	cout << "\nMartha plays " << counter << " times before going broke.";
	
	
}
