#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n = 0, s1 = 0, s2 = 0, c = 0, t;
  cin >> n;
  int b[n];

  for(int i = 0; i < n; i++){
    cin >> b[i];
  }

  for(int i = 0; i < n; i++){
    cin >> t;
    s2 += t;
    s1 += b[i];
    if(s1 == s2) c = i+1;
  }
  cout << c;

}
