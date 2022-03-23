#include <iostream>
using namespace std;

int ayam(int a, int b){
	if(b == 0){return 0;}
	else if(b == 1){return a;}
	else{
		return ayam(a, b/2) * 2 + ayam(a, b % 2);
	}
}

int main(){
	cout << ayam(19,39);
	return 0;
}
