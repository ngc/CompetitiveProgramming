#include <iostream>

int main() {
  std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
  
  int n, a, d, p1 = 100, p2 = p1;
  std::cin >> n;
  for(int i = 0; i < n; i++){
  
	std::cin >> a >> d; 
	
	if(a > d){
		p2 -= a;
	}else if(d > a){
		p1 -= d;
	} 
}
std::cout << p1 << "\n" << p2;  
  
 }


