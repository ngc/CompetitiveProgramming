#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
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
typedef queue<int> qi;
typedef queue<char> qc;
typedef stack<int> si;
typedef stack<char> sc;


int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	string t;
	cin >> n >> t;
	qc q; 
	for(int i = 0; i < n; i++){
		q.push(t[i]);
	}
	
	string current = "";
	current += q.front();
	q.pop();
	
	while(!q.empty()){
	string temp = "";
	if(q.front() < current[0] || q.front() == current[0]){
		temp += q.front();
		temp += current;
		current = temp;
	}else{
		current += q.front();
	}
	q.pop();
	}
	
	cout << current << "\n";
	
	return 0;
}
