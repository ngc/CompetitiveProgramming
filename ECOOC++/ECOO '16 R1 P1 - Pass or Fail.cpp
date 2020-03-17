#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

template<class C>constexpr int sz(const C&c){return int(c.size());}

using ll=long long;constexpr const char nl='\n',sp=' ';

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int wt, wa, wp, wq, n, counter = 0, temp;
    double avg = 0;

	for(int l = 0; l < 10; l++){
		cin >> wt >> wa >> wp >> wq >> n;
		int weights [4] = {wt, wa, wp, wq};
		counter = 0;
    for(int i = 0; i < n; i++){
		avg = 0;
		for(int d = 0; d < 4; d++){			
			cin >> temp;
			avg += temp * (weights[d] * 0.01);
		}
		if(avg >= 50){
			counter++;
		}
	}
	cout << counter << "\n";
}	
	return 0;
}
    

