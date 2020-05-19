#include <bits/stdc++.h>
using namespace std;

typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl;

int query(int arr[], int a, int b){
	if(a == 0) return arr[b];
	return arr[b] - arr[a - 1];
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	int arr[n];
	int arr2[n];
	
	cin >> arr[0];
	arr2[0] = arr[0];
	
	for(int i = 1; i < n; i++){
		cin >> arr[i];
		arr2[i] = arr[i] + arr2[i - 1];
	}

	int q;
	cin >> q;
	
	int a, b;
	for(int i = 0; i < q; i++){
		cin >> a >> b;
		cout << query(arr2, a, b) << "\n";
	}

	return 0;
}
