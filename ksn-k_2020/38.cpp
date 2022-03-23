#include <iostream>
using namespace std;

int kucing(int tikus, int keju){
	if(tikus > keju){
		return 0;
	} else {
		return tikus + kucing(tikus * 2 + 1, keju);
	}
}

int main(){
	cout << kucing(1,2018);
	return 0;
}
