#include <bits/stdc++.h>
using namespace std;

int aX1, aX2, aY1, aY2;
int bX1, bX2, bY1, bY2;
double aSlope, ba;
double bSlope, bb;

double xEquals(double x, double m, double b){
	double y;
	y = m * x + b;
	return y;
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	bool bUndefined = false;
	bool aUndefined = false;

	
	cin >> aX1 >> aY1 >> aX2 >> aY2;
	cin >> bX1 >> bY1 >> bX2 >> bY2;
	
	if(aX2 - aX1 == 0){
	 aUndefined = true;
	}else{
		aSlope = 1.0 * ((aY2 - aY1) / (aX2 - aX1));
		ba = -1.0 * (aSlope * aX1 - aY1);
	}
	
	if(bX2 - bX1 == 0){
		bUndefined = true;
	}else{
		bSlope = 1.0 * ((bY2 - bY1) / (bX2 - bX1));
		bb = -1.0 * (bSlope * bX1 - bY1);
	}
	
	
	if(aUndefined && bUndefined){
		cout << "parallel";
		return 0;
	}
	
	
	
	
	if(aSlope == bSlope && !aUndefined && !bUndefined){
		
		if(xEquals(100.2, aSlope, ba) == xEquals(100.2, bSlope, bb)){
			cout << "coincident";
			return 0;
		}else{
			cout << "parallel";
			return 0;
		}
		
	}else{
		//FIND POINT
		
		//One is defined, one is not
		if(aUndefined){
			cout << "0.000000 " << xEquals(0, bSlope, bb) << ".000000";
			
		}else if(bUndefined){
			cout << "0.000000 " << xEquals(0, aSlope, ba) << ".000000";
		}
				
	}
	
	return 0;
  }
