#include <iostream>
using namespace std;

int apaIni(int kwak){
	int i, j;
	if(kwak * kwak == kwak){
		return false;
	}
	
	for(i = 2; i <= (kwak - 1); i++){
		j = 1;
		while(j * i <= kwak){
			if(i * j == kwak){
				return false;
			}
			j += 1;
		}
	}
	return true;
}

int apaItu(int kwok){
	int i, kwak, kwik;
	kwak = kwok;
	kwik = 0;
	
	for(i = 0; i <= kwak; i++){
		if(apaIni(i) == true){
			kwik += 1;
		}
	}
	return kwik;
}

int main(){
	cout << apaItu(1000);
	return 0;
}
