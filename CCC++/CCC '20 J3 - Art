#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int my_str2int(const char *s)
{
    int res = 0;
    while (*s) {
        res *= 10;
        res += *s++ - '0';
    }

    return res;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, lx, ly, hx, hy, num = 999;
	cin >> n;
	string lines[n] = {""};
	cin.ignore();
	string input = "";
	for(int i = 0; i < n; i++){
		getline(cin, lines[i]);
		input = lines[i];
		input = input.substr(0, input.find(","));
		char arr[input.length() + 1];
		strcpy(arr, input.c_str());
		if(i == 0){	
		lx = atoi(arr);
		hx = lx;
	}else{
		num = atoi(arr);
		if(num < lx){
		lx = num;
		}else if(num > hx){
			hx = num;
		}
		
	}
		
	}
	num = 999;
	for(int i = 0; i < n; i++){
		input = lines[i];
		input = input.substr(input.find(",") + 1, input.length() - 1);
		char arr[input.length() + 1];
		strcpy(arr, input.c_str());
		if(i == 0){	
		ly = atoi(arr);
		hy = ly;
	}else{
		num = atoi(arr);
		if(num < ly){
		ly = num;
		}else if(num > hy){
			hy = num;
		}
		
	}
		
		
		
	}
	cout << lx - 1 << "," << ly - 1 << "\n";
	cout << hx + 1 << "," << hy + 1;
	


	return 0;
	}
