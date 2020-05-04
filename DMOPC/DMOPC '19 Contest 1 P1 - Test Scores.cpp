#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	long N;
	cin >> N;
	
	long n, a, b, t;
	for(int i = 0; i < N; i++){
		
		cin >> n >> a >> b >> t;
		
		double ans = ceil( 1.0 * (t + b * n) / (a + b));
		if(ans > n){
			cout << "-1\n";
		}else{
			cout << (int)round(ans) << "\n";
		}
		
	}

	return 0;
}

