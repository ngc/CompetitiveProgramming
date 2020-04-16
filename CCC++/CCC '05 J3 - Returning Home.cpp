#include <iostream>
#include <queue>
using namespace std;

string vert(char in){
	
	if(in == 'L'){
		return "RIGHT";
	}else{
		return "LEFT";
	}
	
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  vector<pair<string, char>> main;
  string temp;
  char t;
  while(temp != "SCHOOL"){
  cin >> t;
  cin >> temp;
  main.push_back(make_pair(temp, t));
  }
	for(int i = main.size() - 1; i > 0; i--){
	cout << "Turn " << vert(main[i].second) << " onto " << main[i - 1].first << " street.\n"; 
	}
	cout << "Turn " << vert(main[0].second) << " into your HOME."; 
}
