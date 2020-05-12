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

int n, l, w;

char debugrooms(int in){
	
	switch(in){
		case -1: return 'X';
		case 1: return 'A';
		case 2: return 'B';
		case 3: return 'C';
		case 4: return 'D';
		case 5: return 'E';
		case 6: return 'F';
		case 7: return 'G';
		case 8: return 'H';
		case 9: return 'I';
	}
	
	return 'z';
}

int verify(int i, int j, int k, vi *rooms){
	
	if(i >= 0 && i < l && j >= 0 && j < w && rooms[i][j] == 0){
		rooms[i][j] = k;
		return 1 + verify(i, j - 1, k, rooms) + verify(i + 1, j, k, rooms) + verify(i - 1, j, k, rooms) + verify(i, j + 1, k, rooms);
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	cin >> n >> l >> w; 
	string map[l];
	vi rooms[l];
	
	for(int i = 0; i < l; i++){
		cin >> map[i];
	}
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < w; j++){
			if(map[i][j] == 'I'){
				rooms[i].push_back(-1);
			}else{
				rooms[i].push_back(0);
			}
		}
	}
	
	int k = 0;
	vi rsizes;
	for (int i = 0 ; i < l; i++)
	    for (int j = 0 ; j < w; j++)
		if (rooms[i][j] == 0)
		{
		    rsizes.push_back(verify(i, j, k + 1, rooms));
		    k++;
		}
	
		sort(rsizes.begin(), rsizes.end());
		stack<int> sizestack;
		
		for(int i = 0; i < k; i++){
			sizestack.push(rsizes[i]);
		}
		
		
		int total = 0;
		int c = 0;
		
		while(sizestack.empty() == false && total + sizestack.top() <= n){
			
			total += sizestack.top();
			sizestack.pop();
			c++;
		} 
		
		if(c == 1){
			cout << c << " room, " << n - total << " square metre(s) left over\n";
		}else{
			cout << c << " rooms, " << n - total << " square metre(s) left over\n";
		}
		
		
	//DEBUG
	/*
	for(int i = 0; i < l; i++){
		for(int j = 0; j < w; j++){
			cout << debugrooms(rooms[i][j]);
		}
		cout << "\n";
	}
	*/
	//
	
	return 0;
}
