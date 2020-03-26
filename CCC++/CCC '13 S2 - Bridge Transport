#include <iostream>
#include <string>
using namespace std;

int main(){
	int w, n, app, c = 0;
	cin >> w >> n;
	int cars[w + 3] = { 0 };

	for(int i = 0; i < n; i++){
		cin >> app;
		cars[i + 3] = app;
	}

		for(int i = 0; i < n; i++){

			if(cars[i] + cars[i + 1] + cars[i + 2] + cars[i + 3] <= w){
				c++;
			}else{
				break;
			}
		}

	cout << c << endl;

}
